 /*
    Name:

    Author(s):
        Zealot

    Description:

    Parameters:
        Nothing
    Returns:
        Nothing
*/
if (not hasInterface) exitWith {};
waitUntil {not isNil "wmt_global_srvBrfData" and not isNull player};

private _beginTime = diag_tickTime;

private _squadTxt = "";
private _vehicleTxt = "";
private _enemyVehTxt = "";
private _markersPool = [];
private _friendlySides = ([playerSide] call BIS_fnc_friendlySides) - [civilian, sideLogic];
private _enemySides = ([playerSide] call BIS_fnc_enemySides) - [civilian, sideLogic];

private ["_pos","_side","_class","_marker","_vehname","_groupid","_units"];

private _friendlyVehs = [];
private _enemyVehs = [];
private _friendlySquads = [];

private _fnc_fixPicName = {
    private _res=_this;
    if (isText (configFile / "CfgVehicleIcons" / _res)) exitwith {
        getText (configFile / "CfgVehicleIcons" / _res)
    };
    if(count (_res) < 4) exitwith{_res};
    private _ext = _res select [count _res  - 4,1];
    if(_ext!=".") then {_res=_res+".paa";};
    _res
};

private _fnc_getVehMarkerName = {
  format ["WMT_PrepareTime_%1_%2", floor ((_this select 0) * 10), floor ((_this select 1) * 10)];
};

if (getClientState != "BRIEFING READ" || getClientState == "NONE") then {
    // Show on briefing information about group's ammo
    [] call WMT_fnc_SquadInfoExt;
} else {
    private _units = (group player) getVariable ["WMT_BriefingUnitsInfo", []];
    if (count _units != 0 ) then {
        _marker = format ["WMT_PrepareTime_%1_%2", playerSide, groupID group player];
        private _myTxt = format ["<font color='#c7861b'><marker name='%2'>%1:</marker></font><br/>", groupID group player, _marker];
        {
            _myTxt = _myTxt + getText (configFile >> "CfgVehicles" >> (_x select 0) >> "Displayname") + ":  " + (_x select 1);
            _myTxt = _myTxt + "<br/>";
        } foreach _units;
        _myTxt = _myTxt + "<br/>";
        ["diary",localize "STR_WMT_MySquad", _myTxt] call WMT_fnc_CreateDiaryRecord;
    };
};

