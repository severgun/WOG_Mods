#include "script_component.hpp"

ADDON = false;

GVAR(mainArray)	= [];
GVAR(suppressed) = false;
GVAR(Threshold) = 0;	// Changing value
GVAR(lastShotAt) = 0;	// The time the player got shot at last time (Just creates the variable)
GVAR(variableHandler) = call CBA_fnc_createNamespace;
GVAR(enabled) = true;
PREP(readCacheValues);
PREP(mainHandler);
PREP(main);
PREP(impact);
PREP(pinnedDown);
PREP(fired);

[
    "L_Suppress_enabled",
    "CHECKBOX",
    ["Enable Supress", "Enable Suppress Effect"],
    "Laxemann Suppress",
    true,
    nil,
    {
        params ["_value"];
        GVAR(enabled) = _value;
    }
] call CBA_Settings_fnc_init;

ADDON = true;
