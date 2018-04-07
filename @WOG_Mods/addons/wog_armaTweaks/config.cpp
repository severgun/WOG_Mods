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

class RscChatListDefault
{
    //Global chat nickname color - Orange
    colorGlobalChannel[] = {1, 0.35, 0, 1};
};

class RscChatListMission: RscChatListDefault
{
    //Chat moved 2 sreens down. Get rid of reconnect messages.
    y = "2 * safezoneH + safezoneY";
};

class RscChatListMap: RscChatListDefault
{
    y = "2 * safezoneH + safezoneY";
};