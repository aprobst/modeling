/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P042 */
void Send_P042_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P042::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P042::P042 */P042_trackside_int_T_TM *P042,
  /* MessageLibBaseline2::Send_P042::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  /* TM_trackside::Write_P042::_L21 */
  static kcg_int _L21_1;
  /* TM_trackside::Write_P042::_L22 */
  static kcg_int _L22_1;
  /* TM_trackside::Write_P042::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44_1;
  /* TM_trackside::Write_P042::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43_1;
  
  if ((*P042).valid) {
    /* 1_1 */ C_P042_tracksim_compr_TM_conversions(P042, &_L43_1, &_L44_1);
    /* 1_1 */
    SEND_WriteBaliseMessageHeader_TM_lib_internal(
      &(*B_data_in).PacketHeaders,
      &_L43_1,
      &(*B_data_out).PacketHeaders,
      &_L21_1,
      &_L22_1);
    /* 1_1 */
    SEND_MessageData_TM_lib_internal(
      _L21_1,
      _L22_1,
      &(*B_data_in).PacketData,
      &_L44_1,
      &(*B_data_out).PacketData);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P042_MessageLibBaseline2.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

