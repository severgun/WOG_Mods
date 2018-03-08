    // BWA3

    class BWA3_Pzf3: Launcher_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_RGW90: Launcher_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_CarlGustaf: Launcher_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
        class OpticsModes
        {
            class ironsights
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class BWA3_Fliegerfaust: Launcher_Base_F
    {
        class OpticsModes
        {
            class iron
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class BWA3_optic_Kolimator_base: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class BWA3_optic_ZO4x30: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Scope;
                class Kolimator: Scope
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class BWA3_optic_Shortdot: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class BWA3_optic_20x50: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class BWA3_G36: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_G38: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_G28_Standard: Rifle_Long_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_MP7: Pistol_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class BWA3_G82: Rifle_Long_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

