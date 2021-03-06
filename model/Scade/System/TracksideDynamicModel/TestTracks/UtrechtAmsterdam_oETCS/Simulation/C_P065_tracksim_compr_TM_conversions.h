/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _C_P065_tracksim_compr_TM_conversions_H_
#define _C_P065_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P065_tracksim_compr::Header */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P065_tracksim_compr::P065_compressed */ P065_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _2_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_14_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_13_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_11_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  P065_trackside_int_T_TM /* TM_conversions::C_P065_tracksim_compr::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P065_tracksim_compr::_L204 */ _L204;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L206 */ _L206;
  array_int_491 /* TM_conversions::C_P065_tracksim_compr::_L209 */ _L209;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L212 */ _L212;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L213 */ _L213;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L336 */ _L336;
  kcg_bool /* TM_conversions::C_P065_tracksim_compr::_L214 */ _L214;
  Q_DIR /* TM_conversions::C_P065_tracksim_compr::_L356 */ _L356;
  array_int_9 /* TM_conversions::C_P065_tracksim_compr::_L373 */ _L373;
  array_int_500 /* TM_conversions::C_P065_tracksim_compr::_L383 */ _L383;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L387 */ _L387;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L388 */ _L388;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L395 */ _L395;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L394 */ _L394;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L393 */ _L393;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L399 */ _L399;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L398 */ _L398;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L397 */ _L397;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L396 */ _L396;
  kcg_int /* TM_conversions::C_P065_tracksim_compr::_L400 */ _L400;
  nid_packet_meta_TM /* TM_conversions::C_P065_tracksim_compr::_L401 */ _L401;
} outC_C_P065_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P065_tracksim_compr */
extern void C_P065_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P065_tracksim_compr::P065_from_track */P065_trackside_int_T_TM *P065_from_track,
  outC_C_P065_tracksim_compr_TM_conversions *outC);

extern void C_P065_tracksim_compr_reset_TM_conversions(
  outC_C_P065_tracksim_compr_TM_conversions *outC);

#endif /* _C_P065_tracksim_compr_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P065_tracksim_compr_TM_conversions.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

