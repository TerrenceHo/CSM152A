/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Xilinx_host/CSM152A/lab4/collision_detection.v";
static int ng1[] = {0, 0};
static int ng2[] = {12, 0};
static int ng3[] = {1, 0};
static int ng4[] = {60, 0};
static int ng5[] = {30, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t0 + 2248);
    t9 = (t0 + 2248);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1688U);
    t16 = *((char **)t15);
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t16, 1, 2);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t14, 1, 2);
    t13 = (t7 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = (t0 + 2568);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t14, 1, 2);
    t13 = (t7 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    goto LAB2;

LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t6, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t6, 0, *((unsigned int *)t8), t26);
    goto LAB9;

LAB10:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t6, 0, *((unsigned int *)t8), t26);
    goto LAB11;

}

static void Always_43_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t29[8];
    char t39[8];
    char t64[8];
    char t75[8];
    char t100[8];
    char t113[8];
    char t124[8];
    char t125[8];
    char t129[8];
    char t144[8];
    char t157[8];
    char t167[8];
    char t171[8];
    char t179[8];
    char t211[8];
    char t227[8];
    char t238[8];
    char t242[8];
    char t253[8];
    char t254[8];
    char t258[8];
    char t274[8];
    char t285[8];
    char t289[8];
    char t299[8];
    char t303[8];
    char t311[8];
    char t339[8];
    char t347[8];
    char t384[8];
    char t397[8];
    char t407[8];
    char t411[8];
    char t426[8];
    char t439[8];
    char t450[8];
    char t451[8];
    char t455[8];
    char t463[8];
    char t495[8];
    char t511[8];
    char t522[8];
    char t526[8];
    char t536[8];
    char t540[8];
    char t555[8];
    char t566[8];
    char t570[8];
    char t581[8];
    char t582[8];
    char t586[8];
    char t594[8];
    char t626[8];
    char t634[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t168;
    char *t169;
    char *t170;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    int t203;
    int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;
    char *t225;
    char *t226;
    char *t228;
    char *t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t236;
    char *t237;
    char *t239;
    char *t240;
    char *t241;
    char *t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t252;
    char *t255;
    char *t256;
    char *t257;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    char *t272;
    char *t273;
    char *t275;
    char *t276;
    char *t277;
    char *t278;
    char *t279;
    char *t280;
    char *t281;
    char *t282;
    char *t283;
    char *t284;
    char *t286;
    char *t287;
    char *t288;
    char *t290;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    char *t295;
    char *t296;
    char *t297;
    char *t298;
    char *t300;
    char *t301;
    char *t302;
    char *t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    char *t310;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;
    char *t316;
    char *t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    char *t325;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    char *t346;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    char *t352;
    char *t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    char *t361;
    char *t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    char *t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    char *t381;
    char *t382;
    char *t383;
    char *t385;
    char *t386;
    char *t387;
    char *t388;
    char *t389;
    char *t390;
    char *t391;
    char *t392;
    char *t393;
    char *t394;
    char *t395;
    char *t396;
    char *t398;
    char *t399;
    char *t400;
    char *t401;
    char *t402;
    char *t403;
    char *t404;
    char *t405;
    char *t406;
    char *t408;
    char *t409;
    char *t410;
    char *t412;
    unsigned int t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    unsigned int t417;
    char *t418;
    char *t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    char *t423;
    char *t424;
    char *t425;
    char *t427;
    char *t428;
    char *t429;
    char *t430;
    char *t431;
    char *t432;
    char *t433;
    char *t434;
    char *t435;
    char *t436;
    char *t437;
    char *t438;
    char *t440;
    char *t441;
    char *t442;
    char *t443;
    char *t444;
    char *t445;
    char *t446;
    char *t447;
    char *t448;
    char *t449;
    char *t452;
    char *t453;
    char *t454;
    char *t456;
    unsigned int t457;
    unsigned int t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    char *t462;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    char *t467;
    char *t468;
    char *t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    char *t477;
    char *t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    int t487;
    int t488;
    unsigned int t489;
    unsigned int t490;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    char *t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    char *t502;
    char *t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    unsigned int t507;
    char *t508;
    char *t509;
    char *t510;
    char *t512;
    char *t513;
    char *t514;
    char *t515;
    char *t516;
    char *t517;
    char *t518;
    char *t519;
    char *t520;
    char *t521;
    char *t523;
    char *t524;
    char *t525;
    char *t527;
    char *t528;
    char *t529;
    char *t530;
    char *t531;
    char *t532;
    char *t533;
    char *t534;
    char *t535;
    char *t537;
    char *t538;
    char *t539;
    char *t541;
    unsigned int t542;
    unsigned int t543;
    unsigned int t544;
    unsigned int t545;
    unsigned int t546;
    char *t547;
    char *t548;
    unsigned int t549;
    unsigned int t550;
    unsigned int t551;
    char *t552;
    char *t553;
    char *t554;
    char *t556;
    char *t557;
    char *t558;
    char *t559;
    char *t560;
    char *t561;
    char *t562;
    char *t563;
    char *t564;
    char *t565;
    char *t567;
    char *t568;
    char *t569;
    char *t571;
    char *t572;
    char *t573;
    char *t574;
    char *t575;
    char *t576;
    char *t577;
    char *t578;
    char *t579;
    char *t580;
    char *t583;
    char *t584;
    char *t585;
    char *t587;
    unsigned int t588;
    unsigned int t589;
    unsigned int t590;
    unsigned int t591;
    unsigned int t592;
    char *t593;
    unsigned int t595;
    unsigned int t596;
    unsigned int t597;
    char *t598;
    char *t599;
    char *t600;
    unsigned int t601;
    unsigned int t602;
    unsigned int t603;
    unsigned int t604;
    unsigned int t605;
    unsigned int t606;
    unsigned int t607;
    char *t608;
    char *t609;
    unsigned int t610;
    unsigned int t611;
    unsigned int t612;
    unsigned int t613;
    unsigned int t614;
    unsigned int t615;
    unsigned int t616;
    unsigned int t617;
    int t618;
    int t619;
    unsigned int t620;
    unsigned int t621;
    unsigned int t622;
    unsigned int t623;
    unsigned int t624;
    unsigned int t625;
    char *t627;
    unsigned int t628;
    unsigned int t629;
    unsigned int t630;
    unsigned int t631;
    unsigned int t632;
    char *t633;
    unsigned int t635;
    unsigned int t636;
    unsigned int t637;
    char *t638;
    char *t639;
    char *t640;
    unsigned int t641;
    unsigned int t642;
    unsigned int t643;
    unsigned int t644;
    unsigned int t645;
    unsigned int t646;
    unsigned int t647;
    char *t648;
    char *t649;
    unsigned int t650;
    unsigned int t651;
    unsigned int t652;
    int t653;
    unsigned int t654;
    unsigned int t655;
    unsigned int t656;
    int t657;
    unsigned int t658;
    unsigned int t659;
    unsigned int t660;
    unsigned int t661;
    char *t662;
    unsigned int t663;
    unsigned int t664;
    unsigned int t665;
    unsigned int t666;
    unsigned int t667;
    char *t668;
    char *t669;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4384);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 2568);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2568);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 2, t15, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t0 + 2568);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t0 + 2568);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2568);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 2888);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t29, 2, t28, t32, t35, 2, 1, t38, 32, 1);
    memset(t39, 0, 8);
    t40 = (t16 + 4);
    t41 = (t29 + 4);
    t42 = *((unsigned int *)t16);
    t43 = *((unsigned int *)t29);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB15;

