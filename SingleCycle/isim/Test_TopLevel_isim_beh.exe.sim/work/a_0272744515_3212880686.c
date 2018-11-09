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
static const char *ng0 = "/home/ise/Xilinx/DSD_Project/SingleCycle/ALU.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0272744515_3212880686_p_0(char *t0)
{
    char t11[16];
    char t12[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7403);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 7405);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 7407);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7192U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7208U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t11, t2, t1, t5, t3);
    t8 = (t11 + 12U);
    t28 = *((unsigned int *)t8);
    t29 = (1U * t28);
    t30 = (32U != t29);
    if (t30 == 1)
        goto LAB13;

LAB14:    t9 = (t0 + 4672);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t6, 32U);
    xsi_driver_first_trans_delta(t9, 1U, 32U, 0LL);

LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = (32 - 1);
    t28 = (32 - t4);
    t29 = (t28 * 1U);
    t31 = (0 + t29);
    t1 = (t2 + t31);
    t3 = (t0 + 4736);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 4560);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(62, ng0);
    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t13 = (t0 + 7192U);
    t15 = (32 + 1);
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t12, t14, t13, t15);
    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t18 = (t0 + 7208U);
    t20 = (32 + 1);
    t21 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t17, t19, t18, t20);
    t22 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t11, t16, t12, t21, t17);
    t23 = (t0 + 4672);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t22, 33U);
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7192U);
    t4 = (32 + 1);
    t3 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t12, t2, t1, t4);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 7208U);
    t7 = (32 + 1);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t17, t6, t5, t7);
    t9 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t11, t3, t12, t8, t17);
    t13 = (t0 + 4672);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 33U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7192U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 7208U);
    t6 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t11, t2, t1, t5, t3);
    t8 = (t11 + 12U);
    t28 = *((unsigned int *)t8);
    t29 = (1U * t28);
    t30 = (32U != t29);
    if (t30 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 4672);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t6, 32U);
    xsi_driver_first_trans_delta(t9, 1U, 32U, 0LL);
    goto LAB2;

LAB10:;
LAB11:    xsi_size_not_matching(32U, t29, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(32U, t29, 0);
    goto LAB14;

}

static void work_a_0272744515_3212880686_p_1(char *t0)
{
    char t59[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned char t50;
    unsigned char t51;
    unsigned char t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (t3 - 31);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t11 = (32 - 1);
    t12 = (t11 - 31);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t0 + 1352U);
    t19 = *((char **)t18);
    t20 = (0 - 1);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t25 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t17, t24);
    t26 = (t0 + 1032U);
    t27 = *((char **)t26);
    t28 = (32 - 1);
    t29 = (t28 - 31);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t26 = (t27 + t32);
    t33 = *((unsigned char *)t26);
    t34 = (t0 + 2472U);
    t35 = *((char **)t34);
    t36 = (32 - 1);
    t37 = (t36 - 32);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t34 = (t35 + t40);
    t41 = *((unsigned char *)t34);
    t42 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t33, t41);
    t43 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t25, t42);
    t44 = (t0 + 1352U);
    t45 = *((char **)t44);
    t46 = (1 - 1);
    t47 = (t46 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t44 = (t45 + t49);
    t50 = *((unsigned char *)t44);
    t51 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t50);
    t52 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t43, t51);
    t53 = (t52 == (unsigned char)3);
    if (t53 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4800);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t5 = (t3 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t16 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t8);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t4 = (32 - 32);
    t13 = (t4 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t17 = *((unsigned char *)t9);
    t24 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t16, t17);
    t25 = (t24 == (unsigned char)3);
    if (t25 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4864);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (t3 - 32);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t16 = (t8 == (unsigned char)3);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4928);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB9:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t5 = (32 - t3);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t9 = (t59 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t4 = (0 - 31);
    t13 = (t4 * -1);
    t13 = (t13 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t13;
    t8 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t1, t59, 0);
    if (t8 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB12:    t1 = (t0 + 4576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(72, ng0);
    t54 = (t0 + 4800);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    *((unsigned char *)t58) = (unsigned char)3;
    xsi_driver_first_trans_fast(t54);
    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t18 = (t0 + 4864);
    t19 = (t18 + 56U);
    t26 = *((char **)t19);
    t27 = (t26 + 56U);
    t34 = *((char **)t27);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB6;

LAB8:    xsi_set_current_line(80, ng0);
    t9 = (t0 + 4928);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = (t18 + 56U);
    t26 = *((char **)t19);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

LAB11:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 4992);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    goto LAB12;

}

static void work_a_0272744515_3212880686_p_2(char *t0)
{
    char t6[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t6, (char)99, t10, (char)101);
    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 4000);
    t13 = xsi_base_array_concat(t13, t16, t17, (char)97, t8, t11, (char)99, t15, (char)101);
    t18 = (1U + 1U);
    t19 = (t18 + 1U);
    t20 = (t19 + 1U);
    t21 = (4U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 5056);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 4U);
    xsi_driver_first_trans_fast_port(t22);

LAB2:    t27 = (t0 + 4592);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t20, 0);
    goto LAB6;

}


extern void work_a_0272744515_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0272744515_3212880686_p_0,(void *)work_a_0272744515_3212880686_p_1,(void *)work_a_0272744515_3212880686_p_2};
	xsi_register_didat("work_a_0272744515_3212880686", "isim/Test_TopLevel_isim_beh.exe.sim/work/a_0272744515_3212880686.didat");
	xsi_register_executes(pe);
}
