/*
	author: Liquid
	description: Switch between active and second backpack.
	returns: nothing
*/

params ["_unit"];
private ["_otherItems","_mags"];

//get active backpack
if ((backpack _unit) != "") then {
    if ((backpack _unit) isKindOf "TFAR_Bag_Base") then {
        //loadbackpack return not weight but percent used of maximumLoad
        wog_activeBackpack = [(backpack _unit), [], [], getnumber (configfile >> "CfgVehicles" >> (backpack _unit) >> "mass") + getnumber (configfile >> "CfgVehicles" >> (backpack _unit) >> "maximumLoad") * (loadBackpack _unit), (_unit call TFAR_fnc_backpackLR) call TFAR_fnc_getLrSettings];
    } else {
        _otherItems = [];
        _mags = magazinesAmmoCargo backpackContainer _unit;

        {
          if (!(_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"])) then { _otherItems pushBack _x; };
        } forEach (backpackItems _unit);

        wog_activeBackpack = [(backpack _unit), _mags, _otherItems, getnumber (configfile >> "CfgVehicles" >> (backpack _unit) >> "mass") + getnumber (configfile >> "CfgVehicles" >> (backpack _unit) >> "maximumLoad") * (loadBackpack _unit)];
        _otherItems = nil;
    };
} else {
    wog_activeBackpack = ["", [], [], 0];
};

//remove
[_unit, _unit, (wog_activeBackpack select 3)] call ace_movement_fnc_addLoadToUnitContainer;
removeBackpack _unit;

//switch
if (!isNil "wog_secondBackpack") then
{
    if ((wog_secondBackpack select 0) == "") exitWith {
        _tempBackpack = wog_activeBackpack;
        wog_activeBackpack = wog_secondBackpack;
        wog_secondBackpack = _tempBackpack;
    };

    if ((wog_secondBackpack select 0) isKindOf "TFAR_Bag_Base") then {
        _unit addBackpack (wog_secondBackpack select 0);
        clearAllItemsFromBackpack _unit;
        [(_unit call TFAR_fnc_backpackLR) select 0, (_unit call TFAR_fnc_backpackLR) select 1, wog_secondBackpack select 4] call TFAR_fnc_setLrSettings;
        [_unit, _unit, -(wog_secondBackpack select 3)] call ace_movement_fnc_addLoadToUnitContainer;
    }
    else {
       _unit addBackpack (wog_secondBackpack select 0);
       clearAllItemsFromBackpack _unit;
       { (backpackContainer _unit) addMagazineAmmoCargo [(_x select 0), 1, (_x select 1)]; } forEach (wog_secondBackpack select 1);
       { _unit addItemToBackpack _x; } forEach (wog_secondBackpack select 2);
       [_unit, _unit, -(wog_secondBackpack select 3)] call ace_movement_fnc_addLoadToUnitContainer;
    };

    //store active to second
    _tempBackpack = wog_activeBackpack;
    wog_activeBackpack = wog_secondBackpack;
    wog_secondBackpack = _tempBackpack;
} else {
    //store active to second
    wog_secondBackpack = wog_activeBackpack;
    wog_activeBackpack = ["", [], [], 0];
};