LAB14:    if (t51 != 0)
        goto LAB16;

LAB17:    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB10;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB17;

LAB16:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(50, ng0);

LAB21:    xsi_set_current_line(51, ng0);
    t61 = (t0 + 2568);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t65 = (t0 + 2568);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = (t0 + 2568);
    t69 = (t68 + 64U);
    t70 = *((char **)t69);
    t71 = (t0 + 2728);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    xsi_vlog_generic_get_array_select_value(t64, 32, t63, t67, t70, 2, 1, t73, 32, 1);
    t74 = ((char*)((ng3)));
    memset(t75, 0, 8);
    t76 = (t64 + 4);
    t77 = (t74 + 4);
    t78 = *((unsigned int *)t64);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB25;

LAB22:    if (t87 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t75) = 1;

LAB25:    t91 = (t75 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t75);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB24:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(52, ng0);

LAB29:    xsi_set_current_line(53, ng0);
    t97 = (t0 + 2248);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t101 = (t0 + 2248);
    t102 = (t101 + 72U);
    t103 = *((char **)t102);
    t104 = (t0 + 2248);
    t105 = (t104 + 64U);
    t106 = *((char **)t105);
    t107 = (t0 + 2728);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    xsi_vlog_generic_get_array_select_value(t100, 32, t99, t103, t106, 2, 1, t109, 32, 1);
    t110 = (t0 + 2248);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    t114 = (t0 + 2248);
    t115 = (t114 + 72U);
    t116 = *((char **)t115);
    t117 = (t0 + 2248);
    t118 = (t117 + 64U);
    t119 = *((char **)t118);
    t120 = (t0 + 2888);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    xsi_vlog_generic_get_array_select_value(t113, 32, t112, t116, t119, 2, 1, t122, 32, 1);
    t123 = ((char*)((ng4)));
    memset(t124, 0, 8);
    xsi_vlog_unsigned_add(t124, 32, t113, 32, t123, 32);
    memset(t125, 0, 8);
    t126 = (t100 + 4);
    if (*((unsigned int *)t126) != 0)
        goto LAB31;

LAB30:    t127 = (t124 + 4);
    if (*((unsigned int *)t127) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t100) > *((unsigned int *)t124))
        goto LAB33;

LAB32:    *((unsigned int *)t125) = 1;

LAB33:    memset(t129, 0, 8);
    t130 = (t125 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t125);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t130) != 0)
        goto LAB37;

