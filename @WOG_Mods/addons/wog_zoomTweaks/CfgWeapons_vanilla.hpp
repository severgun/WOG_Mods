	class Launcher: LauncherCore
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class GrenadeLauncher: Default
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class UGL_F: GrenadeLauncher
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class Rifle: RifleCore
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class Pistol: PistolCore
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class Pistol_Base_F: Pistol
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

	class Put: Default
	{
		class PutMuzzle: Default
		{
			opticsZoomMin = MINFOV;
			opticsZoomMax = MAXFOV;
			opticsZoomInit = INITFOV;
		};
	};

	//class launch_RPG32_F: Launcher_Base_F ???

	class optic_Arco: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ARCO2collimator
				{
					opticsZoomMin = MINFOV;
					opticsZoomMax = MAXFOV;
					opticsZoomInit = INITFOV;
				};
			};
		};
	};

	class optic_Hamr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsZoomMin = MINFOV;
					opticsZoomMax = MAXFOV;
					opticsZoomInit = INITFOV;
				};
			};
		};
	};

	class optic_Aco: ItemCore
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

	class optic_ACO_grn: ItemCore
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

	class optic_Aco_smg: ItemCore
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

	class optic_ACO_grn_smg: ItemCore
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

	class optic_Holosight: ItemCore
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

	class optic_Holosight_smg: ItemCore
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

	class optic_SOS: ItemCore
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

	class optic_MRCO: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class MRCOcq
				{
					opticsZoomMin = MINFOV;
					opticsZoomMax = MAXFOV;
					opticsZoomInit = INITFOV;
				};
			};
		};
	};

	class optic_Nightstalker: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NCTALKEP;
				class Iron: NCTALKEP
				{
					opticsZoomMin = MINFOV;
					opticsZoomMax = MAXFOV;
					opticsZoomInit = INITFOV;
				};
			};
		};
	};

	class optic_DMS: ItemCore
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

	class optic_Yorris: ItemCore
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

	class optic_MRD: ItemCore
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

	class optic_AMS_base: ItemCore
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

	class optic_KHS_base: ItemCore
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

	class Launcher_Base_F: Launcher {};
	class launch_RPG7_F: Launcher_Base_F
    {
        class OpticsModes
        {
            class irons
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };
