//#include "rrc\inc\rrc.h"
#include "../inc/rrc.h"
#include <stdint.h>
#include <iostream>
/*
  Structure to have commomon control channel IEs
  */
ul_ccch_message_type ul_ccch_message;

uint64_t mul(uint64_t n1, uint64_t n2)
{
  return n1*n2;
}

void rrc_int()
{
  rrc_connection_request_init();
}

void rrc_connection_request_init()
{
  ul_ccch_message.rrc_connection_request.establishment_cause = mt_Access;
  ul_ccch_message.rrc_connection_request.initial_ue_identity.randomValue = RANDOM_VLAUE;
  //srb0_without_secutity();
}