LAB38:    t137 = (t129 + 4);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB39;

LAB40:    memcpy(t179, t129, 8);

LAB41:    memset(t211, 0, 8);
    t212 = (t179 + 4);
    t213 = *((unsigned int *)t212);
    t214 = (~(t213));
    t215 = *((unsigned int *)t179);
    t216 = (t215 & t214);
    t217 = (t216 & 1U);
    if (t217 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t212) != 0)
        goto LAB56;

LAB57:    t219 = (t211 + 4);
    t220 = *((unsigned int *)t211);
    t221 = (!(t220));
    t222 = *((unsigned int *)t219);
    t223 = (t221 || t222);
    if (t223 > 0)
        goto LAB58;

LAB59:    memcpy(t347, t211, 8);

LAB60:    t375 = (t347 + 4);
    t376 = *((unsigned int *)t375);
    t377 = (~(t376));
    t378 = *((unsigned int *)t347);
    t379 = (t378 & t377);
    t380 = (t379 != 0);
    if (t380 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB94:    goto LAB28;

LAB31:    t128 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t129) = 1;
    goto LAB38;

LAB37:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB38;

LAB39:    t141 = (t0 + 2248);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t145 = (t0 + 2248);
    t146 = (t145 + 72U);
    t147 = *((char **)t146);
    t148 = (t0 + 2248);
    t149 = (t148 + 64U);
    t150 = *((char **)t149);
    t151 = (t0 + 2728);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    xsi_vlog_generic_get_array_select_value(t144, 10, t143, t147, t150, 2, 1, t153, 32, 1);
    t154 = (t0 + 2248);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    t158 = (t0 + 2248);
    t159 = (t158 + 72U);
    t160 = *((char **)t159);
    t161 = (t0 + 2248);
    t162 = (t161 + 64U);
    t163 = *((char **)t162);
    t164 = (t0 + 2888);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    xsi_vlog_generic_get_array_select_value(t157, 10, t156, t160, t163, 2, 1, t166, 32, 1);
    memset(t167, 0, 8);
    t168 = (t144 + 4);
    if (*((unsigned int *)t168) != 0)
        goto LAB43;

LAB42:    t169 = (t157 + 4);
    if (*((unsigned int *)t169) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t144) < *((unsigned int *)t157))
        goto LAB45;

LAB44:    *((unsigned int *)t167) = 1;

LAB45:    memset(t171, 0, 8);
    t172 = (t167 + 4);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t167);
    t176 = (t175 & t174);
    t177 = (t176 & 1U);
    if (t177 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t172) != 0)
        goto LAB49;

LAB50:    t180 = *((unsigned int *)t129);
    t181 = *((unsigned int *)t171);
    t182 = (t180 & t181);
    *((unsigned int *)t179) = t182;
    t183 = (t129 + 4);
    t184 = (t171 + 4);
    t185 = (t179 + 4);
    t186 = *((unsigned int *)t183);
    t187 = *((unsigned int *)t184);
    t188 = (t186 | t187);
    *((unsigned int *)t185) = t188;
    t189 = *((unsigned int *)t185);
    t190 = (t189 != 0);
    if (t190 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB41;

LAB43:    t170 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t170) = 1;
    goto LAB45;

LAB47:    *((unsigned int *)t171) = 1;
    goto LAB50;

LAB49:    t178 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB50;

LAB51:    t191 = *((unsigned int *)t179);
    t192 = *((unsigned int *)t185);
    *((unsigned int *)t179) = (t191 | t192);
    t193 = (t129 + 4);
    t194 = (t171 + 4);
    t195 = *((unsigned int *)t129);
    t196 = (~(t195));
    t197 = *((unsigned int *)t193);
    t198 = (~(t197));
    t199 = *((unsigned int *)t171);
    t200 = (~(t199));
    t201 = *((unsigned int *)t194);
    t202 = (~(t201));
    t203 = (t196 & t198);
    t204 = (t200 & t202);
    t205 = (~(t203));
    t206 = (~(t204));
    t207 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t207 & t205);
    t208 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t208 & t206);
    t209 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t209 & t205);
    t210 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t210 & t206);
    goto LAB53;

LAB54:    *((unsigned int *)t211) = 1;
    goto LAB57;

LAB56:    t218 = (t211 + 4);
    *((unsigned int *)t211) = 1;
    *((unsigned int *)t218) = 1;
    goto LAB57;

