/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_
#define _SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_

#include "kcg_types.h"
#include "Send_P255_MessageLibBaseline2.h"
#include "Send_P021_MessageLibBaseline2.h"
#include "Send_P027V1_MessageLibBaseline2.h"
#include "Send_P005_MessageLibBaseline2.h"
#include "Send_P015_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::Radio_packets_out */ Radio_packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_P255_MessageLibBaseline2 /* 1 */ _4_Context_1;
  outC_Send_P005_MessageLibBaseline2 /* 1 */ _3_Context_1;
  outC_Send_P027V1_MessageLibBaseline2 /* 1 */ _2_Context_1;
  outC_Send_P021_MessageLibBaseline2 /* 1 */ _1_Context_1;
  outC_Send_P015_MessageLibBaseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L3 */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L4 */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L8 */ _L8;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L11 */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::_L32 */ _L32;
} outC_SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003 */
extern void SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::SendRadioPackets_LRBG_400_D_00371_2_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC);

extern void SendRadioPackets_LRBG_400_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC);

#endif /* _SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_400_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

