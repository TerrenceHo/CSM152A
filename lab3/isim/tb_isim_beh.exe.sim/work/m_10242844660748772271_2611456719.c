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
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {7U, 0U};
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
    char t59[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    int t66;

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
    t2 = ((char*)((ng3)));
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
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    memset(t28, 0, 8);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t32);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t41) == 0)
        goto LAB13;

LAB15:    t47 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t47) = 1;

LAB16:    t48 = (t28 + 4);
    t49 = (t32 + 4);
    t50 = *((unsigned int *)t32);
    t51 = (~(t50));
    *((unsigned int *)t28) = t51;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t49) != 0)
        goto LAB18;

LAB17:    t56 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t56 & 1U);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & 1U);
    t58 = (t0 + 4488);
    t60 = (t0 + 4488);
    t61 = (t60 + 72U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t59, t62, 2, t63, 32, 1);
    t64 = (t59 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (!(t65));
    if (t66 == 1)
        goto LAB19;

LAB20:    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB18:    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t28) = (t52 | t53);
    t54 = *((unsigned int *)t48);
    t55 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t54 | t55);
    goto LAB17;

LAB19:    xsi_vlogvar_assign_value(t58, t28, 0, *((unsigned int *)t59), 1);
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

LAB6:    t7 = ((char*)((ng3)));
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

LAB20:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(76, ng0);

LAB16:    xsi_set_current_line(77, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(82, ng0);

LAB17:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(88, ng0);

LAB18:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(94, ng0);

LAB19:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB21:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng10)));
    t9 = (t0 + 4328);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB43;

LAB23:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB25:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB27:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB29:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB31:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB33:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB35:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB37:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

LAB39:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 4328);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB43;

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
	xsi_register_didat("work_m_10242844660748772271_2611456719", "isim/tb_isim_beh.exe.sim/work/m_10242844660748772271_2611456719.didat");
	xsi_register_executes(pe);
}
