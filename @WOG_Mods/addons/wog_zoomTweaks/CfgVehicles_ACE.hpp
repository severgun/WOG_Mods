	class StaticATWeapon: StaticWeapon{};
	class ACE_SpottingScopeObject: StaticATWeapon
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