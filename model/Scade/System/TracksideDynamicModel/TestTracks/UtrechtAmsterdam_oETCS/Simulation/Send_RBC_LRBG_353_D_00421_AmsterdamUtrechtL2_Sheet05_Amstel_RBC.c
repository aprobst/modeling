/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

void Send_RBC_LRBG_353_D_00421_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  /* 1 */
  _7_Build_RBC_Message_LRBG_35_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008 */
void Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::RadiaDataIn */R_data_internal_T_InfraLib *RadiaDataIn,
  /* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008::TriggerValue */kcg_int TriggerValue,
  outC_Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  static R_data_internal_T_InfraLib tmp;
  
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L53, RadiaDataIn);
  outC->_L26 = TriggerValue;
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L23, RadiaDataIn);
  outC->_L27 = outC->_L23.trigger;
  outC->_L52 = outC->_L26 == outC->_L27;
  outC->tmp = outC->_L52;
  if (outC->tmp) {
    /* 1 */
    _7_Build_RBC_Message_LRBG_35_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
      &outC->_L53,
      &outC->Context_1);
    kcg_copy_R_data_internal_T_InfraLib(&tmp, &outC->Context_1.R_data_out);
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &outC->_L53);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_RBC_LRBG_353_D_00421_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

