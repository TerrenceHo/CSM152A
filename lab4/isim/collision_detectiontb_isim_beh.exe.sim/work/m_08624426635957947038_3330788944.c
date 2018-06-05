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
static const char *ng0 = "/home/ise/M152A/CSM152A/lab4/collision_detection.v";
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
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;

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
    t4 = (t0 + 2248);
    t8 = (t0 + 2248);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2248);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1688U);
    t15 = *((char **)t14);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t15, 10, 2);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t13, 10, 2);
    t12 = (t6 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t6, t3, 8);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_array_indices(t7, t26, t8, t11, 2, 1, t13, 10, 2);
    t12 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (!(t16));
    t14 = (t26 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t6, 0, *((unsigned int *)t26), t25);
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
    char t273[8];
    char t284[8];
    char t288[8];
    char t298[8];
    char t302[8];
    char t310[8];
    char t342[8];
    char t350[8];
    char t387[8];
    char t400[8];
    char t410[8];
    char t414[8];
    char t429[8];
    char t442[8];
    char t453[8];
    char t454[8];
    char t458[8];
    char t466[8];
    char t498[8];
    char t514[8];
    char t525[8];
    char t529[8];
    char t539[8];
    char t543[8];
    char t558[8];
    char t569[8];
    char t573[8];
    char t584[8];
    char t585[8];
    char t589[8];
    char t597[8];
    char t629[8];
    char t637[8];
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
    char *t270;
    char *t271;
    char *t272;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    char *t278;
    char *t279;
    char *t280;
    char *t281;
    char *t282;
    char *t283;
    char *t285;
    char *t286;
    char *t287;
    char *t289;
    char *t290;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    char *t295;
    char *t296;
    char *t297;
    char *t299;
    char *t300;
    char *t301;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t309;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    int t334;
    int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    char *t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    char *t349;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;
    char *t355;
    char *t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    char *t364;
    char *t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    int t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    char *t384;
    char *t385;
    char *t386;
    char *t388;
    char *t389;
    char *t390;
    char *t391;
    char *t392;
    char *t393;
    char *t394;
    char *t395;
    char *t396;
    char *t397;
    char *t398;
    char *t399;
    char *t401;
    char *t402;
    char *t403;
    char *t404;
    char *t405;
    char *t406;
    char *t407;
    char *t408;
    char *t409;
    char *t411;
    char *t412;
    char *t413;
    char *t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    char *t421;
    char *t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    char *t426;
    char *t427;
    char *t428;
    char *t430;
    char *t431;
    char *t432;
    char *t433;
    char *t434;
    char *t435;
    char *t436;
    char *t437;
    char *t438;
    char *t439;
    char *t440;
    char *t441;
    char *t443;
    char *t444;
    char *t445;
    char *t446;
    char *t447;
    char *t448;
    char *t449;
    char *t450;
    char *t451;
    char *t452;
    char *t455;
    char *t456;
    char *t457;
    char *t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    unsigned int t464;
    char *t465;
    unsigned int t467;
    unsigned int t468;
    unsigned int t469;
    char *t470;
    char *t471;
    char *t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    char *t480;
    char *t481;
    unsigned int t482;
    unsigned int t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    int t490;
    int t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    unsigned int t495;
    unsigned int t496;
    unsigned int t497;
    char *t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    char *t505;
    char *t506;
    unsigned int t507;
    unsigned int t508;
    unsigned int t509;
    unsigned int t510;
    char *t511;
    char *t512;
    char *t513;
    char *t515;
    char *t516;
    char *t517;
    char *t518;
    char *t519;
    char *t520;
    char *t521;
    char *t522;
    char *t523;
    char *t524;
    char *t526;
    char *t527;
    char *t528;
    char *t530;
    char *t531;
    char *t532;
    char *t533;
    char *t534;
    char *t535;
    char *t536;
    char *t537;
    char *t538;
    char *t540;
    char *t541;
    char *t542;
    char *t544;
    unsigned int t545;
    unsigned int t546;
    unsigned int t547;
    unsigned int t548;
    unsigned int t549;
    char *t550;
    char *t551;
    unsigned int t552;
    unsigned int t553;
    unsigned int t554;
    char *t555;
    char *t556;
    char *t557;
    char *t559;
    char *t560;
    char *t561;
    char *t562;
    char *t563;
    char *t564;
    char *t565;
    char *t566;
    char *t567;
    char *t568;
    char *t570;
    char *t571;
    char *t572;
    char *t574;
    char *t575;
    char *t576;
    char *t577;
    char *t578;
    char *t579;
    char *t580;
    char *t581;
    char *t582;
    char *t583;
    char *t586;
    char *t587;
    char *t588;
    char *t590;
    unsigned int t591;
    unsigned int t592;
    unsigned int t593;
    unsigned int t594;
    unsigned int t595;
    char *t596;
    unsigned int t598;
    unsigned int t599;
    unsigned int t600;
    char *t601;
    char *t602;
    char *t603;
    unsigned int t604;
    unsigned int t605;
    unsigned int t606;
    unsigned int t607;
    unsigned int t608;
    unsigned int t609;
    unsigned int t610;
    char *t611;
    char *t612;
    unsigned int t613;
    unsigned int t614;
    unsigned int t615;
    unsigned int t616;
    unsigned int t617;
    unsigned int t618;
    unsigned int t619;
    unsigned int t620;
    int t621;
    int t622;
    unsigned int t623;
    unsigned int t624;
    unsigned int t625;
    unsigned int t626;
    unsigned int t627;
    unsigned int t628;
    char *t630;
    unsigned int t631;
    unsigned int t632;
    unsigned int t633;
    unsigned int t634;
    unsigned int t635;
    char *t636;
    unsigned int t638;
    unsigned int t639;
    unsigned int t640;
    char *t641;
    char *t642;
    char *t643;
    unsigned int t644;
    unsigned int t645;
    unsigned int t646;
    unsigned int t647;
    unsigned int t648;
    unsigned int t649;
    unsigned int t650;
    char *t651;
    char *t652;
    unsigned int t653;
    unsigned int t654;
    unsigned int t655;
    int t656;
    unsigned int t657;
    unsigned int t658;
    unsigned int t659;
    int t660;
    unsigned int t661;
    unsigned int t662;
    unsigned int t663;
    unsigned int t664;
    char *t665;
    unsigned int t666;
    unsigned int t667;
    unsigned int t668;
    unsigned int t669;
    unsigned int t670;
    char *t671;
    char *t672;

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

