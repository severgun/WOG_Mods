class CfgWeapons
{
    class Binocular;
    class rhssaf_zrak_rd7j: Binocular
    {
        opticsZoomMin = 0.0357;
        opticsZoomMax = 0.0357;
        opticsZoomInit = 0.0357;
        // opticsZoomMin = 0.03125; //original RHS
        // opticsZoomMax = 0.0625;
        // opticsZoomInit = 0.0625;
        descriptionShort = "Magnification: 7x";
        modelOptics="\A3\weapons_f\reticle\optics_binoculars";
    };

    // ================== Temporary FIX 1.82 =======================
    class cannon_120mm;
    class rhs_weap_d81: cannon_120mm {
        modes[] = {"player", "close", "short", "medium", "far"};
    };
    class missiles_titan;
    class Rhs_weap_TOW_Launcher_static: missiles_titan{
        modes[] = {"Player"};
    };
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F {
        modes[] = {"Direct"};
    };
    // =======================================================

};