LAB58:    t224 = (t0 + 2248);
    t225 = (t224 + 56U);
    t226 = *((char **)t225);
    t228 = (t0 + 2248);
    t229 = (t228 + 72U);
    t230 = *((char **)t229);
    t231 = (t0 + 2248);
    t232 = (t231 + 64U);
    t233 = *((char **)t232);
    t234 = (t0 + 2728);
    t235 = (t234 + 56U);
    t236 = *((char **)t235);
    xsi_vlog_generic_get_array_select_value(t227, 32, t226, t230, t233, 2, 1, t236, 32, 1);
    t237 = ((char*)((ng5)));
    memset(t238, 0, 8);
    xsi_vlog_unsigned_add(t238, 32, t227, 32, t237, 32);
    t239 = (t0 + 2248);
    t240 = (t239 + 56U);
    t241 = *((char **)t240);
    t243 = (t0 + 2248);
    t244 = (t243 + 72U);
    t245 = *((char **)t244);
    t246 = (t0 + 2248);
    t247 = (t246 + 64U);
    t248 = *((char **)t247);
    t249 = (t0 + 2888);
    t250 = (t249 + 56U);
    t251 = *((char **)t250);
    xsi_vlog_generic_get_array_select_value(t242, 32, t241, t245, t248, 2, 1, t251, 32, 1);
    t252 = ((char*)((ng4)));
    memset(t253, 0, 8);
    xsi_vlog_unsigned_add(t253, 32, t242, 32, t252, 32);
    memset(t254, 0, 8);
    t255 = (t238 + 4);
    if (*((unsigned int *)t255) != 0)
        goto LAB62;

LAB61:    t256 = (t253 + 4);
    if (*((unsigned int *)t256) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t238) > *((unsigned int *)t253))
        goto LAB64;

LAB63:    *((unsigned int *)t254) = 1;

LAB64:    memset(t258, 0, 8);
    t259 = (t254 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t254);
    t263 = (t262 & t261);
    t264 = (t263 & 1U);
    if (t264 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t259) != 0)
        goto LAB68;

LAB69:    t266 = (t258 + 4);
    t267 = *((unsigned int *)t258);
    t268 = (!(t267));
    t269 = *((unsigned int *)t266);
    t270 = (t268 || t269);
    if (t270 > 0)
        goto LAB70;

LAB71:    memcpy(t311, t258, 8);

LAB72:    memset(t339, 0, 8);
    t340 = (t311 + 4);
    t341 = *((unsigned int *)t340);
    t342 = (~(t341));
    t343 = *((unsigned int *)t311);
    t344 = (t343 & t342);
    t345 = (t344 & 1U);
    if (t345 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t340) != 0)
        goto LAB87;

LAB88:    t348 = *((unsigned int *)t211);
    t349 = *((unsigned int *)t339);
    t350 = (t348 | t349);
    *((unsigned int *)t347) = t350;
    t351 = (t211 + 4);
    t352 = (t339 + 4);
    t353 = (t347 + 4);
    t354 = *((unsigned int *)t351);
    t355 = *((unsigned int *)t352);
    t356 = (t354 | t355);
    *((unsigned int *)t353) = t356;
    t357 = *((unsigned int *)t353);
    t358 = (t357 != 0);
    if (t358 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB60;

LAB62:    t257 = (t254 + 4);
    *((unsigned int *)t254) = 1;
    *((unsigned int *)t257) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t258) = 1;
    goto LAB69;

LAB68:    t265 = (t258 + 4);
    *((unsigned int *)t258) = 1;
    *((unsigned int *)t265) = 1;
    goto LAB69;

LAB70:    t271 = (t0 + 2248);
    t272 = (t271 + 56U);
    t273 = *((char **)t272);
    t275 = (t0 + 2248);
    t276 = (t275 + 72U);
    t277 = *((char **)t276);
    t278 = (t0 + 2248);
    t279 = (t278 + 64U);
    t280 = *((char **)t279);
    t281 = (t0 + 2728);
    t282 = (t281 + 56U);
    t283 = *((char **)t282);
    xsi_vlog_generic_get_array_select_value(t274, 32, t273, t277, t280, 2, 1, t283, 32, 1);
    t284 = ((char*)((ng5)));
    memset(t285, 0, 8);
    xsi_vlog_unsigned_add(t285, 32, t274, 32, t284, 32);
    t286 = (t0 + 2248);
    t287 = (t286 + 56U);
    t288 = *((char **)t287);
    t290 = (t0 + 2248);
    t291 = (t290 + 72U);
    t292 = *((char **)t291);
    t293 = (t0 + 2248);
    t294 = (t293 + 64U);
    t295 = *((char **)t294);
    t296 = (t0 + 2888);
    t297 = (t296 + 56U);
    t298 = *((char **)t297);
    xsi_vlog_generic_get_array_select_value(t289, 32, t288, t292, t295, 2, 1, t298, 32, 1);
    memset(t299, 0, 8);
    t300 = (t285 + 4);
    if (*((unsigned int *)t300) != 0)
        goto LAB74;

LAB73:    t301 = (t289 + 4);
    if (*((unsigned int *)t301) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t285) < *((unsigned int *)t289))
        goto LAB76;

LAB75:    *((unsigned int *)t299) = 1;

LAB76:    memset(t303, 0, 8);
    t304 = (t299 + 4);
    t305 = *((unsigned int *)t304);
    t306 = (~(t305));
    t307 = *((unsigned int *)t299);
    t308 = (t307 & t306);
    t309 = (t308 & 1U);
    if (t309 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t304) != 0)
        goto LAB80;