LAB59:    memcpy(t350, t211, 8);

LAB60:    t378 = (t350 + 4);
    t379 = *((unsigned int *)t378);
    t380 = (~(t379));
    t381 = *((unsigned int *)t350);
    t382 = (t381 & t380);
    t383 = (t382 != 0);
    if (t383 > 0)
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
    t268 = *((unsigned int *)t266);
    t269 = (t267 || t268);
    if (t269 > 0)
        goto LAB70;

LAB71:    memcpy(t310, t258, 8);

LAB72:    memset(t342, 0, 8);
    t343 = (t310 + 4);
    t344 = *((unsigned int *)t343);
    t345 = (~(t344));
    t346 = *((unsigned int *)t310);
    t347 = (t346 & t345);
    t348 = (t347 & 1U);
    if (t348 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t343) != 0)
        goto LAB87;

LAB88:    t351 = *((unsigned int *)t211);
    t352 = *((unsigned int *)t342);
    t353 = (t351 | t352);
    *((unsigned int *)t350) = t353;
    t354 = (t211 + 4);
    t355 = (t342 + 4);
    t356 = (t350 + 4);
    t357 = *((unsigned int *)t354);
    t358 = *((unsigned int *)t355);
    t359 = (t357 | t358);
    *((unsigned int *)t356) = t359;
    t360 = *((unsigned int *)t356);
    t361 = (t360 != 0);
    if (t361 == 1)
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

LAB70:    t270 = (t0 + 2248);
    t271 = (t270 + 56U);
    t272 = *((char **)t271);
    t274 = (t0 + 2248);
    t275 = (t274 + 72U);
    t276 = *((char **)t275);
    t277 = (t0 + 2248);
    t278 = (t277 + 64U);
    t279 = *((char **)t278);
    t280 = (t0 + 2728);
    t281 = (t280 + 56U);
    t282 = *((char **)t281);
    xsi_vlog_generic_get_array_select_value(t273, 32, t272, t276, t279, 2, 1, t282, 32, 1);
    t283 = ((char*)((ng5)));
    memset(t284, 0, 8);
    xsi_vlog_unsigned_add(t284, 32, t273, 32, t283, 32);
    t285 = (t0 + 2248);
    t286 = (t285 + 56U);
    t287 = *((char **)t286);
    t289 = (t0 + 2248);
    t290 = (t289 + 72U);
    t291 = *((char **)t290);
    t292 = (t0 + 2248);
    t293 = (t292 + 64U);
    t294 = *((char **)t293);
    t295 = (t0 + 2888);
    t296 = (t295 + 56U);
    t297 = *((char **)t296);
    xsi_vlog_generic_get_array_select_value(t288, 32, t287, t291, t294, 2, 1, t297, 32, 1);
    memset(t298, 0, 8);
    t299 = (t284 + 4);
    if (*((unsigned int *)t299) != 0)
        goto LAB74;

