////////////////////////////////////////////////////////////////////
//DeRap: Suppress_sys\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Mon Apr 23 23:03:32 2018 : 'file' last modified on Fri Apr 20 20:41:00 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class L_Suppress_Suppress_sys
	{
		units[] = {"L_ModuleSuppress"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","L_Suppress_suppress_main"};
		authors[] = {"LAxemann","jokoho482"};
		author = "LAxemann and jokoho482";
	};
};
class Extended_PreInit_EventHandlers
{
	class L_Suppress_Suppress_sys
	{
		init = "call compile preProcessFileLineNumbers '\LAxemann\L_Suppress\addons\Suppress_sys\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class L_Suppress_Suppress_sys
	{
		init = "call compile preProcessFileLineNumbers '\LAxemann\L_Suppress\addons\Suppress_sys\XEH_PostInit.sqf'";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class AllVehicles
	{
		class L_Suppress_Suppress_sys
		{
			clientFiredBIS = "_this call L_Suppress_Suppress_sys_fnc_fired";
		};
	};
};
class CfgFunctions
{
	class L
	{
		class Suppress
		{
			file = "\LAxemann\L_Suppress\addons\Suppress_sys\functions";
			class SuppressDummy{};
		};
	};
};
class CfgFactionClasses
{
	class NO_CATEGORY;
	class LAxemann: NO_CATEGORY
	{
		displayName = "LAxemann";
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class L_ModuleSuppress: Module_F
	{
		scope = 2;
		displayName = "Force L_Suppress";
		category = "LAxemann";
		function = "L_fnc_SuppressDummy";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		class Arguments{};
		class ModuleDescription: ModuleDescription
		{
			description = "Use this to force Suppress on all clients";
			position = 1;
			direction = 1;
			optional = 1;
			duplicate = 0;
			synced[] = {"Anything"};
		};
	};
};
