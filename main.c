#include <stdio.h>
#include "rrc.h"
#include "rlc.h"
#include "mac.h"
#include "phy.h"



int main()
{
  //uint64_t a;
  printf("starting project");

  //a = mul(2,6);
  //printf("a=%d",a);
  srb_0_type srb_0;
  srb_0=srb0_func();

/*if((srb_0.rrc_connection_request.establishment_cause == mt_Access)&&
         (srb_0.rrc_connection_request.initial_ue_identity.randomValue == RANDOM_VLAUE))
            {
                printf("argument passed");
            }
    else
        {
           printf("argument not passed");
           }*/

  ccch_type ccch;
  ccch=srb0_without_security(srb_0);
  ul_sch_type ul_sch;
  ul_sch=ccch_func(ccch);
  ul_sch_func(ul_sch);

}