LAB73:    t300 = (t288 + 4);
    if (*((unsigned int *)t300) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t284) < *((unsigned int *)t288))
        goto LAB76;

LAB75:    *((unsigned int *)t298) = 1;

LAB76:    memset(t302, 0, 8);
    t303 = (t298 + 4);
    t304 = *((unsigned int *)t303);
    t305 = (~(t304));
    t306 = *((unsigned int *)t298);
    t307 = (t306 & t305);
    t308 = (t307 & 1U);
    if (t308 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t303) != 0)
        goto LAB80;

LAB81:    t311 = *((unsigned int *)t258);
    t312 = *((unsigned int *)t302);
    t313 = (t311 & t312);
    *((unsigned int *)t310) = t313;
    t314 = (t258 + 4);
    t315 = (t302 + 4);
    t316 = (t310 + 4);
    t317 = *((unsigned int *)t314);
    t318 = *((unsigned int *)t315);
    t319 = (t317 | t318);
    *((unsigned int *)t316) = t319;
    t320 = *((unsigned int *)t316);
    t321 = (t320 != 0);
    if (t321 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB72;

LAB74:    t301 = (t298 + 4);
    *((unsigned int *)t298) = 1;
    *((unsigned int *)t301) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t302) = 1;
    goto LAB81;

LAB80:    t309 = (t302 + 4);
    *((unsigned int *)t302) = 1;
    *((unsigned int *)t309) = 1;
    goto LAB81;

LAB82:    t322 = *((unsigned int *)t310);
    t323 = *((unsigned int *)t316);
    *((unsigned int *)t310) = (t322 | t323);
    t324 = (t258 + 4);
    t325 = (t302 + 4);
    t326 = *((unsigned int *)t258);
    t327 = (~(t326));
    t328 = *((unsigned int *)t324);
    t329 = (~(t328));
    t330 = *((unsigned int *)t302);
    t331 = (~(t330));
    t332 = *((unsigned int *)t325);
    t333 = (~(t332));
    t334 = (t327 & t329);
    t335 = (t331 & t333);
    t336 = (~(t334));
    t337 = (~(t335));
    t338 = *((unsigned int *)t316);
    *((unsigned int *)t316) = (t338 & t336);
    t339 = *((unsigned int *)t316);
    *((unsigned int *)t316) = (t339 & t337);
    t340 = *((unsigned int *)t310);
    *((unsigned int *)t310) = (t340 & t336);
    t341 = *((unsigned int *)t310);
    *((unsigned int *)t310) = (t341 & t337);
    goto LAB84;

LAB85:    *((unsigned int *)t342) = 1;
    goto LAB88;

LAB87:    t349 = (t342 + 4);
    *((unsigned int *)t342) = 1;
    *((unsigned int *)t349) = 1;
    goto LAB88;

LAB89:    t362 = *((unsigned int *)t350);
    t363 = *((unsigned int *)t356);
    *((unsigned int *)t350) = (t362 | t363);
    t364 = (t211 + 4);
    t365 = (t342 + 4);
    t366 = *((unsigned int *)t364);
    t367 = (~(t366));
    t368 = *((unsigned int *)t211);
    t369 = (t368 & t367);
    t370 = *((unsigned int *)t365);
    t371 = (~(t370));
    t372 = *((unsigned int *)t342);
    t373 = (t372 & t371);
    t374 = (~(t369));
    t375 = (~(t373));
    t376 = *((unsigned int *)t356);
    *((unsigned int *)t356) = (t376 & t374);
    t377 = *((unsigned int *)t356);
    *((unsigned int *)t356) = (t377 & t375);
    goto LAB91;

LAB92:    xsi_set_current_line(55, ng0);

