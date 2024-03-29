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
    work_m_07161508856145569501_0267079761_init();
    work_m_12601419969808368931_2291517319_init();
    work_m_01563029561312457038_2447143353_init();
    work_m_13794985067501772852_0295474749_init();
    work_m_09468151983046656444_2377480360_init();
    work_m_08105343475827907794_1611881108_init();
    work_m_01203072578628759005_1850146454_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_01203072578628759005_1850146454");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
