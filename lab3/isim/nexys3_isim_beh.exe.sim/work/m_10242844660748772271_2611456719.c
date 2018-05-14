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
static const char *ng0 = "/home/ise/SharedFolderVM/CSM152A/lab3/Display.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {13U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {192U, 0U};
static unsigned int ng11[] = {249U, 0U};
static unsigned int ng12[] = {164U, 0U};
static unsigned int ng13[] = {176U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {153U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {146U, 0U};
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {130U, 0U};
static unsigned int ng20[] = {248U, 0U};
static unsigned int ng21[] = {8U, 0U};
static unsigned int ng22[] = {128U, 0U};
static unsigned int ng23[] = {9U, 0U};
static unsigned int ng24[] = {144U, 0U};
static unsigned int ng25[] = {255U, 0U};



static void Always_65_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t32[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    int t62;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6464);
    *((int *)t2) = 1;
    t3 = (t0 + 5432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);
    t29 = (t0 + 4488);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 4488);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 1688U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_index_select_value(t32, 1, t31, t35, 2, t37, 2, 2);
    memset(t28, 0, 8);
    t36 = (t32 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t36) == 0)
        goto LAB13;

LAB15:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;

LAB16:    t44 = (t28 + 4);
    t45 = (t32 + 4);
    t46 = *((unsigned int *)t32);
    t47 = (~(t46));
    *((unsigned int *)t28) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB18;

LAB17:    t52 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 4488);
    t56 = (t0 + 4488);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 1688U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_bit_index(t55, t58, 2, t60, 2, 2);
    t59 = (t55 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (!(t61));
    if (t62 == 1)
        goto LAB19;

LAB20:    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB18:    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t28) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB17;

LAB19:    xsi_vlogvar_assign_value(t54, t28, 0, *((unsigned int *)t55), 1);
    goto LAB20;

}

static void Always_72_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6480);
    *((int *)t2) = 1;
    t3 = (t0 + 5680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB32:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB55:    goto LAB2;

LAB7:    xsi_set_current_line(76, ng0);

LAB16:    xsi_set_current_line(77, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t7 = (t2 + 4);
    t9 = (t5 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB17;

LAB18:
LAB19:    t35 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t35, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(82, ng0);

LAB20:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t7 = (t2 + 4);
    t9 = (t5 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB21;

LAB22:
LAB23:    t35 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t35, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(88, ng0);

LAB24:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t7 = (t2 + 4);
    t9 = (t5 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB25;

LAB26:
LAB27:    t35 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t35, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(94, ng0);

LAB28:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t7 = (t2 + 4);
    t9 = (t5 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB29;

LAB30:
LAB31:    t35 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t35, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB17:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t2 + 4);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB19;

LAB21:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t2 + 4);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB23;

LAB25:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t2 + 4);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB27;

LAB29:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t2 + 4);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t2);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB31;

LAB33:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng10)));
    t9 = (t0 + 4328);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB55;

LAB35:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB37:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB39:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB41:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB43:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB45:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB47:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB49:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

LAB51:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB55;

}

static void Cont_117_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 6496);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_118_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 6512);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_10242844660748772271_2611456719_init()
{
	static char *pe[] = {(void *)Always_65_0,(void *)Always_72_1,(void *)Cont_117_2,(void *)Cont_118_3};
	xsi_register_didat("work_m_10242844660748772271_2611456719", "isim/nexys3_isim_beh.exe.sim/work/m_10242844660748772271_2611456719.didat");
	xsi_register_executes(pe);
}
