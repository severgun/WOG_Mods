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