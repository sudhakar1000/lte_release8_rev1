#include<stdio.h>
#include "rrc.h"
#include "rlc.h"

ccch_type srb0_without_security(srb_0_type rrc_pdu)
{
    ccch_type ccch;
    ccch.ul_ccch=rrc_pdu;
    return ccch;
}


