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
    work_m_00000000000356352794_1977320627_init();
    work_m_00000000001584040314_2208126754_init();
    work_m_00000000003209552623_3408695897_init();
    work_m_00000000000588872337_0644182429_init();
    work_m_00000000002698060526_1154953813_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002698060526_1154953813");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