LAB81:    t312 = *((unsigned int *)t258);
    t313 = *((unsigned int *)t303);
    t314 = (t312 | t313);
    *((unsigned int *)t311) = t314;
    t315 = (t258 + 4);
    t316 = (t303 + 4);
    t317 = (t311 + 4);
    t318 = *((unsigned int *)t315);
    t319 = *((unsigned int *)t316);
    t320 = (t318 | t319);
    *((unsigned int *)t317) = t320;
    t321 = *((unsigned int *)t317);
    t322 = (t321 != 0);
    if (t322 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB72;

LAB74:    t302 = (t299 + 4);
    *((unsigned int *)t299) = 1;
    *((unsigned int *)t302) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t303) = 1;
    goto LAB81;

LAB80:    t310 = (t303 + 4);
    *((unsigned int *)t303) = 1;
    *((unsigned int *)t310) = 1;
    goto LAB81;

LAB82:    t323 = *((unsigned int *)t311);
    t324 = *((unsigned int *)t317);
    *((unsigned int *)t311) = (t323 | t324);
    t325 = (t258 + 4);
    t326 = (t303 + 4);
    t327 = *((unsigned int *)t325);
    t328 = (~(t327));
    t329 = *((unsigned int *)t258);
    t330 = (t329 & t328);
    t331 = *((unsigned int *)t326);
    t332 = (~(t331));
    t333 = *((unsigned int *)t303);
    t334 = (t333 & t332);
    t335 = (~(t330));
    t336 = (~(t334));
    t337 = *((unsigned int *)t317);
    *((unsigned int *)t317) = (t337 & t335);
    t338 = *((unsigned int *)t317);
    *((unsigned int *)t317) = (t338 & t336);
    goto LAB84;

LAB85:    *((unsigned int *)t339) = 1;
    goto LAB88;

LAB87:    t346 = (t339 + 4);
    *((unsigned int *)t339) = 1;
    *((unsigned int *)t346) = 1;
    goto LAB88;

LAB89:    t359 = *((unsigned int *)t347);
    t360 = *((unsigned int *)t353);
    *((unsigned int *)t347) = (t359 | t360);
    t361 = (t211 + 4);
    t362 = (t339 + 4);
    t363 = *((unsigned int *)t361);
    t364 = (~(t363));
    t365 = *((unsigned int *)t211);
    t366 = (t365 & t364);
    t367 = *((unsigned int *)t362);
    t368 = (~(t367));
    t369 = *((unsigned int *)t339);
    t370 = (t369 & t368);
    t371 = (~(t366));
    t372 = (~(t370));
    t373 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t373 & t371);
    t374 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t374 & t372);
    goto LAB91;

LAB92:    xsi_set_current_line(55, ng0);

LAB95:    xsi_set_current_line(56, ng0);
    t381 = (t0 + 2408);
    t382 = (t381 + 56U);
    t383 = *((char **)t382);
    t385 = (t0 + 2408);
    t386 = (t385 + 72U);
    t387 = *((char **)t386);
    t388 = (t0 + 2408);
    t389 = (t388 + 64U);
    t390 = *((char **)t389);
    t391 = (t0 + 2728);
    t392 = (t391 + 56U);
    t393 = *((char **)t392);
    xsi_vlog_generic_get_array_select_value(t384, 10, t383, t387, t390, 2, 1, t393, 32, 1);
    t394 = (t0 + 2408);
    t395 = (t394 + 56U);
    t396 = *((char **)t395);
    t398 = (t0 + 2408);
    t399 = (t398 + 72U);
    t400 = *((char **)t399);
    t401 = (t0 + 2408);
    t402 = (t401 + 64U);
    t403 = *((char **)t402);
    t404 = (t0 + 2888);
    t405 = (t404 + 56U);
    t406 = *((char **)t405);
    xsi_vlog_generic_get_array_select_value(t397, 10, t396, t400, t403, 2, 1, t406, 32, 1);
    memset(t407, 0, 8);
    t408 = (t384 + 4);
    if (*((unsigned int *)t408) != 0)
        goto LAB97;

LAB96:    t409 = (t397 + 4);
    if (*((unsigned int *)t409) != 0)
        goto LAB97;

LAB100:    if (*((unsigned int *)t384) < *((unsigned int *)t397))
        goto LAB99;

LAB98:    *((unsigned int *)t407) = 1;

LAB99:    memset(t411, 0, 8);
    t412 = (t407 + 4);
    t413 = *((unsigned int *)t412);
    t414 = (~(t413));
    t415 = *((unsigned int *)t407);
    t416 = (t415 & t414);
    t417 = (t416 & 1U);
    if (t417 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t412) != 0)
        goto LAB103;

LAB104:    t419 = (t411 + 4);
    t420 = *((unsigned int *)t411);
    t421 = *((unsigned int *)t419);
    t422 = (t420 || t421);
    if (t422 > 0)
        goto LAB105;

LAB106:    memcpy(t463, t411, 8);

