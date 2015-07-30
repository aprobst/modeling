/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _SP_MaxTrainSpeed_TA_SpeedProfiles_H_
#define _SP_MaxTrainSpeed_TA_SpeedProfiles_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_MaxTrainSpeed::MaxTrainSpeed */ MaxTrainSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SpeedProfiles::SP_MaxTrainSpeed::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_SpeedProfiles::SP_MaxTrainSpeed::_L2 */ _L2;
} outC_SP_MaxTrainSpeed_TA_SpeedProfiles;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SpeedProfiles::SP_MaxTrainSpeed */
extern void SP_MaxTrainSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::TrainDataIn */kcg_int TrainDataIn,
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC);

extern void SP_MaxTrainSpeed_reset_TA_SpeedProfiles(
  outC_SP_MaxTrainSpeed_TA_SpeedProfiles *outC);

#endif /* _SP_MaxTrainSpeed_TA_SpeedProfiles_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_MaxTrainSpeed_TA_SpeedProfiles.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
