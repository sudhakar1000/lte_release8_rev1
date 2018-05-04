#include <stdio.h>
#include "rrc.h"
#include "rlc.h"
#include "mac.h"
ul_sch_type ul_sch_func(ul_sch_type mac_pdu)
{
    printf("\n%d",mac_pdu.b);
    if((mac_pdu.ul_ccch_.ul_ccch.rrc_connection_request.establishment_cause == mt_Access))
            {
                printf("\n argument passed\n");
            }
    else
        {
           printf("argument not passed");


        }
}
