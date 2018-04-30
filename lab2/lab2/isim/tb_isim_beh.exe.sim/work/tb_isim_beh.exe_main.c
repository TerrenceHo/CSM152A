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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_11259085101837532247_1746683258_init();
    work_m_02143266188906342726_0890363242_init();
    work_m_04906885622062149499_3635933665_init();
    work_m_04906885622062149499_2508368337_init();
    work_m_10963332466131643915_1893459751_init();
    work_m_02460134165957320273_1724093919_init();
    work_m_09462766184867321474_3962613427_init();
    work_m_15558157441485110501_3505899711_init();
    work_m_04988434658038451520_3959351695_init();
    work_m_11016292672869923524_3235807583_init();
    work_m_08925958984482195137_3671711236_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_08925958984482195137_3671711236");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
