/*
 * Author: PabstMirror
 * Modified for WOG3 by Kato :)
 *
 * Tracks deaths/kills and logs to the end mission disaplay
 * Attemps to log kills from ace_medical by using ace_medical_lastDamageSource
 *
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */

// Variables:
acex_kT_KillsArray = [];
acex_kT_KillerArray = [];
acex_kT_KillsText = "None";
acex_kT_KillerText = "None";

// Add Event Handlers:
["acex_kT_kill", {
    params ["_name", "_killInfo"];
	if (count acex_kT_KillsArray>0) then {
		private _lastkill = acex_kT_KillsArray select ((count acex_kT_KillsArray)-1);
		if ((_lastkill find _name) ==-1) then {
			acex_kT_KillsArray pushBack format ["%1 %2", _name, _killInfo];
			acex_kT_KillsText = (acex_kT_KillsArray joinString "<br/>");
		};
	}
	else
	{
		acex_kT_KillsArray pushBack format ["%1 %2", _name, _killInfo];
		acex_kT_KillsText = (acex_kT_KillsArray joinString "<br/>");
	};
}] call CBA_fnc_addEventHandler;

["acex_kT_death", {
    params ["_name", "_killInfo"];
    acex_kT_KillerArray pushBack format ["%1 %2", _name, _killInfo];
    acex_kT_KillerText = (acex_kT_KillerArray joinString "<br/>");
}] call CBA_fnc_addEventHandler;

// Add Killed Event Handler - killed EH and lastDamageSource var are local only
["CAManBase", "killed", {
    params ["_unit", ["_killer", objNull]];
    private _killInfo = [];

    if ((isNull _killer) || {_killer == _unit}) then {
        private _aceSource = _unit getVariable ["ace_medical_lastDamageSource", objNull];
        // TRACE_1("",_aceSource);
        if ((!isNull _aceSource) && {_aceSource != _unit}) then {
            // _killInfo pushBack "Last damage";
            _killer = _aceSource;
        };
    };

	_unit setVariable ["wog3_ace_medical_lastDamageSource", _killer,true];
	
    // If killer is a vehicle get the commander (this is how vanilla does it?) and log the vehicle type
    if ((!isNull _killer) && {!(_killer isKindof "CAManBase")}) then {
        _killInfo pushBack format ["Vehicle: %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
        _killer = effectiveCommander _killer;
    };
    private _unitIsPlayer = hasInterface && {_unit == ace_player}; // isPlayer check will fail at this point
    private _killerIsPlayer = (!isNull _killer) && {_unit != _killer} && {[_killer] call ace_common_fnc_isPlayer};

    // Don't do anything if neither are players
    if (!(_unitIsPlayer || _killerIsPlayer)) exitWith {};

    // Log firendly fire
    private _fnc_getSideFromConfig = {
        params ["_object"];
        switch (getNumber (configFile >> "CfgVehicles" >> (typeOf _object) >> "side")) do {
            case (0): {east};
            case (1): {west};
            case (2): {resistance};
            default {civilian};
        };
    };
    if ((!isNull _killer) && {_unit != _killer} && {_killer isKindOf "CAManBase"}) then {
        // Because of unconscious group switching/captives it's probably best to just use unit's config side
        private _unitSide = [_unit] call _fnc_getSideFromConfig;
        private _killerSide = [_killer] call _fnc_getSideFromConfig;
        if ([_unitSide, _killerSide] call BIS_fnc_areFriendly) then {
            _killInfo pushBack "<t color='#ff0000'>Friendly Fire</t>";
        };
    };

    // Log bleed out - ToDo: could change setDead to log the specific medical cause (e.g. blood loss / cardiac arrest / overdose)
    private _bloodVolume = _unit getVariable ["ace_medical_bloodVolume", 100];
    if (_bloodVolume <= 60) then {
        _killInfo pushBack format ["Blood %1%2", floor _bloodVolume, "%"];
    };

    // Parse info into text
    _killInfo = if (_killInfo isEqualTo []) then {
        ""
    } else {
        format [" - [%1]", (_killInfo joinString ", ")];
    };
	
	// _killInfo = if (_killInfo isEqualTo []) then {""};

    // If unit was player then send event to self
    if (_unitIsPlayer) then {
        private _killerName = "Self?";
        if ((!isNull _killer) && {_unit != _killer}) then {
            if (_killerIsPlayer) then {
                _killerName = [_killer, true, false] call ace_common_fnc_getName;
            } else {
                _killerName = format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName")];
            };
        };
        ["acex_kT_death", [_killerName, _killInfo]] call CBA_fnc_localEvent;
    };

    // If killer was player then send event to killer
    if (_killerIsPlayer) then {
        private _unitName = if (_unitIsPlayer) then {
            [_unit, true, false] call ace_common_fnc_getName; // should be same as profileName
        } else {
            format ["*AI* - %1", getText (configfile >> "CfgVehicles" >> (typeOf _unit) >> "displayName")];
        };
        ["acex_kT_kill", [_unitName, _killInfo], _killer] call CBA_fnc_targetEvent;
    };
}] call CBA_fnc_addClassEventHandler;

