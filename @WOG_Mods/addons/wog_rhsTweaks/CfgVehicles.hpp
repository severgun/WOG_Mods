class CfgVehicles {

    // ================== Temporary FIX 1.82 =======================
    class Wheeled_APC_F;
    class rhs_btr_base: Wheeled_APC_F{
        class ViewPilot
        {
            initAngleX = -10;
            initAngleY = 0;

            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            initFov = 0.75;
            minFov = 0.25;
            maxFov = 1.25;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };

    };


    class Truck_F;
    class rhs_truck: Truck_F{
        class ViewPilot
        {
            initFov = 0.75;
            minFov = 0.25;
            maxFov = 1.25;
            // initAngleX = 50;
            initAngleX = -10;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.2;
            maxMoveX = 0.2;
            minMoveY = -0.1;
            maxMoveY = 0.1;
            minMoveZ = -0.1;
            maxMoveZ = 0.2;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
    };
    // =======================================================
};