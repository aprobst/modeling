/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_OverrideRelated_TA_SpeedProfiles.h"

void SP_OverrideRelated_reset_TA_SpeedProfiles(
  outC_SP_OverrideRelated_TA_SpeedProfiles *outC)
{
}

/* TA_SpeedProfiles::SP_OverrideRelated */
void SP_OverrideRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_OverrideRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_SP_OverrideRelated_TA_SpeedProfiles *outC)
{
  ReceivedMessage_T_Common_Types_Pkg noname;
  
  kcg_copy_SSP_cat_t_TA_MRSP(
    &outC->_L2,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->OverrideRelated, &outC->_L2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_OverrideRelated_TA_SpeedProfiles.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