LAB95:    xsi_set_current_line(56, ng0);
    t384 = (t0 + 2408);
    t385 = (t384 + 56U);
    t386 = *((char **)t385);
    t388 = (t0 + 2408);
    t389 = (t388 + 72U);
    t390 = *((char **)t389);
    t391 = (t0 + 2408);
    t392 = (t391 + 64U);
    t393 = *((char **)t392);
    t394 = (t0 + 2728);
    t395 = (t394 + 56U);
    t396 = *((char **)t395);
    xsi_vlog_generic_get_array_select_value(t387, 10, t386, t390, t393, 2, 1, t396, 32, 1);
    t397 = (t0 + 2408);
    t398 = (t397 + 56U);
    t399 = *((char **)t398);
    t401 = (t0 + 2408);
    t402 = (t401 + 72U);
    t403 = *((char **)t402);
    t404 = (t0 + 2408);
    t405 = (t404 + 64U);
    t406 = *((char **)t405);
    t407 = (t0 + 2888);
    t408 = (t407 + 56U);
    t409 = *((char **)t408);
    xsi_vlog_generic_get_array_select_value(t400, 10, t399, t403, t406, 2, 1, t409, 32, 1);
    memset(t410, 0, 8);
    t411 = (t387 + 4);
    if (*((unsigned int *)t411) != 0)
        goto LAB97;

LAB96:    t412 = (t400 + 4);
    if (*((unsigned int *)t412) != 0)
        goto LAB97;

LAB100:    if (*((unsigned int *)t387) < *((unsigned int *)t400))
        goto LAB99;

LAB98:    *((unsigned int *)t410) = 1;

LAB99:    memset(t414, 0, 8);
    t415 = (t410 + 4);
    t416 = *((unsigned int *)t415);
    t417 = (~(t416));
    t418 = *((unsigned int *)t410);
    t419 = (t418 & t417);
    t420 = (t419 & 1U);
    if (t420 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t415) != 0)
        goto LAB103;

LAB104:    t422 = (t414 + 4);
    t423 = *((unsigned int *)t414);
    t424 = *((unsigned int *)t422);
    t425 = (t423 || t424);
    if (t425 > 0)
        goto LAB105;

LAB106:    memcpy(t466, t414, 8);

LAB107:    memset(t498, 0, 8);
    t499 = (t466 + 4);
    t500 = *((unsigned int *)t499);
    t501 = (~(t500));
    t502 = *((unsigned int *)t466);
    t503 = (t502 & t501);
    t504 = (t503 & 1U);
    if (t504 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t499) != 0)
        goto LAB122;

LAB123:    t506 = (t498 + 4);
    t507 = *((unsigned int *)t498);
    t508 = (!(t507));
    t509 = *((unsigned int *)t506);
    t510 = (t508 || t509);
    if (t510 > 0)
        goto LAB124;

LAB125:    memcpy(t637, t498, 8);

LAB126:    t665 = (t637 + 4);
    t666 = *((unsigned int *)t665);
    t667 = (~(t666));
    t668 = *((unsigned int *)t637);
    t669 = (t668 & t667);
    t670 = (t669 != 0);
    if (t670 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB160:    goto LAB94;

LAB97:    t413 = (t410 + 4);
    *((unsigned int *)t410) = 1;
    *((unsigned int *)t413) = 1;
    goto LAB99;

LAB101:    *((unsigned int *)t414) = 1;
    goto LAB104;

LAB103:    t421 = (t414 + 4);
    *((unsigned int *)t414) = 1;
    *((unsigned int *)t421) = 1;
    goto LAB104;

LAB105:    t426 = (t0 + 2408);
    t427 = (t426 + 56U);
    t428 = *((char **)t427);
    t430 = (t0 + 2408);
    t431 = (t430 + 72U);
    t432 = *((char **)t431);
    t433 = (t0 + 2408);
    t434 = (t433 + 64U);
    t435 = *((char **)t434);
    t436 = (t0 + 2728);
    t437 = (t436 + 56U);
    t438 = *((char **)t437);
    xsi_vlog_generic_get_array_select_value(t429, 32, t428, t432, t435, 2, 1, t438, 32, 1);
    t439 = (t0 + 2408);
    t440 = (t439 + 56U);
    t441 = *((char **)t440);
    t443 = (t0 + 2408);
    t444 = (t443 + 72U);
    t445 = *((char **)t444);
    t446 = (t0 + 2408);
    t447 = (t446 + 64U);
    t448 = *((char **)t447);
    t449 = (t0 + 2888);
    t450 = (t449 + 56U);
    t451 = *((char **)t450);
    xsi_vlog_generic_get_array_select_value(t442, 32, t441, t445, t448, 2, 1, t451, 32, 1);
    t452 = ((char*)((ng5)));
    memset(t453, 0, 8);
    xsi_vlog_unsigned_add(t453, 32, t442, 32, t452, 32);
    memset(t454, 0, 8);
    t455 = (t429 + 4);
    if (*((unsigned int *)t455) != 0)
        goto LAB109;

LAB108:    t456 = (t453 + 4);
    if (*((unsigned int *)t456) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t429) > *((unsigned int *)t453))
        goto LAB111;