LAB107:    memset(t495, 0, 8);
    t496 = (t463 + 4);
    t497 = *((unsigned int *)t496);
    t498 = (~(t497));
    t499 = *((unsigned int *)t463);
    t500 = (t499 & t498);
    t501 = (t500 & 1U);
    if (t501 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t496) != 0)
        goto LAB122;

LAB123:    t503 = (t495 + 4);
    t504 = *((unsigned int *)t495);
    t505 = (!(t504));
    t506 = *((unsigned int *)t503);
    t507 = (t505 || t506);
    if (t507 > 0)
        goto LAB124;

LAB125:    memcpy(t634, t495, 8);

LAB126:    t662 = (t634 + 4);
    t663 = *((unsigned int *)t662);
    t664 = (~(t663));
    t665 = *((unsigned int *)t634);
    t666 = (t665 & t664);
    t667 = (t666 != 0);
    if (t667 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB160:    goto LAB94;

LAB97:    t410 = (t407 + 4);
    *((unsigned int *)t407) = 1;
    *((unsigned int *)t410) = 1;
    goto LAB99;

LAB101:    *((unsigned int *)t411) = 1;
    goto LAB104;

LAB103:    t418 = (t411 + 4);
    *((unsigned int *)t411) = 1;
    *((unsigned int *)t418) = 1;
    goto LAB104;

LAB105:    t423 = (t0 + 2408);
    t424 = (t423 + 56U);
    t425 = *((char **)t424);
    t427 = (t0 + 2408);
    t428 = (t427 + 72U);
    t429 = *((char **)t428);
    t430 = (t0 + 2408);
    t431 = (t430 + 64U);
    t432 = *((char **)t431);
    t433 = (t0 + 2728);
    t434 = (t433 + 56U);
    t435 = *((char **)t434);
    xsi_vlog_generic_get_array_select_value(t426, 32, t425, t429, t432, 2, 1, t435, 32, 1);
    t436 = (t0 + 2408);
    t437 = (t436 + 56U);
    t438 = *((char **)t437);
    t440 = (t0 + 2408);
    t441 = (t440 + 72U);
    t442 = *((char **)t441);
    t443 = (t0 + 2408);
    t444 = (t443 + 64U);
    t445 = *((char **)t444);
    t446 = (t0 + 2888);
    t447 = (t446 + 56U);
    t448 = *((char **)t447);
    xsi_vlog_generic_get_array_select_value(t439, 32, t438, t442, t445, 2, 1, t448, 32, 1);
    t449 = ((char*)((ng5)));
    memset(t450, 0, 8);
    xsi_vlog_unsigned_add(t450, 32, t439, 32, t449, 32);
    memset(t451, 0, 8);
    t452 = (t426 + 4);
    if (*((unsigned int *)t452) != 0)
        goto LAB109;

LAB108:    t453 = (t450 + 4);
    if (*((unsigned int *)t453) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t426) > *((unsigned int *)t450))
        goto LAB111;

LAB110:    *((unsigned int *)t451) = 1;

LAB111:    memset(t455, 0, 8);
    t456 = (t451 + 4);
    t457 = *((unsigned int *)t456);
    t458 = (~(t457));
    t459 = *((unsigned int *)t451);
    t460 = (t459 & t458);
    t461 = (t460 & 1U);
    if (t461 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t456) != 0)
        goto LAB115;

