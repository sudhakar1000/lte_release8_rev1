//#include "rrc\inc\rrc.h"
#include "rrc.h"
#include <stdio.h>
srb_0_type srb_0;
srb_0_type srb0_func()
{

srb_0.rrc_connection_request.establishment_cause = mt_Access;
srb_0.rrc_connection_request.initial_ue_identity.randomValue= 0xff;
/*if((srb_0.rrc_connection_request.establishment_cause == mt_Access)&&
         (srb_0.rrc_connection_request.initial_ue_identity.randomValue == RANDOM_VLAUE))
            {
                printf("\n argument passed\n");
            }
    else
        {
           printf("argument not passed");


        }*/
        return srb_0;
}