LAB110:    *((unsigned int *)t454) = 1;

LAB111:    memset(t458, 0, 8);
    t459 = (t454 + 4);
    t460 = *((unsigned int *)t459);
    t461 = (~(t460));
    t462 = *((unsigned int *)t454);
    t463 = (t462 & t461);
    t464 = (t463 & 1U);
    if (t464 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t459) != 0)
        goto LAB115;

LAB116:    t467 = *((unsigned int *)t414);
    t468 = *((unsigned int *)t458);
    t469 = (t467 & t468);
    *((unsigned int *)t466) = t469;
    t470 = (t414 + 4);
    t471 = (t458 + 4);
    t472 = (t466 + 4);
    t473 = *((unsigned int *)t470);
    t474 = *((unsigned int *)t471);
    t475 = (t473 | t474);
    *((unsigned int *)t472) = t475;
    t476 = *((unsigned int *)t472);
    t477 = (t476 != 0);
    if (t477 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB107;

LAB109:    t457 = (t454 + 4);
    *((unsigned int *)t454) = 1;
    *((unsigned int *)t457) = 1;
    goto LAB111;

LAB113:    *((unsigned int *)t458) = 1;
    goto LAB116;

LAB115:    t465 = (t458 + 4);
    *((unsigned int *)t458) = 1;
    *((unsigned int *)t465) = 1;
    goto LAB116;

LAB117:    t478 = *((unsigned int *)t466);
    t479 = *((unsigned int *)t472);
    *((unsigned int *)t466) = (t478 | t479);
    t480 = (t414 + 4);
    t481 = (t458 + 4);
    t482 = *((unsigned int *)t414);
    t483 = (~(t482));
    t484 = *((unsigned int *)t480);
    t485 = (~(t484));
    t486 = *((unsigned int *)t458);
    t487 = (~(t486));
    t488 = *((unsigned int *)t481);
    t489 = (~(t488));
    t490 = (t483 & t485);
    t491 = (t487 & t489);
    t492 = (~(t490));
    t493 = (~(t491));
    t494 = *((unsigned int *)t472);
    *((unsigned int *)t472) = (t494 & t492);
    t495 = *((unsigned int *)t472);
    *((unsigned int *)t472) = (t495 & t493);
    t496 = *((unsigned int *)t466);
    *((unsigned int *)t466) = (t496 & t492);
    t497 = *((unsigned int *)t466);
    *((unsigned int *)t466) = (t497 & t493);
    goto LAB119;

LAB120:    *((unsigned int *)t498) = 1;
    goto LAB123;

LAB122:    t505 = (t498 + 4);
    *((unsigned int *)t498) = 1;
    *((unsigned int *)t505) = 1;
    goto LAB123;

LAB124:    t511 = (t0 + 2408);
    t512 = (t511 + 56U);
    t513 = *((char **)t512);
    t515 = (t0 + 2408);
    t516 = (t515 + 72U);
    t517 = *((char **)t516);
    t518 = (t0 + 2408);
    t519 = (t518 + 64U);
    t520 = *((char **)t519);
    t521 = (t0 + 2728);
    t522 = (t521 + 56U);
    t523 = *((char **)t522);
    xsi_vlog_generic_get_array_select_value(t514, 32, t513, t517, t520, 2, 1, t523, 32, 1);
    t524 = ((char*)((ng4)));
    memset(t525, 0, 8);
    xsi_vlog_unsigned_add(t525, 32, t514, 32, t524, 32);
    t526 = (t0 + 2408);
    t527 = (t526 + 56U);
    t528 = *((char **)t527);
    t530 = (t0 + 2408);
    t531 = (t530 + 72U);
    t532 = *((char **)t531);
    t533 = (t0 + 2408);
    t534 = (t533 + 64U);
    t535 = *((char **)t534);
    t536 = (t0 + 2888);
    t537 = (t536 + 56U);
    t538 = *((char **)t537);
    xsi_vlog_generic_get_array_select_value(t529, 32, t528, t532, t535, 2, 1, t538, 32, 1);
    memset(t539, 0, 8);
    t540 = (t525 + 4);
    if (*((unsigned int *)t540) != 0)
        goto LAB128;

LAB127:    t541 = (t529 + 4);
    if (*((unsigned int *)t541) != 0)
        goto LAB128;

LAB131:    if (*((unsigned int *)t525) < *((unsigned int *)t529))
        goto LAB130;

LAB129:    *((unsigned int *)t539) = 1;

LAB130:    memset(t543, 0, 8);
    t544 = (t539 + 4);
    t545 = *((unsigned int *)t544);
    t546 = (~(t545));
    t547 = *((unsigned int *)t539);
    t548 = (t547 & t546);
    t549 = (t548 & 1U);
    if (t549 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t544) != 0)
        goto LAB134;

