class CfgPatches
{
    class
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"a3_ui_f","a3_ui_f_bootcamp","a3_ui_f_curator","a3_ui_f_data","a3_ui_f_exp","a3_ui_f_exp_a","a3_ui_f_heli","a3_ui_f_kart","a3_ui_f_mark","a3_ui_f_mp_mark","a3_uifonts_f"};
        authors[] = {"Liquid"};
        url = "https://wogames.info";
    };
};

class RscMapControl;
class RscDisplayMainMap {
    // Tweak map styling
    class controlsBackground {
        class CA_Map: RscMapControl {
            colorGrid[] = {0.05, 0.1, 0, 1};
            colorGridMap[] = {0.05, 0.1, 0, 1};
            sizeExGrid = 0.055;
        };
    };
};

class RscChatListDefault
    {
        colorGlobalChannel[] = {1, 0, 0, 1};
    };