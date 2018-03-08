	class RHS_Mi24_base: Heli_Attack_02_base_F{};
	class RHS_Mi24V_Base: RHS_Mi24_base{};
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base{};
	class rhsgref_cdf_Mi35: RHS_Mi24V_VVS_Base{};
	class rhsgref_mi24g_base: rhsgref_cdf_Mi35
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsOut
				{
					class Monocular
					{
						minFov = MINFOV;
						maxFov = MAXFOV;
						initFov = INITFOV;
					};
				};
			};
		};
	};

	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret {};
		};
	};
	class APC_Tracked_02_base_F: Tank_F{};
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};

	class RHS_MELB_base: Helicopter_Base_H
	{
		class ViewOptics: ViewOptics
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				minFov = MINFOV;
				maxFov = MAXFOV;
				initFov = INITFOV;
			};
		};
	};

	class rhs_bmd_base: Tank_F
	{
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret {};
			class MainTurret: MainTurret {};
		};
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						class OpticsOut
						{
							class Out
							{
								minFov = MINFOV;
								maxFov = MAXFOV;
								initFov = INITFOV;
							};
						};
					};
				};
			};
		};
	};

	class rhs_bmd1_base: rhs_bmd_base {};
	class rhs_bmd1p: rhs_bmd1_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						class OpticsOut
						{
							class Out
							{
								minFov = MINFOV;
								maxFov = MAXFOV;
								initFov = INITFOV;
							};
						};
					};
				};
			};
		};
	};

	class rhs_bmp1tank_base: Tank_F {};
	class rhs_bmp_base: rhs_bmp1tank_base {};
	class rhs_bmp1_vdv: rhs_bmp_base {};
	class rhs_bmp1p_vdv: rhs_bmp1_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						class OpticsOut
						{
							class Out
							{
								minFov = MINFOV;
								maxFov = MAXFOV;
								initFov = INITFOV;
							};
						};
					};
				};
			};
		};
	};

	class MRAP_02_base_F: Car_F {};
	class rhs_tigr_base: MRAP_02_base_F {};
	class rhs_tigr_vdv: rhs_tigr_base {};
	class rhs_tigr_sts_vdv: rhs_tigr_vdv
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class RHS_UAZ_Base: Offroad_01_base_F {};
	class RHS_UAZ_DShKM_Base: RHS_UAZ_Base {};
	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class Truck_F: Car_F {};
	class RHS_Ural_BaseTurret: Truck_F {};
	class RHS_Ural_Zu23_Base: RHS_Ural_BaseTurret
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class StaticCannon: StaticWeapon {};
	class RHS_ZU23_base: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class StaticMGWeapon: StaticWeapon {};
	class rhs_nsv_tripod_base: StaticMGWeapon {};
	class RHS_KORD_Base: rhs_nsv_tripod_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_DSHKM_base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class StaticGrenadeLauncher: StaticWeapon {};
	class RHS_AGS30_TriPod_base: StaticGrenadeLauncher
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class AT_01_base_F: StaticMGWeapon {};
	class rhs_SPG9_base: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_Metis_Base: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_Kornet_Base: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class Wheeled_APC_F: Car_F {};
	class rhsgref_BRDM2: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsgref_BRDM2UM: rhsgref_BRDM2 {};
	class rhsgref_BRDM2_HQ: rhsgref_BRDM2UM
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class Heli_Light_02_base_F: Helicopter_Base_H {};
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					maxFov = MAXFOV;
					minFov = MINFOV;
				};
			};
		};
	};

	class StaticMortar: StaticWeapon {};
	class rhs_m70c_60mm_base: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class Heli_Transport_02_base_F: Helicopter_Base_H {};
	class RHS_CH_47F_base: Heli_Transport_02_base_F {};
	class RHS_CH_47F: RHS_CH_47F_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class RHS_UH60_Base: Heli_Transport_01_base_F {};
	class RHS_UH60M_base: RHS_UH60_Base {};
	class RHS_UH60M_US_base: RHS_UH60M_base {};
	class RHS_UH60M: RHS_UH60M_US_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class RHS_UH1_Base: Heli_light_03_base_F
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
	};

	class RHS_UH1Y_base: RHS_UH1_Base {};
	class RHS_UH1Y_US_base: RHS_UH1Y_base {};
	class RHS_UH1Y: RHS_UH1Y_US_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class Truck_01_base_F: Truck_F {};
	class rhsusf_caiman_base: Truck_01_base_F {};
	class rhsusf_caiman_GPK_base: rhsusf_caiman_base {};
	class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_fmtv_base: Truck_01_base_F {};
	class rhsusf_M1078A1P2_fmtv_usarmy: rhsusf_fmtv_base {};
	class rhsusf_M1078A1P2_B_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {};
	class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_CROWS_Turret: NewTurret
			{
				class ViewGunner: ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_M1083A1P2_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {};
	class rhsusf_M1083A1P2_B_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {};
	class rhsusf_M1083A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_M1084A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {};
	class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_HEMTT_A4_base: Truck_01_base_F {};
	class rhsusf_M977A4_usarmy_wd: rhsusf_HEMTT_A4_base {};
	class rhsusf_M977A4_BKIT_M2_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class MRAP_01_base_F: Car_F {};
	class rhsusf_hmmwe_base: MRAP_01_base_F {};
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {};
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr {};
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr {};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {};
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {};
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	// class rhsusf_M1117_base: Wheeled_APC_F
	// {
	// 	class Turrets: Turrets
	// 	{
	// 		class MainTurret: MainTurret
	// 		{
	// 			class ViewGunner
	// 			{
	// 				initAngleX = 5;
	// 				minAngleX = -60;
	// 				maxAngleX = "+85";
	// 				initAngleY = 0;
	// 				minAngleY = -150;
	// 				maxAngleY = "+150";
	// 				initFov = INITFOV;
	// 				minFov = MINFOV;
	// 				maxFov = MAXFOV;
	// 			};
	// 		};
	// 	};
	// };

	class RHS_Ship: Ship_F {};
	class rhsusf_mkvsoc: RHS_Ship
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class m2_p_ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
				class m2_p_ViewGunner: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
			class m134_p_gunTurret: MainTurret
			{
				class m134_p_ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
				class m134_p_ViewGunner: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
			class mk19_s_gunTurret: MainTurret
			{
				class mk19_s_ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
				class mk19_s_ViewGunner: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_rg33_base: MRAP_01_base_F {};
	class rhsusf_rg33_m2_d: rhsusf_rg33_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_RG33L_base: MRAP_01_base_F {};
	class rhsusf_RG33L_GPK_base: rhsusf_RG33L_base {};
	class rhsusf_M1232_M2_usarmy_d: rhsusf_RG33L_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhsusf_M1237_M2_usarmy_d: rhsusf_RG33L_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_truck: Truck_F
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
	};

	class rhs_gaz66_vmf: rhs_truck {};
	class rhs_gaz66_zu23_base: rhs_gaz66_vmf
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_bmp3tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner
						{
							initFov = INITFOV;
							minFov = MINFOV;
							maxFov = MAXFOV;
						};
					};
				};
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_btr_base: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};

	class rhs_tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner
						{
							initFov = INITFOV;
							minFov = MINFOV;
							maxFov = MAXFOV;
						};
					};
				};
			};

		};
	};

	class rhs_t80b: rhs_tank_base {};
	class rhs_t80bv: rhs_t80b
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner
						{
							initFov = INITFOV;
							minFov = MINFOV;
							maxFov = MAXFOV;
						};
					};
				};
			};
		};
	};

	class rhs_btr60_base: rhs_btr_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewGunner
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};


//class TU95??