LAB116:    t464 = *((unsigned int *)t411);
    t465 = *((unsigned int *)t455);
    t466 = (t464 & t465);
    *((unsigned int *)t463) = t466;
    t467 = (t411 + 4);
    t468 = (t455 + 4);
    t469 = (t463 + 4);
    t470 = *((unsigned int *)t467);
    t471 = *((unsigned int *)t468);
    t472 = (t470 | t471);
    *((unsigned int *)t469) = t472;
    t473 = *((unsigned int *)t469);
    t474 = (t473 != 0);
    if (t474 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB107;

LAB109:    t454 = (t451 + 4);
    *((unsigned int *)t451) = 1;
    *((unsigned int *)t454) = 1;
    goto LAB111;

LAB113:    *((unsigned int *)t455) = 1;
    goto LAB116;

LAB115:    t462 = (t455 + 4);
    *((unsigned int *)t455) = 1;
    *((unsigned int *)t462) = 1;
    goto LAB116;

LAB117:    t475 = *((unsigned int *)t463);
    t476 = *((unsigned int *)t469);
    *((unsigned int *)t463) = (t475 | t476);
    t477 = (t411 + 4);
    t478 = (t455 + 4);
    t479 = *((unsigned int *)t411);
    t480 = (~(t479));
    t481 = *((unsigned int *)t477);
    t482 = (~(t481));
    t483 = *((unsigned int *)t455);
    t484 = (~(t483));
    t485 = *((unsigned int *)t478);
    t486 = (~(t485));
    t487 = (t480 & t482);
    t488 = (t484 & t486);
    t489 = (~(t487));
    t490 = (~(t488));
    t491 = *((unsigned int *)t469);
    *((unsigned int *)t469) = (t491 & t489);
    t492 = *((unsigned int *)t469);
    *((unsigned int *)t469) = (t492 & t490);
    t493 = *((unsigned int *)t463);
    *((unsigned int *)t463) = (t493 & t489);
    t494 = *((unsigned int *)t463);
    *((unsigned int *)t463) = (t494 & t490);
    goto LAB119;

LAB120:    *((unsigned int *)t495) = 1;
    goto LAB123;

LAB122:    t502 = (t495 + 4);
    *((unsigned int *)t495) = 1;
    *((unsigned int *)t502) = 1;
    goto LAB123;

LAB124:    t508 = (t0 + 2408);
    t509 = (t508 + 56U);
    t510 = *((char **)t509);
    t512 = (t0 + 2408);
    t513 = (t512 + 72U);
    t514 = *((char **)t513);
    t515 = (t0 + 2408);
    t516 = (t515 + 64U);
    t517 = *((char **)t516);
    t518 = (t0 + 2728);
    t519 = (t518 + 56U);
    t520 = *((char **)t519);
    xsi_vlog_generic_get_array_select_value(t511, 32, t510, t514, t517, 2, 1, t520, 32, 1);
    t521 = ((char*)((ng4)));
    memset(t522, 0, 8);
    xsi_vlog_unsigned_add(t522, 32, t511, 32, t521, 32);
    t523 = (t0 + 2408);
    t524 = (t523 + 56U);
    t525 = *((char **)t524);
    t527 = (t0 + 2408);
    t528 = (t527 + 72U);
    t529 = *((char **)t528);
    t530 = (t0 + 2408);
    t531 = (t530 + 64U);
    t532 = *((char **)t531);
    t533 = (t0 + 2888);
    t534 = (t533 + 56U);
    t535 = *((char **)t534);
    xsi_vlog_generic_get_array_select_value(t526, 32, t525, t529, t532, 2, 1, t535, 32, 1);
    memset(t536, 0, 8);
    t537 = (t522 + 4);
    if (*((unsigned int *)t537) != 0)
        goto LAB128;

LAB127:    t538 = (t526 + 4);
    if (*((unsigned int *)t538) != 0)
        goto LAB128;

LAB131:    if (*((unsigned int *)t522) < *((unsigned int *)t526))
        goto LAB130;

LAB129:    *((unsigned int *)t536) = 1;

LAB130:    memset(t540, 0, 8);
    t541 = (t536 + 4);
    t542 = *((unsigned int *)t541);
    t543 = (~(t542));
    t544 = *((unsigned int *)t536);
    t545 = (t544 & t543);
    t546 = (t545 & 1U);
    if (t546 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t541) != 0)
        goto LAB134;

LAB135:    t548 = (t540 + 4);
    t549 = *((unsigned int *)t540);
    t550 = *((unsigned int *)t548);
    t551 = (t549 || t550);
    if (t551 > 0)
        goto LAB136;

LAB137:    memcpy(t594, t540, 8);

LAB138:    memset(t626, 0, 8);
    t627 = (t594 + 4);
    t628 = *((unsigned int *)t627);
    t629 = (~(t628));
    t630 = *((unsigned int *)t594);
    t631 = (t630 & t629);
    t632 = (t631 & 1U);
    if (t632 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t627) != 0)
        goto LAB153;

LAB154:    t635 = *((unsigned int *)t495);
    t636 = *((unsigned int *)t626);
    t637 = (t635 | t636);
    *((unsigned int *)t634) = t637;
    t638 = (t495 + 4);
    t639 = (t626 + 4);
    t640 = (t634 + 4);
    t641 = *((unsigned int *)t638);
    t642 = *((unsigned int *)t639);
    t643 = (t641 | t642);
    *((unsigned int *)t640) = t643;
    t644 = *((unsigned int *)t640);
    t645 = (t644 != 0);
    if (t645 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB126;

LAB128:    t539 = (t536 + 4);
    *((unsigned int *)t536) = 1;
    *((unsigned int *)t539) = 1;
    goto LAB130;

LAB132:    *((unsigned int *)t540) = 1;
    goto LAB135;

LAB134:    t547 = (t540 + 4);
    *((unsigned int *)t540) = 1;
    *((unsigned int *)t547) = 1;
    goto LAB135;

LAB136:    t552 = (t0 + 2408);
    t553 = (t552 + 56U);
    t554 = *((char **)t553);
    t556 = (t0 + 2408);
    t557 = (t556 + 72U);
    t558 = *((char **)t557);
    t559 = (t0 + 2408);
    t560 = (t559 + 64U);
    t561 = *((char **)t560);
    t562 = (t0 + 2728);
    t563 = (t562 + 56U);
    t564 = *((char **)t563);
    xsi_vlog_generic_get_array_select_value(t555, 32, t554, t558, t561, 2, 1, t564, 32, 1);
    t565 = ((char*)((ng4)));
    memset(t566, 0, 8);
    xsi_vlog_unsigned_add(t566, 32, t555, 32, t565, 32);
    t567 = (t0 + 2408);
    t568 = (t567 + 56U);
    t569 = *((char **)t568);
    t571 = (t0 + 2408);
    t572 = (t571 + 72U);
    t573 = *((char **)t572);
    t574 = (t0 + 2408);
    t575 = (t574 + 64U);
    t576 = *((char **)t575);
    t577 = (t0 + 2888);
    t578 = (t577 + 56U);
    t579 = *((char **)t578);
    xsi_vlog_generic_get_array_select_value(t570, 32, t569, t573, t576, 2, 1, t579, 32, 1);
    t580 = ((char*)((ng5)));
    memset(t581, 0, 8);
    xsi_vlog_unsigned_add(t581, 32, t570, 32, t580, 32);
    memset(t582, 0, 8);
    t583 = (t566 + 4);
    if (*((unsigned int *)t583) != 0)
        goto LAB140;

LAB139:    t584 = (t581 + 4);
    if (*((unsigned int *)t584) != 0)
        goto LAB140;

LAB143:    if (*((unsigned int *)t566) > *((unsigned int *)t581))
        goto LAB142;

LAB141:    *((unsigned int *)t582) = 1;

LAB142:    memset(t586, 0, 8);
    t587 = (t582 + 4);
    t588 = *((unsigned int *)t587);
    t589 = (~(t588));
    t590 = *((unsigned int *)t582);
    t591 = (t590 & t589);
    t592 = (t591 & 1U);
    if (t592 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t587) != 0)
        goto LAB146;