LAB135:    t551 = (t543 + 4);
    t552 = *((unsigned int *)t543);
    t553 = *((unsigned int *)t551);
    t554 = (t552 || t553);
    if (t554 > 0)
        goto LAB136;

LAB137:    memcpy(t597, t543, 8);

LAB138:    memset(t629, 0, 8);
    t630 = (t597 + 4);
    t631 = *((unsigned int *)t630);
    t632 = (~(t631));
    t633 = *((unsigned int *)t597);
    t634 = (t633 & t632);
    t635 = (t634 & 1U);
    if (t635 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t630) != 0)
        goto LAB153;

LAB154:    t638 = *((unsigned int *)t498);
    t639 = *((unsigned int *)t629);
    t640 = (t638 | t639);
    *((unsigned int *)t637) = t640;
    t641 = (t498 + 4);
    t642 = (t629 + 4);
    t643 = (t637 + 4);
    t644 = *((unsigned int *)t641);
    t645 = *((unsigned int *)t642);
    t646 = (t644 | t645);
    *((unsigned int *)t643) = t646;
    t647 = *((unsigned int *)t643);
    t648 = (t647 != 0);
    if (t648 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB126;

LAB128:    t542 = (t539 + 4);
    *((unsigned int *)t539) = 1;
    *((unsigned int *)t542) = 1;
    goto LAB130;

LAB132:    *((unsigned int *)t543) = 1;
    goto LAB135;

LAB134:    t550 = (t543 + 4);
    *((unsigned int *)t543) = 1;
    *((unsigned int *)t550) = 1;
    goto LAB135;

LAB136:    t555 = (t0 + 2408);
    t556 = (t555 + 56U);
    t557 = *((char **)t556);
    t559 = (t0 + 2408);
    t560 = (t559 + 72U);
    t561 = *((char **)t560);
    t562 = (t0 + 2408);
    t563 = (t562 + 64U);
    t564 = *((char **)t563);
    t565 = (t0 + 2728);
    t566 = (t565 + 56U);
    t567 = *((char **)t566);
    xsi_vlog_generic_get_array_select_value(t558, 32, t557, t561, t564, 2, 1, t567, 32, 1);
    t568 = ((char*)((ng4)));
    memset(t569, 0, 8);
    xsi_vlog_unsigned_add(t569, 32, t558, 32, t568, 32);
    t570 = (t0 + 2408);
    t571 = (t570 + 56U);
    t572 = *((char **)t571);
    t574 = (t0 + 2408);
    t575 = (t574 + 72U);
    t576 = *((char **)t575);
    t577 = (t0 + 2408);
    t578 = (t577 + 64U);
    t579 = *((char **)t578);
    t580 = (t0 + 2888);
    t581 = (t580 + 56U);
    t582 = *((char **)t581);
    xsi_vlog_generic_get_array_select_value(t573, 32, t572, t576, t579, 2, 1, t582, 32, 1);
    t583 = ((char*)((ng5)));
    memset(t584, 0, 8);
    xsi_vlog_unsigned_add(t584, 32, t573, 32, t583, 32);
    memset(t585, 0, 8);
    t586 = (t569 + 4);
    if (*((unsigned int *)t586) != 0)
        goto LAB140;

LAB139:    t587 = (t584 + 4);
    if (*((unsigned int *)t587) != 0)
        goto LAB140;

LAB143:    if (*((unsigned int *)t569) > *((unsigned int *)t584))
        goto LAB142;

LAB141:    *((unsigned int *)t585) = 1;

LAB142:    memset(t589, 0, 8);
    t590 = (t585 + 4);
    t591 = *((unsigned int *)t590);
    t592 = (~(t591));
    t593 = *((unsigned int *)t585);
    t594 = (t593 & t592);
    t595 = (t594 & 1U);
    if (t595 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t590) != 0)
        goto LAB146;

