    class CUP_LAV25_Base: Wheeled_APC_F
	{
        class ViewPilot
        {
            initFov = INITFOV;
            minFov = MINFOV;
            maxFov = MAXFOV;
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class ViewOptics: RCWSOptics
                {
                    initFov = INITFOV;
                    minFov = MINFOV;
                    maxFov = MAXFOV;
                };
                class Turrets
                {
                    class CommanderOptics: NewTurret
                    {
                        class ViewOptics: RCWSOptics
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
    //class EC635: Helicopter_Base_H //??

    class CDF_A3_BRDM2_Base: Car_F {};
    class CDF_A3_BRDM2_HQ_Base: CDF_A3_BRDM2_Base
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

    class BWA3_Eagle_base: Car_F {};
    class BWA3_Eagle_flw100_base: BWA3_Eagle_base
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

    class BWA3_Tiger_base: Helicopter_Base_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class OpticsOut
                {
                    class Monocular
                    {
                        initFov = INITFOV;
                        minFov = MINFOV;
                        maxFov = MAXFOV;
                    };
                };
            };
        };
    };

    class LOP_LandRover_base: Car_F {};
    class LOP_LandRover_mg_base: LOP_LandRover_base
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
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


