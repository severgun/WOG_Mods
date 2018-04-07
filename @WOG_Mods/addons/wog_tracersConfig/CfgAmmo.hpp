class CfgAmmo
{
    class BulletBase;
    class SubmunitionBullet;
    class B_65x39_Case;
    class B_65x39_Minigun_Caseless_Red_splash;
    class B_762x54_Ball;
    class B_127x99_SLAP;
    class B_30mm_HE;
    class B_30mm_MP;
    class B_40mm_GPR;
    class B_30mm_APFSDS;
    class B_40mm_APFSDS;
    class rhs_ammo_127x99_Ball;
    class rhs_ammo_127x99_SLAP;
    class rhs_ammo_ofz_23x115mm;
    class rhs_B_545x39_Ball;
    class rhs_B_762x39_Ball;
    class HLC_762x51_ball;
    class HLC_GP11_FMJ;

    //В VTN нет белых. Нет оранжевых.
    //rhs model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
    class B_556x45_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_556x45_Ball_Tracer_Red: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_556x45_Ball_Tracer_Green: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_56x15_dual: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Caseless: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Caseless_green: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Caseless_yellow: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Case_green: B_65x39_Case
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Case_yellow: B_65x39_Case
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Minigun_Caseless: SubmunitionBullet
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Minigun_Caseless_Yellow_splash: B_65x39_Minigun_Caseless_Red_splash
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Minigun_Caseless_Red_splash
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Tracer_Red: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Tracer_Green: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Tracer_Yellow: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x54_Tracer_Red: B_762x54_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x54_Tracer_Green: B_762x54_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x54_Tracer_Yellow: B_762x54_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_9x21_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_9x21_Ball_Tracer_Green: B_9x21_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_408_Ball: BulletBase  //12.7
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x33_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_Ball_Tracer_Red: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_Ball_Tracer_Green: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_127x108_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_19mm_HE: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_30mm_HE_Tracer_Red: B_30mm_HE
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_HE_Tracer_Green: B_30mm_HE
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_HE_Tracer_Yellow: B_30mm_HE
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_MP_Tracer_Red: B_30mm_MP
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_MP_Tracer_Green: B_30mm_MP
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_MP_Tracer_Yellow: B_30mm_MP
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_GPR_Tracer_Red: B_40mm_GPR
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_GPR_Tracer_Green: B_40mm_GPR
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_20mm: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_20mm_Tracer_Red: B_20mm
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        laserlock = 5;
    };
    class B_25mm: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_AP: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_AP_Tracer_Red: B_30mm_AP
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_AP_Tracer_Green: B_30mm_AP
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_AP_Tracer_Yellow: B_30mm_AP
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_35mm_AA: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_35mm_AA_Tracer_Red: B_35mm_AA
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_35mm_AA_Tracer_Green: B_35mm_AA
    {
        model = "\vtn_tracer_md\vtn_tracer_green";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_35mm_AA_Tracer_Yellow: B_35mm_AA
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_45ACP_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_45ACP_Ball_Green: B_45ACP_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_45ACP_Ball_Yellow: B_45ACP_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        submunitionAmmo = "B_762x51_Minigun_Tracer_Yellow_splash";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red.p3d";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
    {
        model = "\vtn_tracer_md\vtn_tracer_green.p3d";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class HAFM_50cal_red: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class Cha_Av8b_25mm: B_25mm
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_20mm_AP: B_20mm
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_20x139mm_AP: rhs_ammo_20mm_AP
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class B_338_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_338_NM_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_127x54_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_93x64_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_30x165mm_base: B_30mm_AP
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_3uor6: B_30mm_HE
    {
        model = "\vtn_tracer_md\vtn_tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
        class RHS_ammo_23mm_AA: B_35mm_AA
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_ofzt_23x115mm: rhs_ammo_ofz_23x115mm
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_ammo_bzt_23x115mm: rhs_ammo_30x165mm_base
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_B_762x54_Ball: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_762x25_Ball: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhsusf_B_300winmag: B_762x54_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855_Ball_Green: rhs_ammo_556x45_M855_Ball_Red
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855_Ball_Yellow: rhs_ammo_556x45_M855_Ball_Red
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_12gHEAP_penetrator: BulletBase //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_45ACP_MHP: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class rhs_ammo_9x19_FMJ: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class rhs_ammo_9x19_JHP: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class B_580x42_Ball_F: BulletBase //5.8
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_50BW_Ball_F: BulletBase //12.7
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class B_762x39_Ball_F: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_762x39_Ball_Green_F: B_762x39_Ball_F
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_545x39_Ball_F: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class B_545x39_Ball_Green_F: B_545x39_Ball_F
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhssaf_ammo_556x45_EPR: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhssaf_ammo_556x45_SOST: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhssaf_ammo_556x45_SPR: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class ammo_Gun20mmAABase: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_Gun30mmAABase: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_Gun35mmAABase: BulletBase
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";
        tracerScale = 2;
        tracerStartTime = 0.05;
        tracerEndTime = 5;
    };
    class HLC_556NATO_EPR: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_556NATO_EPR_Tracer: HLC_556NATO_EPR
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_556NATO_SOST: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_556NATO_SPR: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_300Blackout_Ball: B_556x45_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x39_Ball: HLC_300Blackout_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x39_AP: HLC_300Blackout_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x39_SUB: HLC_300Blackout_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x51_tracer: HLC_762x51_ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x54_ball: HLC_762x51_ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x54_tracer: HLC_762x51_tracer
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_762x54_AP: HLC_762x54_ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_303Brit_B: B_556x45_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_303Brit_T: HLC_303Brit_B //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_792x57_Ball: HLC_303Brit_B
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_792x57_Tracer: HLC_792x57_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_792x57_AP: HLC_792x57_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_68x43_FMJ: B_556x45_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_GP11_tracer: HLC_GP11_FMJ //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_542x42_ball: HLC_303Brit_B
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_542x42_Tracer: HLC_303Brit_B
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_545x39_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_545x39_Tracer: FH_545x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_545x39_7u1: FH_545x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_545x39_EP: FH_545x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_57x28mm_JHP: FH_545x39_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_green";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_9x19_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_9x19_JHP: HLC_9x19_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_9x19_M882_SMG: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_9x19_JHP_SMG: HLC_9x19_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_9x19_Subsonic: HLC_9x19_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_357SIG_FMJ: B_556x45_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_357SIG_JHP: HLC_9x19_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_40SW_FMJ: B_556x45_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_40SW_JHP: HLC_9x19_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_40SW_SD: HLC_9x19_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_10mm_FMJ: HLC_9x19_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_10mm_JHP: HLC_10mm_FMJ //??
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_45ACP_Ball: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_45ACP_JHP: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class FH_45ACP_Tracer: HLC_45ACP_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 1;
    };
    class HLC_12G_Distraction: B_556x45_Ball //12 cal ??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_44Mag: HLC_45ACP_Ball //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_44Mag_JHP: FH_44Mag //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_44Mag_FUNTRACER: FH_44Mag //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class FH_50BMG_SLAP: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class FH_50BMG_Raufoss: B_127x99_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 4;
    };
    class RH_556x45_B_M855A1: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_556x45_B_Mk318: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_556x45_B_Mk262: B_556x45_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_68x43_B_FMJ: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_68x43_B_Match: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x35_B_FMJ: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x35_B_Match: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x35_B_MSB: B_65x39_Caseless
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x51_B_M80A1: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x51_B_Mk316LR: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x51_B_Mk319: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class RH_762x51_B_LFMJSB: B_762x51_Ball
    {
        model = "\vtn_tracer_md\vtn_tracer_red";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class BWA3_B_46x30_Ball: BulletBase //??
    {
        model = "\vtn_tracer_md\vtn_tracer_yellow";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };

    // =========================
    class rhs_ammo_792x57_Ball: BulletBase
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_75x55_Ball: BulletBase
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_556x45_M855_Ball_Orange: rhs_ammo_556x45_M855_Ball_Red
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class rhs_ammo_762x51_M80_Ball: BulletBase
    {
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };

    // ============================
    class HLC_300Blackout_SMK: HLC_300Blackout_Ball //??
    {
        model = "\hlc_core\mesh\bullettracer\tracer_dim";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
    class HLC_300Blackout_RNBT: HLC_300Blackout_Ball //??
    {
        model = "\hlc_core\mesh\bullettracer\tracer_dim";

        tracerStartTime = 0.05;
        tracerEndTime = 3;
    };
};

