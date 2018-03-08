    // HLC
    class optic_LRPS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F {};
    };
	class hlc_optic_LeupoldM3A: optic_LRPS
	{
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class Snip;
				class Iron: Snip
				{
					opticsZoomMin = MINFOV;
            	    opticsZoomMax = MAXFOV;
             	    opticsZoomInit = INITFOV;
				};
			};
		};
	};

	class hlc_optic_PVS4base: optic_Arco
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

    class hlc_optic_VOMZ: optic_LRPS
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class Snip;
                class Iron: Snip
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_optic_VOMZ3d: hlc_optic_VOMZ
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class Snip;
                class Iron: Snip
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_optic_KernBase: optic_Aco
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

    class hlc_optic_ZF4xBase: optic_Arco
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

    class hlc_optic_ZF95Base: optic_LRPS
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class Snip;
                class Iron: Snip
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class HLC_optic_DocterV: optic_Arco
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class HLC_optic_RomeoV: optic_Arco
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_optic_suit: optic_Arco
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

    class hlc_optic_PVS4FAL: hlc_optic_PVS4base
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

    class HLC_Optic_G36dualoptic35x: optic_Arco
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip;
                class Iron: Snip
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class HLC_Optic_G36Dualoptic15x: HLC_Optic_G36dualoptic35x
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip;
                class Iron: Snip
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_G36_base: Rifle_Base_F {};
    class hlc_rifle_G36A1: hlc_G36_base
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

    class hlc_rifle_MG36: hlc_G36_base
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

    class hlc_rifle_G36E1: hlc_rifle_G36A1 {};
    class hlc_rifle_G36V: hlc_rifle_G36E1
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

    class hlc_rifle_G36KA1: hlc_rifle_G36A1 {};
    class hlc_rifle_G36KE1: hlc_rifle_G36KA1 {};
    class hlc_rifle_G36KV: hlc_rifle_G36KE1
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

    class HLC_Optic_ZFSG1: optic_DMS
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class hlc_optic_PVS4G3: hlc_optic_PVS4base
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

    class hlc_optic_STANAGZF2D_G3: hlc_optic_ZF4xBase
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

    class hlc_optic_STANAGZF_G3: hlc_optic_STANAGZF2D_G3
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

    class hlc_g3_base: Rifle_Base_F {};
    class hlc_rifle_psg1: hlc_g3_base {};
    class hlc_rifle_psg1A1: hlc_rifle_psg1
    {
        class OpticsModes
        {
            class Snip
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };