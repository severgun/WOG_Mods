#include "\x\cba\addons\main\script_macros_common.hpp"

#ifndef PRELOAD_ADDONS
#define PRELOAD_ADDONS class CfgAddons \
{ \
	class PreloadAddons \
	{ \
		class ADDON \
		{ \
			list[]={ QUOTE(ADDON) }; \
		}; \
	}; \
};
#endif

#include "\x\cba\addons\xeh\script_xeh.hpp"
#ifdef PREP
    #undef PREP
#endif
#define PREP(fncName) FUNC(fncName) = QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)) call SLX_XEH_COMPILE