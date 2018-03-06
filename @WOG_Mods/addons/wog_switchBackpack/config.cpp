class CfgPatches
{
    class wog_switchBackpack
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_interaction"};
        authors[] = {"Liquid"};
        url = "https://wogames.info/";
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers 'wog_switchBackpack\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers 'wog_switchBackpack\XEH_postInit.sqf'";
    };
};