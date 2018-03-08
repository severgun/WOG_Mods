
    class Rifle_Base_F: Rifle {};
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		opticsZoomMin = MINFOV;
		opticsZoomMax = MAXFOV;
		opticsZoomInit = INITFOV;
	};

    class rhs_weap_orsis_Base_F: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class Rifle_Long_Base_F: Rifle_Base_F {};
    class rhs_pkp_base: Rifle_Long_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class launch_Titan_base: Launcher_Base_F {};
    class launch_O_Titan_F: launch_Titan_base {};
    class rhs_weap_strela: launch_O_Titan_F
    {
        class OpticsModes
        {
            class StepScope
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class rhs_acc_sniper_base: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_1p29: rhs_acc_sniper_base
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_1p78: rhs_acc_1p29
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_above_sight
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_pkas: rhs_acc_sniper_base
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
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_1p63: rhs_acc_pkas
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

    class rhs_acc_pso1m2: rhs_acc_sniper_base {};
    class rhs_acc_pso1m2_pkp: rhs_acc_pso1m2
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_pso1m21: rhs_acc_sniper_base {};
    class rhs_acc_pso1m21_pkp: rhs_acc_pso1m21
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_nita: rhs_acc_pkas
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_nita_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_pgo7v: rhs_acc_sniper_base
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_pgo7v_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_pgo7v_ak: rhs_acc_pgo7v
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class rhs_pgo7v_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_1pn93_base: rhs_acc_sniper_base
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_1pn34: rhs_acc_1pn93_base
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class rhs_1pn34_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_acc_rakursPM: rhs_acc_1p63
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_rakurs_collimator
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_weap_kar98k_Base_F: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_m38_Base_F: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_XM2010_Base_F: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_m70_base: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class Rifle_Short_Base_F: Rifle_Base_F {};
    class SMG_01_Base: Rifle_Short_Base_F {};
    class SMG_01_F: SMG_01_Base {};
    class rhs_weap_savz61: SMG_01_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_savz58_base: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_stgw57_base: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_acc_scope_base: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class rhs_1p29_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_weap_M320_Base_F: Pistol_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };


    class arifle_MX_Base_F: Rifle_Base_F {};
    class rhs_weap_m4_Base: arifle_MX_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class LMG_Mk200_F: Rifle_Long_Base_F {};
    class rhs_weap_M249_base: LMG_Mk200_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_saw_base: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_lmg_minimipara: rhs_weap_saw_base
    {
        opticsZoomInit = INITFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomMin = MINFOV;
    };

    class EBR_base_F: Rifle_Long_Base_F {};
    class srifle_EBR_F: EBR_base_F {};
    class rhs_weap_m14ebrri: srifle_EBR_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class GM6_base_F: Rifle_Long_Base_F {};
    class rhs_weap_M107_Base_F: GM6_base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_m32_Base_F: Rifle_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class SMG_02_base_F: Rifle_Short_Base_F {};
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_smaw: Launcher_Base_F
    {
        opticsZoomInit = INITFOV;
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        class rhs_weap_smaw_SR: Launcher_Base_F
        {
            opticsZoomInit = INITFOV;
            opticsZoomMin = MINFOV;
            opticsZoomMax = MAXFOV;
        };
    };

    class rhs_weap_maaws: Launcher_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_M136: Launcher_Base_F
    {
        class OpticsModes
        {
            class ironsight
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class rhs_weap_m72a7: rhs_weap_M136
    {
        class OpticsModes
        {
            class ironsight
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class rhs_weap_fim92: launch_O_Titan_F
    {
        class OpticsModes
        {
            class StepScope
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };

    class rhsusf_acc_compm4: ItemCore
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

    class rhsusf_acc_anpvs27: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class PVS27
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_sniper_base: ItemCore {};
    class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class alternative_view
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_ELCAN_pip: rhsusf_acc_ELCAN
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class elcan_scope
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_SpecterDR: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Elcan_x1
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
                class Elcan_iron
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_ACOG: rhsusf_acc_sniper_base
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class alternative_view
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_ACOG_pip: rhsusf_acc_ACOG
    {
        class ItemInfo: ItemInfo
        {
            class OpticsModes: OpticsModes
            {
                class elcan_scope
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhsusf_acc_ACOG_MDO: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class RMR
                {
                    opticsZoomMin = MINFOV;
                    opticsZoomMax = MAXFOV;
                    opticsZoomInit = INITFOV;
                };
            };
        };
    };

    class rhs_weap_m84: Rifle_Long_Base_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_scorpion: SMG_01_F
    {
        opticsZoomMin = MINFOV;
        opticsZoomMax = MAXFOV;
        opticsZoomInit = INITFOV;
    };

    class rhs_weap_rpg26: Launcher_Base_F
    {
        class OpticsModes
        {
            class ironsight
            {
                opticsZoomMin = MINFOV;
                opticsZoomMax = MAXFOV;
                opticsZoomInit = INITFOV;
            };
        };
    };



