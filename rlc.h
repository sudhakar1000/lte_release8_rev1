#ifndef RLC_H_INCLUDED
#define RLC_H_INCLUDED


union ccch_type{
srb_0_type ul_ccch;
uint16_t a;
/*dl_ccch*/
};
typedef union ccch_type ccch_type;

ccch_type srb0_without_security(srb_0_type rrc_pdu);





#endif // RLC_H_INCLUDED

