class CfgPatches
{
	class wog_aceTweaks
	{
		author="Liquid";
		url="http://wogames.info";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"ace_map","ace_medical"};
	};
};

class Extended_PostInit_EventHandlers
{
	class wog3_killtracker
	{
		init = "call compile preProcessFileLineNumbers '\wog_aceTweaks\functions\wog3_killtracker_XEH_postInit.sqf'";
	};
};

class CfgFunctions
{
	class ace_medical
	{
		class wog_medical
		{
			file = "wog_aceTweaks\functions";
			class setUnconscious {
				recompile = 1;
			};
		};
	};
};

class CfgWeapons
{
	#include "ace_optics.hpp"
	#include "ace_nightvision.hpp"
};

#include "ace_map.hpp"