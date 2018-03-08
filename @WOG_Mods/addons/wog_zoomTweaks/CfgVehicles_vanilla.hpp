	class All
	{
		class ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class ViewCargo
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class Turrets;
	};

	class AllVehicles: All
	{
		class ViewOptics;
		class NewTurret
		{
			class ViewGunner: ViewOptics
			{
				minFov = MINFOV;
				maxFov = MAXFOV;
				initFov = INITFOV;
			};
		};
		class ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class ViewCargo
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land{};
	class Car: LandVehicle
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Motorcycle: LandVehicle
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Tank: LandVehicle
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
	};
	class Man: Land
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Air: AllVehicles{};
	class Helicopter: Air
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class Plane: Air
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
	};
	class Ship: AllVehicles
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Truck: Car
	{
		minFov = MINFOV;
		maxFov = MAXFOV;
		initFov = INITFOV;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};
	class CAManBase: Man
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Car_F: Car
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
		class NewTurret: NewTurret {};
		class Turrets
		{
			class MainTurret: NewTurret {};
		};
	};
	class Ship_F: Ship
	{
		class ViewPilot: ViewPilot
		{
			initFov = INITFOV;
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
	};

	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class CopilotTurret {};
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F{};
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class ViewOptics: ViewOptics
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};

	class Heli_Attack_02_base_F: Helicopter_Base_F
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

	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class Boat_F: Ship_F{};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: NewTurret{};
			class RearTurret: FrontTurret
			{
				class ViewOptics: ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class Offroad_01_base_F: Car_F{};
	class Offroad_01_military_base_F: Offroad_01_base_F{};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class MRAP_03_base_F: Car_F
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};

	class Heli_light_03_base_F: Helicopter_Base_F
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

	class UAV_01_base_F: Helicopter_Base_F
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
		};
		class Viewoptics: ViewOptics
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
		};
	};
	class UAV: Plane {};
	class UAV_02_base_F: UAV
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class Viewoptics: ViewOptics
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
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

	class LSV_01_base_F: Car_F{};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = INITFOV;
					minFov = MINFOV;
					maxFov = MAXFOV;
				};
			};
			class CodRiverTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class LSV_02_base_F: Car_F{};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					minFov = MINFOV;
					maxFov = MAXFOV;
					initFov = INITFOV;
				};
			};
		};
	};

	class Plane_Base_F: Plane
	{
		class Turrets
		{
			class CopilotTurret: NewTurret{};
		};
	};
	class VTOL_Base_F: Plane_Base_F{};
	class VTOL_01_base_F: VTOL_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
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
	class VTOL_01_armed_base_F: VTOL_01_base_F
	{
		class Turrets: Turrets
		{
			class GunnerTurret_01: NewTurret
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
	class VTOL_02_base_F: VTOL_Base_F
	{
		class Turrets
		{
			class GunnerTurret: NewTurret
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

	class UAV_05_Base_F: UAV
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
		class Viewoptics: ViewOptics
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};

	class UAV_06_base_F: Helicopter_Base_F
	{
		class ViewPilot: ViewPilot
		{
			minFov = MINFOV;
			maxFov = MAXFOV;
			initFov = INITFOV;
		};
	};