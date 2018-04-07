class RscControlsGroup;
class RscMap;
class RscActiveText;
class RscObject;


class RscMapControl
{
    // colorBackground[] = {0.929412, 0.929412, 0.929412, 1}; //Vanilla
    colorBackground[] = {0.925, 0.914, 0.875, 1};
    sizeExGrid = 0.035; // Make coordinates on map even bigger
};

// Bring trees and bushes back on map
class RscDisplayArcadeMap_Layout_2: RscMap
{
    class controlsBackground
    {
        class CA_Map: RscMapControl
        {
            class Tree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class SmallTree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Bush
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = "14/2";
                importance = "0.2 * 14 * 0.05 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Legend
            {
                x = "SafeZoneX+SafeZoneW-.340";
                y = "SafeZoneY+SafeZoneH-.152";
                font = "RobotoCondensed";
                w = 0.34;
                h = 0.152;
                sizeEx = 0.03921;
                colorBackground[] = {0.906,0.901,0.88,0.5};
                color[] = {0,0,0,0.75};
            };
        };
    };
};
class RscDisplayArcadeMap_Layout_6: RscMap
{
    class controlsBackground
    {
        class CA_Map: RscMapControl
        {
            class Tree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class SmallTree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Bush
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = "14/2";
                importance = "0.2 * 14 * 0.05 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Legend
            {
                x = "SafeZoneX+SafeZoneW-.340";
                y = "SafeZoneY+SafeZoneH-.152";
                font = "RobotoCondensed";
                w = 0.34;
                h = 0.152;
                sizeEx = 0.03921;
                colorBackground[] = {0.906,0.901,0.88,0.5};
                color[] = {0,0,0,0.75};
            };
        };
    };
};
class RscDisplayMainMap
{
    class controlsBackground
    {
        class CA_Map: RscMapControl
        {
            onDraw = "[ctrlParent (_this select 0)] call ace_map_fnc_onDrawMap"; // Coordinates on cursor
            class Tree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class SmallTree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Bush
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = "14/2";
                importance = "0.2 * 14 * 0.05 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Legend
            {
                x = "SafeZoneX+SafeZoneW-.340";
                y = "SafeZoneY+SafeZoneH-.152";
                font = "RobotoCondensed";
                w = 0.34;
                h = 0.152;
                sizeEx = 0.03921;
                colorBackground[] = {0.906,0.901,0.88,0.5};
                color[] = {0,0,0,0.75};
            };
        };
    };
    class controls
    {
        class TopRight: RscControlsGroup
        {
            class controls
            {
                class ButtonPlayer: RscActiveText
                {
                    text = "";
                    w = 0;
                    h = 0;
                    sizeEx = 0;
                    onButtonClick = "";
                };
            };
        };
    };
    class objects
    {
        class Compass: RscObject
        {
            scale = 0.7;
            zoomDuration = 0.3; // Zoom duration 0 will break compass zoom-in/zoom-out action
        };
    };
};

class RscDisplayGetReady: RscDisplayMainMap
{
    class controlsBackground
    {
        class CA_Map: RscMapControl
        {
            onDraw = "[ctrlParent (_this select 0)] call ace_map_fnc_onDrawMap";
            class Tree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class SmallTree
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Bush
            {
                color[] = {0.45, 0.64, 0.33, 0.4};
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                size = "14/2";
                importance = "0.2 * 14 * 0.05 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
            };
            class Legend
            {
                x = "SafeZoneX+SafeZoneW-.340";
                y = "SafeZoneY+SafeZoneH-.152";
                font = "RobotoCondensed";
                w = 0.34;
                h = 0.152;
                sizeEx = 0.03921;
                colorBackground[] = {0.906,0.901,0.88,0.5};
                color[] = {0,0,0,0.75};
            };
        };
    };
    class controls
    {
        class TopRight: RscControlsGroup
        {
            class controls
            {
                class ButtonPlayer: RscActiveText
                {
                    text = "";
                    w = 0;
                    h = 0;
                    sizeEx = 0;
                    onButtonClick = "";
                };
            };
        };
    };
};