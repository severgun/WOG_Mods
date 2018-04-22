class CfgAmmo {

	// ================== Temporary FIX 1.82 =======================
	class rhs_ammo_atgmBase_base;

	class rhs_ammo_9m113: rhs_ammo_atgmBase_base{
		flightProfiles[] = {"Direct"};
		class Direct{};
		laserLock = 1;
		airLock = 0;
		missileLockCone = 4;
		submunitionAmmo = "";
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 60;
		explosive = 0.8;
	};
	// =======================================================
};