LAB147:    t598 = *((unsigned int *)t543);
    t599 = *((unsigned int *)t589);
    t600 = (t598 & t599);
    *((unsigned int *)t597) = t600;
    t601 = (t543 + 4);
    t602 = (t589 + 4);
    t603 = (t597 + 4);
    t604 = *((unsigned int *)t601);
    t605 = *((unsigned int *)t602);
    t606 = (t604 | t605);
    *((unsigned int *)t603) = t606;
    t607 = *((unsigned int *)t603);
    t608 = (t607 != 0);
    if (t608 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB138;

LAB140:    t588 = (t585 + 4);
    *((unsigned int *)t585) = 1;
    *((unsigned int *)t588) = 1;
    goto LAB142;

LAB144:    *((unsigned int *)t589) = 1;
    goto LAB147;

LAB146:    t596 = (t589 + 4);
    *((unsigned int *)t589) = 1;
    *((unsigned int *)t596) = 1;
    goto LAB147;

LAB148:    t609 = *((unsigned int *)t597);
    t610 = *((unsigned int *)t603);
    *((unsigned int *)t597) = (t609 | t610);
    t611 = (t543 + 4);
    t612 = (t589 + 4);
    t613 = *((unsigned int *)t543);
    t614 = (~(t613));
    t615 = *((unsigned int *)t611);
    t616 = (~(t615));
    t617 = *((unsigned int *)t589);
    t618 = (~(t617));
    t619 = *((unsigned int *)t612);
    t620 = (~(t619));
    t621 = (t614 & t616);
    t622 = (t618 & t620);
    t623 = (~(t621));
    t624 = (~(t622));
    t625 = *((unsigned int *)t603);
    *((unsigned int *)t603) = (t625 & t623);
    t626 = *((unsigned int *)t603);
    *((unsigned int *)t603) = (t626 & t624);
    t627 = *((unsigned int *)t597);
    *((unsigned int *)t597) = (t627 & t623);
    t628 = *((unsigned int *)t597);
    *((unsigned int *)t597) = (t628 & t624);
    goto LAB150;

LAB151:    *((unsigned int *)t629) = 1;
    goto LAB154;

LAB153:    t636 = (t629 + 4);
    *((unsigned int *)t629) = 1;
    *((unsigned int *)t636) = 1;
    goto LAB154;

LAB155:    t649 = *((unsigned int *)t637);
    t650 = *((unsigned int *)t643);
    *((unsigned int *)t637) = (t649 | t650);
    t651 = (t498 + 4);
    t652 = (t629 + 4);
    t653 = *((unsigned int *)t651);
    t654 = (~(t653));
    t655 = *((unsigned int *)t498);
    t656 = (t655 & t654);
    t657 = *((unsigned int *)t652);
    t658 = (~(t657));
    t659 = *((unsigned int *)t629);
    t660 = (t659 & t658);
    t661 = (~(t656));
    t662 = (~(t660));
    t663 = *((unsigned int *)t643);
    *((unsigned int *)t643) = (t663 & t661);
    t664 = *((unsigned int *)t643);
    *((unsigned int *)t643) = (t664 & t662);
    goto LAB157;

LAB158:    xsi_set_current_line(58, ng0);
    t671 = ((char*)((ng6)));
    t672 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t672, t671, 0, 0, 1, 0LL);
    goto LAB160;

}


extern void work_m_08624426635957947038_3330788944_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_43_1};
	xsi_register_didat("work_m_08624426635957947038_3330788944", "isim/collision_detectiontb_isim_beh.exe.sim/work/m_08624426635957947038_3330788944.didat");
	xsi_register_executes(pe);
}
