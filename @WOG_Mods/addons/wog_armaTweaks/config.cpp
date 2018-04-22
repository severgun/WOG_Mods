class CfgPatches
{
    class
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Data_F_Tank_Loadorder"};
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