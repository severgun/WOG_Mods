class CfgPatches
{
	class wog_tracers
	{
		name = "WOG - Tracers";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {"a3_weapons_f","a3_weapons_f_beta","BWA3_Common","hlcweapons_core","rhs_main","rhsgref_main","rhsusf_main","rhssaf_main","rhs_c_weapons","rhsusf_c_weapons","rhsgref_c_weapons","rhssaf_c_weapons","rhs_c_heavyweapons","rhsusf_c_heavyweapons","rhs_c_airweapons","rhsusf_c_airweapons","rhsgref_c_airweapons"};
		author = "Liquid";
		url = "https://wogames.info";
		version = "0.1";
		ammo[] = {"B_338_NM_Ball"};
	};
};

#include "CfgAmmo.hpp"

// class CfgAmmo
// {
// 	class BulletBase;
// 	class B_338_NM_Ball: BulletBase
// 	{
// 		//tracerScale = 1.6; //- 12-14mm
// 		//tracerScale = 2; //- 23-30mm
// 		tracerScale = 1; //- 5.45-7.62mm
// 		tracerStartTime = 0.03;
// 		tracerEndTime = 3;
// 		//model = "\vtn_tracer_md\vtn_tracer_red";
// 		model = "\wog_tracers\data\tracer_green";
// 		//model = "a3\weapons_f\Data\bullettracer\tracer_green";
// 	};
// };

// class CfgMagazines
// {
// 	class CA_Magazine;
// 	class 130Rnd_338_Mag : CA_Magazine
// 	{
// 		tracersEvery=1;
// 	};
// };