class CfgPatches
{
    class wog_zoomTweaks
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_spottingscope","a3_weapons_f","a3_weapons_f_acc","a3_weapons_f_beta","a3_weapons_f","a3_weapons_f_aaf","a3_weapons_f_acc","a3_weapons_f_ammoboxes","a3_weapons_f_beta",
            "a3_weapons_f_beta_acc","a3_weapons_f_beta_ammoboxes","a3_weapons_f_beta_ebr","a3_weapons_f_beta_longrangerifles_ebr","a3_weapons_f_beta_longrangerifles_gm6","a3_weapons_f_beta_longrangerifles_m320","a3_weapons_f_beta_rifles_khaybar",
            "a3_weapons_f_beta_rifles_mx","a3_weapons_f_beta_rifles_trg20","a3_weapons_f_bootcamp","a3_weapons_f_bootcamp_ammoboxes","a3_weapons_f_bootcamp_longrangerifles_gm6","a3_weapons_f_bootcamp_longrangerifles_gm6_camo",
            "a3_weapons_f_bootcamp_longrangerifles_m320","a3_weapons_f_bootcamp_longrangerifles_m320_camo","a3_weapons_f_csat","a3_weapons_f_dummyweapons","a3_weapons_f_ebr","a3_weapons_f_epa","a3_weapons_f_epa_acc","a3_weapons_f_epa_ammoboxes",
            "a3_weapons_f_epa_ebr","a3_weapons_f_epa_longrangerifles_dmr_01","a3_weapons_f_epa_longrangerifles_gm6","a3_weapons_f_epa_rifles_mx","a3_weapons_f_epb","a3_weapons_f_epb_acc","a3_weapons_f_epb_ammoboxes","a3_weapons_f_epb_longrangerifles_gm3",
            "a3_weapons_f_epb_longrangerifles_gm6","a3_weapons_f_epb_longrangerifles_m320","a3_weapons_f_epb_rifles_mx_black","a3_weapons_f_epc","a3_weapons_f_exp","a3_weapons_f_exp_launchers_rpg32","a3_weapons_f_exp_launchers_rpg7",
            "a3_weapons_f_exp_launchers_titan","a3_weapons_f_exp_longrangerifles_dmr_07","a3_weapons_f_exp_machineguns_lmg_03","a3_weapons_f_exp_pistols_pistol_01","a3_weapons_f_exp_rifles_ak12","a3_weapons_f_exp_rifles_akm",
            "a3_weapons_f_exp_rifles_aks","a3_weapons_f_exp_rifles_arx","a3_weapons_f_exp_rifles_ctar","a3_weapons_f_exp_rifles_ctars","a3_weapons_f_exp_rifles_spar_01","a3_weapons_f_exp_rifles_spar_02","a3_weapons_f_exp_rifles_spar_03",
            "a3_weapons_f_exp_smgs_smg_05","a3_weapons_f_explosives","a3_weapons_f_fia","a3_weapons_f_gamma","a3_weapons_f_gamma_acc","a3_weapons_f_gamma_ammoboxes","a3_weapons_f_gamma_items","a3_weapons_f_gamma_longrangerifles_ebr",
            "a3_weapons_f_gamma_rifles_mx","a3_weapons_f_headgear","a3_weapons_f_itemholders","a3_weapons_f_items","a3_weapons_f_kart","a3_weapons_f_kart_pistols_pistol_signal_f","a3_weapons_f_launchers_law","a3_weapons_f_launchers_nlaw",
            "a3_weapons_f_launchers_rpg32","a3_weapons_f_launchers_titan","a3_weapons_f_longrangerifles_dmr_01","a3_weapons_f_longrangerifles_ebr","a3_weapons_f_longrangerifles_gm6","a3_weapons_f_longrangerifles_m320",
            "a3_weapons_f_machineguns_m200","a3_weapons_f_machineguns_zafir","a3_weapons_f_mark","a3_weapons_f_mark_acc","a3_weapons_f_mark_ebr","a3_weapons_f_mark_longrangerifles_dmr_01","a3_weapons_f_mark_longrangerifles_dmr_02",
            "a3_weapons_f_mark_longrangerifles_dmr_03","a3_weapons_f_mark_longrangerifles_dmr_04","a3_weapons_f_mark_longrangerifles_dmr_05","a3_weapons_f_mark_longrangerifles_dmr_06","a3_weapons_f_mark_longrangerifles_ebr",
            "a3_weapons_f_mark_longrangerifles_gm6","a3_weapons_f_mark_longrangerifles_gm6_camo","a3_weapons_f_mark_longrangerifles_m320","a3_weapons_f_mark_longrangerifles_m320_camo","a3_weapons_f_mark_machineguns_m200",
            "a3_weapons_f_mark_machineguns_mmg_01","a3_weapons_f_mark_machineguns_mmg_02","a3_weapons_f_mark_machineguns_zafir","a3_weapons_f_mark_rifles_khaybar","a3_weapons_f_mark_rifles_mk20","a3_weapons_f_mark_rifles_mx",
            "a3_weapons_f_mark_rifles_sdar","a3_weapons_f_mark_rifles_trg20","a3_weapons_f_nato","a3_weapons_f_pistols_acpc2","a3_weapons_f_pistols_p07","a3_weapons_f_pistols_pdw2000","a3_weapons_f_pistols_pistol_heavy_01",
            "a3_weapons_f_pistols_pistol_heavy_02","a3_weapons_f_pistols_rook40","a3_weapons_f_rifles_khaybar","a3_weapons_f_rifles_mk20","a3_weapons_f_rifles_mx","a3_weapons_f_rifles_mx_black","a3_weapons_f_rifles_sdar",
            "a3_weapons_f_rifles_smg_02","a3_weapons_f_rifles_trg20","a3_weapons_f_rifles_vector","a3_weapons_f_smgs_pdw2000","a3_weapons_f_smgs_smg_01","a3_weapons_f_smgs_smg_02","rhs_c_weapons","rhs_c_heavyweapons","rhsgref_c_weapons","rhsusf_c_heavyweapons","rhsusf_c_weapons","rhsusf_c_rg33","rhs_c_cars","rhs_c_a2port_car",
            "rhs_c_kamaz","rhs_c_heavyweapons","rhs_c_identity","rhs_c_radars","rhs_c_weapons","rhs_c_airweapons","rhs_c_a2port_air","rhs_c_air","rhs_c_mi28","rhs_c_mig29","rhs_c_radio","rhs_c_trucks","rhs_c_2s3","rhs_c_a3retex","rhs_c_bmd","rhs_c_bmd_camo",
            "rhs_c_bmp3","rhs_c_bmp","rhs_c_btr","rhs_c_pts","rhs_c_rva","rhs_c_sprut","rhs_c_t72","rhs_c_tanks","rhs_c_a2port_armor","rhs_c_btr70_camo", "rhsgref_main","rhsgref_muzzleflash","rhsgref_c_airweapons","rhsgref_c_a2port_armor","rhsgref_c_air",
            "rhsgref_c_tohport_air","rhsgref_c_weapons","rhsgref_c_radio","rhsgref_c_troops","rhsgref_c_vehicles_ret", "rhssaf_muzzleflash", "rhsusf_main","rhsusf_optics","rhsusf_uav","rhsusf_decals",
            "rhsusf_caiman","rhsusf_c_uav","rhsusf_c_a2port_car","rhsusf_c_heavyweapons","rhsusf_c_airweapons","rhsusf_c_f22","rhsusf_c_hemtt_a2","rhsusf_c_weapons","rhsusf_c_radio","rhsusf_c_troops","rhsusf_c_Caiman","rhsusf_c_ch53",
            "rhsusf_c_fmtv","rhsusf_c_HEMTT_A4","rhsusf_c_hmmwv","rhsusf_c_m109","rhsusf_c_m1117","rhsusf_c_m113","rhsusf_c_m1a1","rhsusf_c_m1a2","rhsusf_c_markvsoc","rhsusf_c_mrzr","rhsusf_c_mtvr","rhsusf_c_rg33","rhsusf_c_RG33L","rhsusf_c_statics",
            "rhsusf_cars","rhsusf_ch53","rhsusf_c_m252","rhsusf_c_melb","BWA3_Common","hlcweapons_core","lop_main","cba_jr","RH_acc","RH_m4_cfg"};
        authors[] = {"Liquid"};
        url = "https://wogames.info/";
    };
};

#define    MINFOV    0.75
#define    MAXFOV    0.75
#define    INITFOV    0.75

class NewTurret;
class ViewOptics;
class Turrets;
class MainTurret;
class CommanderOptics;
class ViewGunner;
class RCWSOptics;

class CfgVehicles
{
	#include "CfgVehicles_vanilla.hpp"
	#include "CfgVehicles_ACE.hpp"
	#include "CfgVehicles_RHS.hpp"
    #include "CfgVehicles_Other.hpp"
};

class CfgWeapons
{
    class Default;
    class LauncherCore: Default {};
    class RifleCore: Default {};
    class PistolCore: Default {};
    class ItemCore: Default {};
    class InventoryOpticsItem_Base_F;

	#include "CfgWeapons_vanilla.hpp"
	#include "CfgWeapons_RHS.hpp"
    #include "CfgWeapons_RH.hpp"
    #include "CfgWeapons_HLC.hpp"
    #include "CfgWeapons_BWA3.hpp"
    #include "CfgWeapons_Other.hpp"
};

