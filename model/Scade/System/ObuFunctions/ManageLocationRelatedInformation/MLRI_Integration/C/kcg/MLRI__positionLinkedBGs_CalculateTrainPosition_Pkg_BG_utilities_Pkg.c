/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Converts the linking information, received while passing a BG into an announced (= linked positioned) BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
void MLRI__positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */MLRI__LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedPositionedBGs */MLRI__linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedPositionedBGs)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L6,
    (MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *)
      &MLRI__cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  for (i = 0; i < 4; i++) {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&tmp, &_L6);
    /* 1 */
    MLRI__positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      passedPositionedBG,
      &(*linkedBGs)[i],
      trainProperties,
      &_L6,
      &(*linkedPositionedBGs)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

