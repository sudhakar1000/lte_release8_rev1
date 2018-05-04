#include"rrc.h"
#include"rlc.h"
#include "mac.h"
ul_sch_type ccch_func(ccch_type rlc_pdu)
{
ul_sch_type ul_sch;
ul_sch.ul_ccch_=rlc_pdu;
ul_sch.b=20;

return ul_sch;
}