LAB147:    t595 = *((unsigned int *)t540);
    t596 = *((unsigned int *)t586);
    t597 = (t595 & t596);
    *((unsigned int *)t594) = t597;
    t598 = (t540 + 4);
    t599 = (t586 + 4);
    t600 = (t594 + 4);
    t601 = *((unsigned int *)t598);
    t602 = *((unsigned int *)t599);
    t603 = (t601 | t602);
    *((unsigned int *)t600) = t603;
    t604 = *((unsigned int *)t600);
    t605 = (t604 != 0);
    if (t605 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB138;

LAB140:    t585 = (t582 + 4);
    *((unsigned int *)t582) = 1;
    *((unsigned int *)t585) = 1;
    goto LAB142;

LAB144:    *((unsigned int *)t586) = 1;
    goto LAB147;

LAB146:    t593 = (t586 + 4);
    *((unsigned int *)t586) = 1;
    *((unsigned int *)t593) = 1;
    goto LAB147;

LAB148:    t606 = *((unsigned int *)t594);
    t607 = *((unsigned int *)t600);
    *((unsigned int *)t594) = (t606 | t607);
    t608 = (t540 + 4);
    t609 = (t586 + 4);
    t610 = *((unsigned int *)t540);
    t611 = (~(t610));
    t612 = *((unsigned int *)t608);
    t613 = (~(t612));
    t614 = *((unsigned int *)t586);
    t615 = (~(t614));
    t616 = *((unsigned int *)t609);
    t617 = (~(t616));
    t618 = (t611 & t613);
    t619 = (t615 & t617);
    t620 = (~(t618));
    t621 = (~(t619));
    t622 = *((unsigned int *)t600);
    *((unsigned int *)t600) = (t622 & t620);
    t623 = *((unsigned int *)t600);
    *((unsigned int *)t600) = (t623 & t621);
    t624 = *((unsigned int *)t594);
    *((unsigned int *)t594) = (t624 & t620);
    t625 = *((unsigned int *)t594);
    *((unsigned int *)t594) = (t625 & t621);
    goto LAB150;

LAB151:    *((unsigned int *)t626) = 1;
    goto LAB154;

LAB153:    t633 = (t626 + 4);
    *((unsigned int *)t626) = 1;
    *((unsigned int *)t633) = 1;
    goto LAB154;

LAB155:    t646 = *((unsigned int *)t634);
    t647 = *((unsigned int *)t640);
    *((unsigned int *)t634) = (t646 | t647);
    t648 = (t495 + 4);
    t649 = (t626 + 4);
    t650 = *((unsigned int *)t648);
    t651 = (~(t650));
    t652 = *((unsigned int *)t495);
    t653 = (t652 & t651);
    t654 = *((unsigned int *)t649);
    t655 = (~(t654));
    t656 = *((unsigned int *)t626);
    t657 = (t656 & t655);
    t658 = (~(t653));
    t659 = (~(t657));
    t660 = *((unsigned int *)t640);
    *((unsigned int *)t640) = (t660 & t658);
    t661 = *((unsigned int *)t640);
    *((unsigned int *)t640) = (t661 & t659);
    goto LAB157;

LAB158:    xsi_set_current_line(58, ng0);
    t668 = ((char*)((ng6)));
    t669 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t669, t668, 0, 0, 1, 0LL);
    goto LAB160;

}


extern void work_m_14276363748417854104_3330788944_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_43_1};
	xsi_register_didat("work_m_14276363748417854104_3330788944", "isim/collision_detectiontb_isim_beh.exe.sim/work/m_14276363748417854104_3330788944.didat");
	xsi_register_executes(pe);
}
