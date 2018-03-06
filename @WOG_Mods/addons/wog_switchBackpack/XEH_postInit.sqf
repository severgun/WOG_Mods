/*
	author: Liquid
	description: none
	returns: nothing
*/

private ["_condition", "_statement", "_action", "_modifierFunc"];

_condition = {
    true
};

_statement = {
    [this] call fnc_wog_switchBachpack;
};

_modifierFunc = {
    params ["_target", "_player", "_params", "_actionData"];
    diag_log format ["_modifierFunc [%1, %2, %3]", _target, _player, _params];

    // Modify the action - index 1 is the display name, 2 is the icon...
    if ((wog_secondBackpack select 0) == "") then {
        _actionData set [1, localize "STR_SwitchBackpack"];
    } else {
        _actionData set [1, format["%1 %2", localize "STR_SwitchBackpackTo", getText (configfile >> "CfgVehicles" >> (wog_secondBackpack select 0) >> "displayName")]];
        _actionData set [2, getText (configfile >> "CfgVehicles" >> (wog_secondBackpack select 0) >> "picture")];
    };
};


/*
 * Argument:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon <STRING>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 * 5: Insert children code <CODE> (Optional)
 * 6: Action parameters <ANY> (Optional)
 * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
 * 8: Distance <NUMBER> (Optional)
 * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
 * 10: Modifier function <CODE> (Optional)
 */
_action = ["Switch Backpack", localize "STR_SwitchBackpack", "", _statement, _condition, {}, [], "", 1, [false, true, false, false, false], _modifierFunc] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;