private _invVehTxt = "";
{
    if ( (_x select 0) == "V") then {
        private ["_pic","_marker"];

        _x params ["_type","_pos","_class","_side","_inv","_isVeh"];
        _vehname = format ["%1", getText (configFile >> "CfgVehicles" >> _class >> "displayName") ];
        _pic = getText (configFile / "CfgVehicles" / _class / "picture");
        if (_pic == "pictureThing") then {
            if ((_class == "ACE_medicalSupplyCrate")||(_class == "ACE_medicalSupplyCrate_advanced")) then {
              _pic = "\WMT_Main\pic\medbox.paa"
              } else {
             _pic = "\A3\Weapons_F\Ammoboxes\data\ui\icomap_ammo_CA.paa"
            };
        };
         // иконка техники и ящиков (нужно добавить массив с классами ящиков и иконки для них)

        if (_side in _friendlySides) then {
            _markerName = _pos call _fnc_getVehMarkerName;
            _marker = [_markerName,_pos,_vehname,"ColorYellow","mil_box",[1, 1],"ICON",0,"Solid"] call WMT_fnc_CreateLocalMarker;
            _markersPool pushback _marker;

            if ((count _inv) > 0) then {
                _invVehTxt = _invVehTxt + format ["<br/><img image='%3' height=24/> <font color='#c7861b'><marker name='%2'>%1</marker></font><br/>",
                  format ["%1", getText (configFile >> "CfgVehicles" >> _class >> "displayName") ], _pos call _fnc_getVehMarkerName, _pic call _fnc_fixPicName];

                if (!isNil "_inv") then {
                  {
                     private _data = (_x select 0) call wmt_fnc_GetItemConfigEntry;
                     _data params ["_pic","_text","_tooltip","_cfgPath"];
                     _invVehTxt = _invVehTxt + format ["<img image='%1' height=24 style = 'border: 1px solid red;'/>x%2 ", _pic call _fnc_fixPicName, _x select 1];
                  } forEach _inv;
                };
                _invVehTxt = _invVehTxt + "<br/>";
            };

            if (_isVeh) then {
                _friendlyVehs pushback _class;
            };
        };
        if (_side in _enemySides && _isVeh) then {
            _enemyVehs pushback _class;
        };
    };
    if ( (_x select 0) == "S") then {
        _pos = _x select 1;
        _groupid = _x select 2;
        _side = _x select 3;
        _playersNum = _x select 4;
        _leadName = _x select 5;
        _units = _x select 6;

        if (_side in _friendlySides) then {
            private _text = format ["%1 %2:%3", _groupid call wmt_fnc_LongGroupNameToShort,_leadName,_playersNum];

            _marker = format ["WMT_PrepareTime_%1_%2", _side, _groupid];
            _marker = [_marker,_pos,_text,([_side, true] call BIS_fnc_sidecolor),"mil_dot",[1, 1],"ICON",0,"Solid"] call WMT_fnc_CreateLocalMarker;
            _markersPool pushback _marker;

            _squadTxt = _squadTxt + format ["<font color='#c7861b'><marker name='%2'>%1:</marker></font><br/>", _groupid, _marker];
            {
                _squadTxt = _squadTxt + getText (configFile >> "CfgVehicles" >> format["%1",(_x select 0)] >> "Displayname")+ ":  " + (_x select 1);
                _squadTxt = _squadTxt + "<br/>";
            } foreach _units;
            _squadTxt = _squadTxt + "<br/>";

            _friendlySquads pushback _x;
        };
    };
} foreach wmt_global_srvBrfData;

["diary",localize "STR_WMT_Squads", _squadTxt] call WMT_fnc_CreateDiaryRecord;

if (count _enemyVehs != 0 and (isNil "wmt_param_campaignBriefingMode")) then {
    _enemyVehs = _enemyVehs call BIS_fnc_consolidateArray;
    {
        _pic = getText (configFile / "CfgVehicles" / (_x select 0) / "picture");
        _vehname = format ["%1", getText (configFile >> "CfgVehicles" >> (_x select 0) >> "displayName") ];

        _enemyVehTxt = _enemyVehTxt + format ["<img image='%3' height=24/> %1- <font color='#c7861b'>%2</font>",_vehname,_x select 1,_pic call _fnc_fixPicName];
        _enemyVehTxt = _enemyVehTxt + "<br/>";
    } foreach _enemyVehs;

    ["diary", localize "STR_WMT_EnemyVehicles", _enemyVehTxt] call WMT_fnc_CreateDiaryRecord;
};

["diary",localize "STR_WMT_JournalVehInventory", _invVehTxt] call WMT_fnc_CreateDiaryRecord;

if (count _friendlyVehs != 0 ) then {
    _friendlyVehs = _friendlyVehs call BIS_fnc_consolidateArray;
    {
        _pic = getText (configFile / "CfgVehicles" / (_x select 0) / "picture");
        _vehname = format ["%1", getText (configFile >> "CfgVehicles" >> (_x select 0) >> "displayName") ];

        _vehicleTxt = _vehicleTxt + format ["<img image='%3' height=24/> %1- <font color='#c7861b'>%2</font>",_vehname,_x select 1,_pic call _fnc_fixPicName];
        _vehicleTxt = _vehicleTxt + "<br/>";
    } foreach _friendlyVehs;

    ["diary", localize "STR_WMT_Vehicles", _vehicleTxt] call WMT_fnc_CreateDiaryRecord;
};

sleep 0.01;

if (isNil "WMT_pub_frzState") then {
    waitUntil {time > 120 and (diag_tickTime - _beginTime) > 120};
} else {
    waitUntil {WMT_pub_frzState >= 3};
    sleep 120;
};

{deleteMarkerLocal _x;} foreach _markersPool;
