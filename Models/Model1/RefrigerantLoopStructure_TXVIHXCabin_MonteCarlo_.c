/************** -*-C-*- *********************************************
 * $Id$
 *                                                                  *
 *       AMESim C code for cosimulation written by code generator.  *

                                 RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_
 *
 *******************************************************************/

#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.h"
#include "ame_interfaces.h"

#include <assert.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

#include <fcntl.h>


#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <setjmp.h>

#ifdef _WIN32
#ifndef WIN32
#define WIN32
#endif
#endif

#include "ameutils.h"
#include "codegen_ameutils_public.h"
#include "itf_amesubintf_public.h"
#include "codegen_amestate_public.h"

#if defined (WIN32) || defined(XPCMSVISUALC)
#include <io.h>
#else
#include <unistd.h>
#endif

#if defined(_WINDOWS) || defined(_WIN32) || defined(WIN32)
#define DLLEXPORTDEF __declspec(dllexport)
#else
#define DLLEXPORTDEF
#endif

#if defined (RTLAB) || defined(LABCAR) || defined(AME_ADX) || defined(AME_HWA) || defined(RT) ||defined(AMEVERISTAND)
#ifdef DLLEXPORTDEF
#undef DLLEXPORTDEF
#endif
#define DLLEXPORTDEF
#endif

/* If we are in Simulink we should set things up for a AMEMULTIDLL (only static symbols) */
#if defined(AME_CS_SIMULINK) || defined(AME_ME_SIMULINK)
#ifndef AMEMULTIDLL
#define AMEMULTIDLL
#endif
#endif

/* If we are in Veristand we should set things up for a AMEMULTIDLL (only static symbols) */
#ifdef AMEVERISTAND
#ifndef AMEMULTIDLL
#define AMEMULTIDLL
#endif
#endif

/* avoid globally exported functions - required for exporting several models in one executable */
#if defined AMEMULTIDLL
#define DLLEXPORTDEF_OR_STATIC static
#else
#define DLLEXPORTDEF_OR_STATIC DLLEXPORTDEF
#endif

#if defined CREATING_STATIC_LIB
#define DLLEXPORTDEF_OR_EXTERN extern
#else
#define DLLEXPORTDEF_OR_EXTERN DLLEXPORTDEF
#endif

#define TIME_ROUNDOFF 1.0e-10
#define TLAST_MIN     -1E30

#if defined(FMICS1) || defined(FMICS2) || defined(FMICS3) || defined(FMIME1) || defined(FMIME2)
#ifdef FMIX
#undef FMIX
#endif
#define FMI
#define MODEL_IDENTIFIER         RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_
#define MODEL_IDENTIFIER_STRING "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_"
#endif

/* *****************************************************************

   code inserted by AMESim

   *****************************************************************/

#define AMEVERSION                  202520000
#define SUB_LENGTH                  63

static const char soldToId[] = "For Internal Siemens Use Only";

/**** Model structure definition ****/
/* Structural definition of the model */
#define AME_MODEL_ISEXPLICIT        1

/* Number of explicit declared states  */
#define AME_NBOF_EXPLICIT_STATE     90

/* Number of implicit declared states  */
#define AME_NBOF_IMPLICIT_STATE_DECLARED  0
#define AME_NBOF_IMPLICIT_STATE_GENERATED 0
#define AME_NBOF_IMPLICIT_STATE           0

/* Number of discrete declared states  */
#define AME_NBOF_DISCRETE_STATE     17

/* Total number of states manipulated by the Amesim solver including generated states */
#define AME_NBOF_SOLVER_STATES      90

#define AME_NBOF_PARAMS             875
#define AME_NBOF_REAL_PARAMS        378
#define AME_NBOF_INT_PARAMS         262
#define AME_NBOF_TEXT_PARAMS        98
#define AME_NBOF_CSTATE_PARAMS      90
#define AME_NBOF_DSTATE_PARAMS      17
#define AME_NBOF_FIXED_VAR_PARAMS   30

#define AME_NBOF_VARS               1129
#define AME_NBOF_INPUTS             0
#define AME_NBOF_OUTPUTS            0

#define AME_NBOF_REAL_STORES        30
#define AME_NBOF_INT_STORES         10
#define AME_NBOF_POINTER_STORES     82

#define AME_SIZEOF_DBWORK_ARRAY     0

#define AME_NB_VAR_INFO             900

#define AME_NB_NETWORK              0

#define AME_NB_SUBMODEL_REF         98

#define AME_FUNC_LOOP               0

#define AME_HAS_ENABLED_SUBMODEL    0

static const S_AMEModelDef GmodelDef = {
   AME_MODEL_ISEXPLICIT,
   AME_NBOF_EXPLICIT_STATE,
   AME_NBOF_IMPLICIT_STATE_DECLARED,
   AME_NBOF_IMPLICIT_STATE_GENERATED,
   AME_NBOF_DISCRETE_STATE,
   AME_NBOF_VARS,
   AME_NBOF_PARAMS,
   AME_NBOF_REAL_PARAMS,
   AME_NBOF_INT_PARAMS,
   AME_NBOF_TEXT_PARAMS,
   AME_NBOF_CSTATE_PARAMS,
   AME_NBOF_DSTATE_PARAMS,
   AME_NBOF_FIXED_VAR_PARAMS,
   AME_NBOF_INPUTS,
   AME_NBOF_OUTPUTS,
   AME_NBOF_REAL_STORES,
   AME_NBOF_INT_STORES,
   AME_NBOF_POINTER_STORES,
   AME_SIZEOF_DBWORK_ARRAY,
   AME_NB_VAR_INFO,
   AME_NB_NETWORK,
   AME_NB_SUBMODEL_REF
};


static const char **GinputVarTitles = NULL;
static const char **GoutputVarTitles = NULL;

/**** Parameters structure definition ****/

#define NB_SUBMODELNAME       77
static const char* GsubmodelNameArray[NB_SUBMODELNAME] = {
     "CONS00 instance 1"
   , "CONS00 instance 2"
   , "THMAGS00 instance 1"
   , "THMAGS00 instance 2"
   , "THMAGS00 instance 3"
   , "THHF0 instance 1"
   , "THHF0 instance 2"
   , "THHF0 instance 3"
   , "THHF0 instance 4"
   , "THMAFS00 instance 1"
   , "TPFP002 instance 1"
   , "TPFPIN00 instance 1"
   , "CONS00 instance 3"
   , "CONS00 instance 4"
   , "CONS00 instance 5"
   , "ACMAS0000 instance 1"
   , "TPFP000 instance 1"
   , "CONS00 instance 6"
   , "CONS00 instance 7"
   , "CONS00 instance 8"
   , "CONS00 instance 9"
   , "TPFP001 instance 1"
   , "TPFGS010 instance 1"
   , "TPFGS010 instance 2"
   , "TPF_FP01 instance 1"
   , "TPFGS010 instance 3"
   , "TPFGS010 instance 4"
   , "TPFP002 instance 2"
   , "TPFSCH00 instance 1"
   , "THHS0 instance 1"
   , "TPFRFL000 instance 1"
   , "ACTEVSB02 instance 1"
   , "GA00 instance 1"
   , "GA00 instance 2"
   , "THMAGS00 instance 4"
   , "GA00 instance 3"
   , "SAT0 instance 1"
   , "THSD00 instance 1"
   , "THSD00 instance 2"
   , "THHF0 instance 5"
   , "THHF0 instance 6"
   , "THHF0 instance 7"
   , "TPFPHE0001 instance 1"
   , "TPFPHE0001 instance 2"
   , "THHF0 instance 8"
   , "TPFGS010 instance 5"
   , "TPFCVINT01 instance 1"
   , "TPFCVINT01 instance 2"
   , "THHF0 instance 9"
   , "THHF0 instance 10"
   , "THHF0 instance 11"
   , "THHF0 instance 12"
   , "THGCV00 instance 1"
   , "THGCV00 instance 2"
   , "THMAGS00 instance 5"
   , "THMAGS00 instance 6"
   , "THMAGS00 instance 7"
   , "THMAGS00 instance 8"
   , "THMAGS00 instance 9"
   , "ACMCTF0 instance 1"
   , "ACMCTFINT2 instance 1"
   , "ACMCTFTOP2 instance 1"
   , "ACMCTFREF1 instance 1"
   , "ACMCTFINT1 instance 1"
   , "ACUCPF0 instance 1"
   , "ACUCPFEND1 instance 1"
   , "ACUCPFREF1 instance 1"
   , "THC000 instance 1"
   , "THC000 instance 2"
   , "THC000 instance 3"
   , "THC000 instance 4"
   , "TPFGS010 instance 6"
   , "ACUCPFINT1 instance 1"
   , "TPFPUCOMPVD0000 instance 1"
   , "ACMAS0000 instance 2"
   , "CONS00 instance 10"
   , "SAT0 instance 2"
};

static const S_AMEParamInfo GParamInfo[875] = {
     {E_Real_Param           , E_Expression_Param, 0, -1, 0, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 0, 1, 0, 0}
   , {E_Real_Param           , E_Expression_Param, 1, -1, 1, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 1, 3, 1, 0}
   , {E_Real_Param           , E_Expression_Param, 2, -1, 2, 0}
   , {E_Real_Param           , E_Expression_Param, 3, -1, 2, 0}
   , {E_Int_Param            , E_Expression_Param, 0, -1, 2, 0}
   , {E_Real_Param           , E_Expression_Param, 4, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 5, -1, 3, 0}
   , {E_Int_Param            , E_Expression_Param, 1, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 6, -1, 4, 0}
   , {E_Real_Param           , E_Expression_Param, 7, -1, 4, 0}
   , {E_Int_Param            , E_Expression_Param, 2, -1, 4, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 0, 42, 5, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 1, 27, 6, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 2, 8, 7, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 3, 54, 8, 0}
   , {E_Real_Param           , E_Expression_Param, 8, -1, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 9, -1, 9, 0}
   , {E_Int_Param            , E_Expression_Param, 3, -1, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 10, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 11, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 12, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 13, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 14, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 15, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 16, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 17, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 18, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 19, -1, 10, 0}
   , {E_Int_Param            , E_Expression_Param, 4, -1, 10, 0}
   , {E_Int_Param            , E_Expression_Param, 5, -1, 10, 0}
   , {E_Int_Param            , E_Expression_Param, 6, -1, 10, 0}
   , {E_Int_Param            , E_Expression_Param, 7, -1, 10, 0}
   , {E_Int_Param            , E_Expression_Param, 8, -1, 10, 0}
   , {E_Text_Param           , E_Expression_Param, 0, -1, 10, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 0, 62, 10, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 1, 63, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 20, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 21, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 22, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 23, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 24, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 25, -1, 11, 0}
   , {E_Int_Param            , E_Expression_Param, 9, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 26, -1, 12, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 2, 103, 12, 0}
   , {E_Real_Param           , E_Expression_Param, 27, -1, 13, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 3, 105, 13, 0}
   , {E_Real_Param           , E_Expression_Param, 28, -1, 14, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 4, 107, 14, 0}
   , {E_Real_Param           , E_Expression_Param, 29, -1, 15, 0}
   , {E_Int_Param            , E_Expression_Param, 10, -1, 15, 0}
   , {E_Real_Param           , E_Expression_Param, 30, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 31, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 32, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 33, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 34, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 35, -1, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 36, -1, 16, 0}
   , {E_Int_Param            , E_Expression_Param, 11, -1, 16, 0}
   , {E_Int_Param            , E_Expression_Param, 12, -1, 16, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 2, 117, 16, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 3, 118, 16, 0}
   , {E_Real_Param           , E_Expression_Param, 37, -1, 17, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 5, 128, 17, 0}
   , {E_Real_Param           , E_Expression_Param, 38, -1, 18, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 6, 130, 18, 0}
   , {E_Real_Param           , E_Expression_Param, 39, -1, 19, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 7, 132, 19, 0}
   , {E_Real_Param           , E_Expression_Param, 40, -1, 20, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 8, 134, 20, 0}
   , {E_Real_Param           , E_Expression_Param, 41, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 42, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 43, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 44, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 45, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 46, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 47, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 48, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 49, -1, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 50, -1, 21, 0}
   , {E_Int_Param            , E_Expression_Param, 13, -1, 21, 0}
   , {E_Int_Param            , E_Expression_Param, 14, -1, 21, 0}
   , {E_Int_Param            , E_Expression_Param, 15, -1, 21, 0}
   , {E_Int_Param            , E_Expression_Param, 16, -1, 21, 0}
   , {E_Int_Param            , E_Expression_Param, 17, -1, 21, 0}
   , {E_Text_Param           , E_Expression_Param, 1, -1, 21, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 4, 144, 21, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 5, 145, 21, 0}
   , {E_Real_Param           , E_Expression_Param, 51, -1, 22, 0}
   , {E_Real_Param           , E_Expression_Param, 52, -1, 22, 0}
   , {E_Int_Param            , E_Expression_Param, 18, -1, 22, 0}
   , {E_Int_Param            , E_Expression_Param, 19, -1, 22, 0}
   , {E_Real_Param           , E_Expression_Param, 53, -1, 23, 0}
   , {E_Real_Param           , E_Expression_Param, 54, -1, 23, 0}
   , {E_Int_Param            , E_Expression_Param, 20, -1, 23, 0}
   , {E_Int_Param            , E_Expression_Param, 21, -1, 23, 0}
   , {E_Real_Param           , E_Expression_Param, 55, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 56, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 57, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 58, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 59, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 60, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 61, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 62, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 63, -1, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 64, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 22, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 23, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 24, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 25, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 26, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 27, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 28, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 29, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 30, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 31, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 32, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 33, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 34, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 35, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 36, -1, 24, 0}
   , {E_Int_Param            , E_Expression_Param, 37, -1, 24, 0}
   , {E_Text_Param           , E_Expression_Param, 2, -1, 24, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 4, 254, 24, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 5, 255, 24, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 6, 256, 24, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 7, 257, 24, 0}
   , {E_Real_Param           , E_Expression_Param, 65, -1, 25, 0}
   , {E_Real_Param           , E_Expression_Param, 66, -1, 25, 0}
   , {E_Int_Param            , E_Expression_Param, 38, -1, 25, 0}
   , {E_Int_Param            , E_Expression_Param, 39, -1, 25, 0}
   , {E_Real_Param           , E_Expression_Param, 67, -1, 26, 0}
   , {E_Real_Param           , E_Expression_Param, 68, -1, 26, 0}
   , {E_Int_Param            , E_Expression_Param, 40, -1, 26, 0}
   , {E_Int_Param            , E_Expression_Param, 41, -1, 26, 0}
   , {E_Real_Param           , E_Expression_Param, 69, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 70, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 71, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 72, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 73, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 74, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 75, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 76, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 77, -1, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 78, -1, 27, 0}
   , {E_Int_Param            , E_Expression_Param, 42, -1, 27, 0}
   , {E_Int_Param            , E_Expression_Param, 43, -1, 27, 0}
   , {E_Int_Param            , E_Expression_Param, 44, -1, 27, 0}
   , {E_Int_Param            , E_Expression_Param, 45, -1, 27, 0}
   , {E_Int_Param            , E_Expression_Param, 46, -1, 27, 0}
   , {E_Text_Param           , E_Expression_Param, 3, -1, 27, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 12, 332, 27, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 13, 333, 27, 0}
   , {E_Real_Param           , E_Expression_Param, 79, -1, 28, 0}
   , {E_Real_Param           , E_Expression_Param, 80, -1, 28, 0}
   , {E_Real_Param           , E_Expression_Param, 81, -1, 28, 0}
   , {E_Real_Param           , E_Expression_Param, 82, -1, 28, 0}
   , {E_Real_Param           , E_Expression_Param, 83, -1, 28, 0}
   , {E_Real_Param           , E_Expression_Param, 84, -1, 28, 0}
   , {E_Int_Param            , E_Expression_Param, 47, -1, 28, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 16, 353, 28, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 17, 363, 28, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 8, 356, 29, 0}
   , {E_Real_Param           , E_Expression_Param, 85, -1, 30, 0}
   , {E_Real_Param           , E_Expression_Param, 86, -1, 30, 0}
   , {E_Real_Param           , E_Expression_Param, 87, -1, 30, 0}
   , {E_Real_Param           , E_Expression_Param, 88, -1, 30, 0}
   , {E_Real_Param           , E_Expression_Param, 89, -1, 30, 0}
   , {E_Int_Param            , E_Expression_Param, 48, -1, 30, 0}
   , {E_Int_Param            , E_Expression_Param, 49, -1, 30, 0}
   , {E_Int_Param            , E_Expression_Param, 50, -1, 30, 0}
   , {E_Int_Param            , E_Expression_Param, 51, -1, 30, 0}
   , {E_Text_Param           , E_Expression_Param, 4, -1, 30, 0}
   , {E_Real_Param           , E_Expression_Param, 90, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 91, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 92, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 93, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 94, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 95, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 96, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 97, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 98, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 99, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 100, -1, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 101, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 52, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 53, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 54, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 55, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 56, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 57, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 58, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 59, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 60, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 61, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 62, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 63, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 64, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 65, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 66, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 67, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 68, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 69, -1, 31, 0}
   , {E_Int_Param            , E_Expression_Param, 70, -1, 31, 0}
   , {E_Text_Param           , E_Expression_Param, 5, -1, 31, 0}
   , {E_Text_Param           , E_Expression_Param, 6, -1, 31, 0}
   , {E_Text_Param           , E_Expression_Param, 7, -1, 31, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 22, 403, 31, 0}
   , {E_Real_Param           , E_Expression_Param, 102, -1, 32, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 9, 404, 32, 0}
   , {E_Real_Param           , E_Expression_Param, 103, -1, 33, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 10, 407, 33, 0}
   , {E_Real_Param           , E_Expression_Param, 104, -1, 34, 0}
   , {E_Real_Param           , E_Expression_Param, 105, -1, 34, 0}
   , {E_Int_Param            , E_Expression_Param, 71, -1, 34, 0}
   , {E_Real_Param           , E_Expression_Param, 106, -1, 35, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 11, 423, 35, 0}
   , {E_Real_Param           , E_Expression_Param, 107, -1, 36, 1}
   , {E_Real_Param           , E_Expression_Param, 108, -1, 36, 1}
   , {E_Real_Param           , E_Expression_Param, 109, -1, 36, 0}
   , {E_Int_Param            , E_Expression_Param, 72, -1, 36, 0}
   , {E_Int_Param            , E_Expression_Param, 73, -1, 36, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 12, 424, 36, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 13, 425, 36, 0}
   , {E_Real_Param           , E_Expression_Param, 110, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 111, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 112, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 113, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 114, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 115, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 116, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 117, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 118, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 119, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 120, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 74, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 75, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 76, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 77, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 78, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 79, -1, 37, 0}
   , {E_Int_Param            , E_Expression_Param, 80, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 8, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 9, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 10, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 11, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 12, -1, 37, 0}
   , {E_Text_Param           , E_Expression_Param, 13, -1, 37, 0}
   , {E_Real_Param           , E_Expression_Param, 121, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 122, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 123, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 124, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 125, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 126, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 127, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 128, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 129, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 130, -1, 38, 0}
   , {E_Real_Param           , E_Expression_Param, 131, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 81, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 82, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 83, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 84, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 85, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 86, -1, 38, 0}
   , {E_Int_Param            , E_Expression_Param, 87, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 14, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 15, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 16, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 17, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 18, -1, 38, 0}
   , {E_Text_Param           , E_Expression_Param, 19, -1, 38, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 9, 431, 39, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 10, 433, 40, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 11, 435, 41, 0}
   , {E_Real_Param           , E_Expression_Param, 132, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 133, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 134, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 135, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 136, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 137, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 138, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 139, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 140, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 141, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 142, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 143, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 144, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 145, -1, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 146, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 88, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 89, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 90, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 91, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 92, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 93, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 94, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 95, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 96, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 97, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 98, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 99, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 100, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 101, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 102, -1, 42, 0}
   , {E_Int_Param            , E_Expression_Param, 103, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 20, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 21, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 22, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 23, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 24, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 25, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 26, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 27, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 28, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 29, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 30, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 31, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 32, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 33, -1, 42, 0}
   , {E_Text_Param           , E_Expression_Param, 34, -1, 42, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 23, 438, 42, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 24, 439, 42, 0}
   , {E_Real_Param           , E_Expression_Param, 147, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 148, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 149, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 150, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 151, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 152, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 153, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 154, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 155, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 156, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 157, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 158, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 159, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 160, -1, 43, 0}
   , {E_Real_Param           , E_Expression_Param, 161, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 104, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 105, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 106, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 107, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 108, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 109, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 110, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 111, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 112, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 113, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 114, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 115, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 116, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 117, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 118, -1, 43, 0}
   , {E_Int_Param            , E_Expression_Param, 119, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 35, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 36, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 37, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 38, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 39, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 40, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 41, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 42, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 43, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 44, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 45, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 46, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 47, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 48, -1, 43, 0}
   , {E_Text_Param           , E_Expression_Param, 49, -1, 43, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 20, 385, 43, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 21, 386, 43, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 12, 472, 44, 0}
   , {E_Real_Param           , E_Expression_Param, 162, -1, 45, 0}
   , {E_Real_Param           , E_Expression_Param, 163, -1, 45, 0}
   , {E_Int_Param            , E_Expression_Param, 120, -1, 45, 0}
   , {E_Int_Param            , E_Expression_Param, 121, -1, 45, 0}
   , {E_Real_Param           , E_Expression_Param, 164, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 165, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 166, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 167, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 168, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 169, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 170, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 171, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 172, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 173, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 174, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 175, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 176, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 177, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 178, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 179, -1, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 180, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 122, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 123, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 124, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 125, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 126, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 127, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 128, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 129, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 130, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 131, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 132, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 133, -1, 46, 0}
   , {E_Int_Param            , E_Expression_Param, 134, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 50, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 51, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 52, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 53, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 54, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 55, -1, 46, 0}
   , {E_Text_Param           , E_Expression_Param, 56, -1, 46, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 29, 507, 46, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 30, 508, 46, 0}
   , {E_Real_Param           , E_Expression_Param, 181, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 182, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 183, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 184, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 185, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 186, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 187, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 188, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 189, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 190, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 191, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 192, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 193, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 194, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 195, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 196, -1, 47, 0}
   , {E_Real_Param           , E_Expression_Param, 197, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 135, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 136, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 137, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 138, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 139, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 140, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 141, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 142, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 143, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 144, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 145, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 146, -1, 47, 0}
   , {E_Int_Param            , E_Expression_Param, 147, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 57, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 58, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 59, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 60, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 61, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 62, -1, 47, 0}
   , {E_Text_Param           , E_Expression_Param, 63, -1, 47, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 27, 474, 47, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 28, 475, 47, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 13, 541, 48, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 14, 543, 49, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 15, 545, 50, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 16, 547, 51, 0}
   , {E_Real_Param           , E_Expression_Param, 198, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 199, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 200, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 201, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 202, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 203, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 204, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 205, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 206, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 207, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 208, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 209, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 210, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 211, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 212, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 213, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 214, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 215, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 216, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 217, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 218, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 219, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 220, -1, 52, 0}
   , {E_Int_Param            , E_Expression_Param, 148, -1, 52, 0}
   , {E_Int_Param            , E_Expression_Param, 149, -1, 52, 0}
   , {E_Int_Param            , E_Expression_Param, 150, -1, 52, 0}
   , {E_Int_Param            , E_Expression_Param, 151, -1, 52, 0}
   , {E_Text_Param           , E_Expression_Param, 64, -1, 52, 0}
   , {E_Text_Param           , E_Expression_Param, 65, -1, 52, 0}
   , {E_Text_Param           , E_Expression_Param, 66, -1, 52, 0}
   , {E_Text_Param           , E_Expression_Param, 67, -1, 52, 0}
   , {E_Real_Param           , E_Expression_Param, 221, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 222, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 223, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 224, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 225, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 226, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 227, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 228, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 229, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 230, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 231, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 232, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 233, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 234, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 235, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 236, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 237, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 238, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 239, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 240, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 241, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 242, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 243, -1, 53, 0}
   , {E_Int_Param            , E_Expression_Param, 152, -1, 53, 0}
   , {E_Int_Param            , E_Expression_Param, 153, -1, 53, 0}
   , {E_Int_Param            , E_Expression_Param, 154, -1, 53, 0}
   , {E_Int_Param            , E_Expression_Param, 155, -1, 53, 0}
   , {E_Text_Param           , E_Expression_Param, 68, -1, 53, 0}
   , {E_Text_Param           , E_Expression_Param, 69, -1, 53, 0}
   , {E_Text_Param           , E_Expression_Param, 70, -1, 53, 0}
   , {E_Text_Param           , E_Expression_Param, 71, -1, 53, 0}
   , {E_Real_Param           , E_Expression_Param, 244, -1, 54, 0}
   , {E_Real_Param           , E_Expression_Param, 245, -1, 54, 0}
   , {E_Int_Param            , E_Expression_Param, 156, -1, 54, 0}
   , {E_Real_Param           , E_Expression_Param, 246, -1, 55, 0}
   , {E_Real_Param           , E_Expression_Param, 247, -1, 55, 0}
   , {E_Int_Param            , E_Expression_Param, 157, -1, 55, 0}
   , {E_Real_Param           , E_Expression_Param, 248, -1, 56, 0}
   , {E_Real_Param           , E_Expression_Param, 249, -1, 56, 0}
   , {E_Int_Param            , E_Expression_Param, 158, -1, 56, 0}
   , {E_Real_Param           , E_Expression_Param, 250, -1, 57, 0}
   , {E_Real_Param           , E_Expression_Param, 251, -1, 57, 0}
   , {E_Int_Param            , E_Expression_Param, 159, -1, 57, 0}
   , {E_Real_Param           , E_Expression_Param, 252, -1, 58, 0}
   , {E_Real_Param           , E_Expression_Param, 253, -1, 58, 0}
   , {E_Int_Param            , E_Expression_Param, 160, -1, 58, 0}
   , {E_Real_Param           , E_Expression_Param, 254, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 255, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 256, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 257, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 258, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 259, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 260, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 261, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 262, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 263, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 264, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 265, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 266, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 267, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 268, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 161, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 162, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 163, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 164, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 165, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 166, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 167, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 168, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 169, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 170, -1, 59, 0}
   , {E_Int_Param            , E_Expression_Param, 171, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 72, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 73, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 74, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 75, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 76, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 77, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 78, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 79, -1, 59, 0}
   , {E_Text_Param           , E_Expression_Param, 80, -1, 59, 0}
   , {E_Real_Param           , E_Expression_Param, 269, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 270, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 271, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 272, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 273, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 274, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 275, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 276, -1, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 277, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 172, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 173, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 174, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 175, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 176, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 177, -1, 60, 0}
   , {E_Int_Param            , E_Expression_Param, 178, -1, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 33, 716, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 34, 717, 60, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 17, 718, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 37, 737, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 38, 738, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 39, 739, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 40, 740, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 41, 762, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 42, 763, 60, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 43, 764, 60, 0}
   , {E_Real_Param           , E_Expression_Param, 278, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 279, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 280, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 281, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 282, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 283, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 284, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 285, -1, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 286, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 179, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 180, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 181, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 182, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 183, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 184, -1, 61, 0}
   , {E_Int_Param            , E_Expression_Param, 185, -1, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 35, 725, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 36, 726, 61, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 18, 727, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 6, 191, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 7, 192, 61, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 19, 193, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 44, 777, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 45, 778, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 46, 779, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 47, 780, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 48, 808, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 49, 809, 61, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 50, 810, 61, 0}
   , {E_Real_Param           , E_Expression_Param, 287, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 288, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 289, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 290, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 291, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 292, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 293, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 294, -1, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 295, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 186, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 187, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 188, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 189, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 190, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 191, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 192, -1, 62, 0}
   , {E_Int_Param            , E_Expression_Param, 193, -1, 62, 0}
   , {E_Text_Param           , E_Expression_Param, 81, -1, 62, 0}
   , {E_Text_Param           , E_Expression_Param, 82, -1, 62, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 20, 827, 62, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 21, 828, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 8, 221, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 9, 222, 62, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 22, 223, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 51, 830, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 52, 831, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 53, 832, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 54, 833, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 55, 855, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 56, 856, 62, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 57, 857, 62, 0}
   , {E_Real_Param           , E_Expression_Param, 296, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 297, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 298, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 299, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 300, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 301, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 302, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 303, -1, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 304, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 194, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 195, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 196, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 197, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 198, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 199, -1, 63, 0}
   , {E_Int_Param            , E_Expression_Param, 200, -1, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 18, 368, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 19, 369, 63, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 23, 370, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 58, 871, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 59, 872, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 60, 873, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 61, 874, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 62, 896, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 63, 897, 63, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 64, 898, 63, 0}
   , {E_Real_Param           , E_Expression_Param, 305, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 306, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 307, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 308, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 309, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 310, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 311, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 312, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 313, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 314, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 315, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 316, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 317, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 318, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 319, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 201, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 202, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 203, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 204, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 205, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 206, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 207, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 208, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 209, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 210, -1, 64, 0}
   , {E_Int_Param            , E_Expression_Param, 211, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 83, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 84, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 85, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 86, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 87, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 88, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 89, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 90, -1, 64, 0}
   , {E_Text_Param           , E_Expression_Param, 91, -1, 64, 0}
   , {E_Real_Param           , E_Expression_Param, 320, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 321, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 322, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 323, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 324, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 325, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 326, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 327, -1, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 328, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 212, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 213, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 214, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 215, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 216, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 217, -1, 65, 0}
   , {E_Int_Param            , E_Expression_Param, 218, -1, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 65, 923, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 66, 924, 65, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 24, 925, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 10, 270, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 11, 271, 65, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 25, 272, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 67, 932, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 68, 933, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 69, 934, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 70, 935, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 71, 963, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 72, 964, 65, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 73, 965, 65, 0}
   , {E_Real_Param           , E_Expression_Param, 329, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 330, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 331, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 332, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 333, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 334, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 335, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 336, -1, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 337, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 219, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 220, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 221, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 222, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 223, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 224, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 225, -1, 66, 0}
   , {E_Int_Param            , E_Expression_Param, 226, -1, 66, 0}
   , {E_Text_Param           , E_Expression_Param, 92, -1, 66, 0}
   , {E_Text_Param           , E_Expression_Param, 93, -1, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 14, 335, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 15, 336, 66, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 26, 337, 66, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 27, 986, 66, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 28, 987, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 76, 994, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 77, 995, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 78, 996, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 79, 997, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 80, 1019, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 81, 1020, 66, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 82, 1021, 66, 0}
   , {E_Real_Param           , E_Expression_Param, 338, -1, 67, 0}
   , {E_Real_Param           , E_Expression_Param, 339, -1, 67, 0}
   , {E_Real_Param           , E_Expression_Param, 340, -1, 67, 0}
   , {E_Int_Param            , E_Expression_Param, 227, -1, 67, 0}
   , {E_Int_Param            , E_Expression_Param, 228, -1, 67, 0}
   , {E_Int_Param            , E_Expression_Param, 229, -1, 67, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 31, 510, 67, 0}
   , {E_Real_Param           , E_Expression_Param, 341, -1, 68, 0}
   , {E_Real_Param           , E_Expression_Param, 342, -1, 68, 0}
   , {E_Real_Param           , E_Expression_Param, 343, -1, 68, 0}
   , {E_Int_Param            , E_Expression_Param, 230, -1, 68, 0}
   , {E_Int_Param            , E_Expression_Param, 231, -1, 68, 0}
   , {E_Int_Param            , E_Expression_Param, 232, -1, 68, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 32, 526, 68, 0}
   , {E_Real_Param           , E_Expression_Param, 344, -1, 69, 0}
   , {E_Real_Param           , E_Expression_Param, 345, -1, 69, 0}
   , {E_Real_Param           , E_Expression_Param, 346, -1, 69, 0}
   , {E_Int_Param            , E_Expression_Param, 233, -1, 69, 0}
   , {E_Int_Param            , E_Expression_Param, 234, -1, 69, 0}
   , {E_Int_Param            , E_Expression_Param, 235, -1, 69, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 25, 441, 69, 0}
   , {E_Real_Param           , E_Expression_Param, 347, -1, 70, 0}
   , {E_Real_Param           , E_Expression_Param, 348, -1, 70, 0}
   , {E_Real_Param           , E_Expression_Param, 349, -1, 70, 0}
   , {E_Int_Param            , E_Expression_Param, 236, -1, 70, 0}
   , {E_Int_Param            , E_Expression_Param, 237, -1, 70, 0}
   , {E_Int_Param            , E_Expression_Param, 238, -1, 70, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 26, 456, 70, 0}
   , {E_Real_Param           , E_Expression_Param, 350, -1, 71, 0}
   , {E_Real_Param           , E_Expression_Param, 351, -1, 71, 0}
   , {E_Int_Param            , E_Expression_Param, 239, -1, 71, 0}
   , {E_Int_Param            , E_Expression_Param, 240, -1, 71, 0}
   , {E_Real_Param           , E_Expression_Param, 352, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 353, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 354, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 355, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 356, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 357, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 358, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 359, -1, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 360, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 241, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 242, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 243, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 244, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 245, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 246, -1, 72, 0}
   , {E_Int_Param            , E_Expression_Param, 247, -1, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 74, 988, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 75, 989, 72, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 29, 990, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 83, 1073, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 84, 1074, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 85, 1075, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 86, 1076, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 87, 1098, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 88, 1099, 72, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 89, 1100, 72, 0}
   , {E_Real_Param           , E_Expression_Param, 361, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 362, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 363, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 364, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 365, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 366, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 367, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 368, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 369, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 370, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 371, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 372, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 248, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 249, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 250, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 251, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 252, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 253, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 254, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 255, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 256, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 257, -1, 73, 0}
   , {E_Int_Param            , E_Expression_Param, 258, -1, 73, 0}
   , {E_Text_Param           , E_Expression_Param, 94, -1, 73, 0}
   , {E_Text_Param           , E_Expression_Param, 95, -1, 73, 0}
   , {E_Text_Param           , E_Expression_Param, 96, -1, 73, 0}
   , {E_Text_Param           , E_Expression_Param, 97, -1, 73, 0}
   , {E_Real_Param           , E_Expression_Param, 373, -1, 74, 0}
   , {E_Int_Param            , E_Expression_Param, 259, -1, 74, 0}
   , {E_Real_Param           , E_Expression_Param, 374, -1, 75, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 14, 1126, 75, 0}
   , {E_Real_Param           , E_Expression_Param, 375, -1, 76, 1}
   , {E_Real_Param           , E_Expression_Param, 376, -1, 76, 1}
   , {E_Real_Param           , E_Expression_Param, 377, -1, 76, 0}
   , {E_Int_Param            , E_Expression_Param, 260, -1, 76, 0}
   , {E_Int_Param            , E_Expression_Param, 261, -1, 76, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 15, 1127, 76, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 16, 1128, 76, 0}
};
#define NB_REAL_TUNABLE_PARAM 17
static const int GRealTunableParam[NB_REAL_TUNABLE_PARAM][2] = {
     {0, 1}
   , {1, 3}
   , {26, 103}
   , {27, 105}
   , {28, 107}
   , {37, 128}
   , {38, 130}
   , {39, 132}
   , {40, 134}
   , {102, 404}
   , {103, 407}
   , {106, 423}
   , {107, 424}
   , {108, 425}
   , {374, 1126}
   , {375, 1127}
   , {376, 1128}
};
#define NB_INT_TUNABLE_PARAM 0

static const int GcontStateVarNum[AME_NBOF_EXPLICIT_STATE] = {
     62, 63, 117, 118, 144, 145, 191, 192, 221, 222
   , 270, 271, 332, 333, 335, 336, 353, 363, 368, 369
   , 385, 386, 403, 438, 439, 441, 456, 474, 475, 507
   , 508, 510, 526, 716, 717, 725, 726, 737, 738, 739
   , 740, 762, 763, 764, 777, 778, 779, 780, 808, 809
   , 810, 830, 831, 832, 833, 855, 856, 857, 871, 872
   , 873, 874, 896, 897, 898, 923, 924, 932, 933, 934
   , 935, 963, 964, 965, 988, 989, 994, 995, 996, 997
   , 1019, 1020, 1021, 1073, 1074, 1075, 1076, 1098, 1099, 1100
};

static const int GdiscStateVarNum[AME_NBOF_DSTATE_PARAMS] = {
     1, 3, 103, 105, 107, 128, 130, 132, 134, 404
   , 407, 423, 424, 425, 1126, 1127, 1128
};

static const int *GInputVarNum = NULL;

static const double *GInputStartValues = NULL;

static const int *GOutputVarNum = NULL;

static const int GFixedVarNum[AME_NBOF_FIXED_VAR_PARAMS] = {
     42, 27, 8, 54, 254, 255, 256, 257, 356, 431
   , 433, 435, 472, 541, 543, 545, 547, 718, 727, 193
   , 827, 828, 223, 370, 925, 272, 337, 986, 987, 990
};

#define RP0 (&amesys->pModel->realParamArray[0])
#define RP1 (&amesys->pModel->realParamArray[1])
#define PS2 (&amesys->pModel->pointerStoreArray[0])
#define RP2 (&amesys->pModel->realParamArray[2])
#define IP2 (&amesys->pModel->integerParamArray[0])
#define PS3 (&amesys->pModel->pointerStoreArray[1])
#define RP3 (&amesys->pModel->realParamArray[4])
#define IP3 (&amesys->pModel->integerParamArray[1])
#define PS4 (&amesys->pModel->pointerStoreArray[2])
#define RP4 (&amesys->pModel->realParamArray[6])
#define IP4 (&amesys->pModel->integerParamArray[2])
#define IS10 (&amesys->pModel->intStoreArray[0])
#define RP10 (&amesys->pModel->realParamArray[8])
#define IP10 (&amesys->pModel->integerParamArray[3])
#define PS11 (&amesys->pModel->pointerStoreArray[3])
#define RP11 (&amesys->pModel->realParamArray[10])
#define IP11 (&amesys->pModel->integerParamArray[4])
#define TP11 (&amesys->pModel->textParamArray[0])
#define PS13 (&amesys->pModel->pointerStoreArray[4])
#define RP13 (&amesys->pModel->realParamArray[20])
#define IP13 (&amesys->pModel->integerParamArray[9])
#define RP14 (&amesys->pModel->realParamArray[26])
#define RP15 (&amesys->pModel->realParamArray[27])
#define RP16 (&amesys->pModel->realParamArray[28])
#define PS17 (&amesys->pModel->pointerStoreArray[6])
#define RP17 (&amesys->pModel->realParamArray[29])
#define IP17 (&amesys->pModel->integerParamArray[10])
#define PS18 (&amesys->pModel->pointerStoreArray[7])
#define RP18 (&amesys->pModel->realParamArray[30])
#define IP18 (&amesys->pModel->integerParamArray[11])
#define RP19 (&amesys->pModel->realParamArray[37])
#define RP20 (&amesys->pModel->realParamArray[38])
#define RP21 (&amesys->pModel->realParamArray[39])
#define RP22 (&amesys->pModel->realParamArray[40])
#define PS23 (&amesys->pModel->pointerStoreArray[9])
#define RP23 (&amesys->pModel->realParamArray[41])
#define IP23 (&amesys->pModel->integerParamArray[13])
#define TP23 (&amesys->pModel->textParamArray[1])
#define RS24 (&amesys->pModel->realStoreArray[0])
#define PS25 (&amesys->pModel->pointerStoreArray[10])
#define RP25 (&amesys->pModel->realParamArray[51])
#define IP25 (&amesys->pModel->integerParamArray[18])
#define PS26 (&amesys->pModel->pointerStoreArray[12])
#define RP26 (&amesys->pModel->realParamArray[53])
#define IP26 (&amesys->pModel->integerParamArray[20])
#define RS31 (&amesys->pModel->realStoreArray[27])
#define IS31 (&amesys->pModel->intStoreArray[1])
#define RP31 (&amesys->pModel->realParamArray[55])
#define IP31 (&amesys->pModel->integerParamArray[22])
#define TP31 (&amesys->pModel->textParamArray[2])
#define PS33 (&amesys->pModel->pointerStoreArray[14])
#define RP33 (&amesys->pModel->realParamArray[65])
#define IP33 (&amesys->pModel->integerParamArray[38])
#define PS35 (&amesys->pModel->pointerStoreArray[16])
#define RP35 (&amesys->pModel->realParamArray[67])
#define IP35 (&amesys->pModel->integerParamArray[40])
#define PS36 (&amesys->pModel->pointerStoreArray[18])
#define RP36 (&amesys->pModel->realParamArray[69])
#define IP36 (&amesys->pModel->integerParamArray[42])
#define TP36 (&amesys->pModel->textParamArray[3])
#define PS37 (&amesys->pModel->pointerStoreArray[19])
#define RP37 (&amesys->pModel->realParamArray[79])
#define IP37 (&amesys->pModel->integerParamArray[47])
#define PS39 (&amesys->pModel->pointerStoreArray[21])
#define RP39 (&amesys->pModel->realParamArray[85])
#define IP39 (&amesys->pModel->integerParamArray[48])
#define TP39 (&amesys->pModel->textParamArray[4])
#define PS40 (&amesys->pModel->pointerStoreArray[22])
#define RP40 (&amesys->pModel->realParamArray[90])
#define IP40 (&amesys->pModel->integerParamArray[52])
#define TP40 (&amesys->pModel->textParamArray[5])
#define RP41 (&amesys->pModel->realParamArray[102])
#define RP42 (&amesys->pModel->realParamArray[103])
#define PS43 (&amesys->pModel->pointerStoreArray[24])
#define RP43 (&amesys->pModel->realParamArray[104])
#define IP43 (&amesys->pModel->integerParamArray[71])
#define RP45 (&amesys->pModel->realParamArray[106])
#define IS46 (&amesys->pModel->intStoreArray[2])
#define RP46 (&amesys->pModel->realParamArray[107])
#define IP46 (&amesys->pModel->integerParamArray[72])
#define RS47 (&amesys->pModel->realStoreArray[28])
#define IS47 (&amesys->pModel->intStoreArray[3])
#define RP47 (&amesys->pModel->realParamArray[110])
#define IP47 (&amesys->pModel->integerParamArray[74])
#define TP47 (&amesys->pModel->textParamArray[8])
#define RS48 (&amesys->pModel->realStoreArray[29])
#define IS48 (&amesys->pModel->intStoreArray[4])
#define RP48 (&amesys->pModel->realParamArray[121])
#define IP48 (&amesys->pModel->integerParamArray[81])
#define TP48 (&amesys->pModel->textParamArray[14])
#define PS52 (&amesys->pModel->pointerStoreArray[25])
#define RP52 (&amesys->pModel->realParamArray[132])
#define IP52 (&amesys->pModel->integerParamArray[88])
#define TP52 (&amesys->pModel->textParamArray[20])
#define PS53 (&amesys->pModel->pointerStoreArray[26])
#define RP53 (&amesys->pModel->realParamArray[147])
#define IP53 (&amesys->pModel->integerParamArray[104])
#define TP53 (&amesys->pModel->textParamArray[35])
#define PS55 (&amesys->pModel->pointerStoreArray[27])
#define RP55 (&amesys->pModel->realParamArray[162])
#define IP55 (&amesys->pModel->integerParamArray[120])
#define PS57 (&amesys->pModel->pointerStoreArray[29])
#define RP57 (&amesys->pModel->realParamArray[164])
#define IP57 (&amesys->pModel->integerParamArray[122])
#define TP57 (&amesys->pModel->textParamArray[50])
#define PS58 (&amesys->pModel->pointerStoreArray[31])
#define RP58 (&amesys->pModel->realParamArray[181])
#define IP58 (&amesys->pModel->integerParamArray[135])
#define TP58 (&amesys->pModel->textParamArray[57])
#define PS63 (&amesys->pModel->pointerStoreArray[33])
#define RP63 (&amesys->pModel->realParamArray[198])
#define IP63 (&amesys->pModel->integerParamArray[148])
#define TP63 (&amesys->pModel->textParamArray[64])
#define PS64 (&amesys->pModel->pointerStoreArray[34])
#define RP64 (&amesys->pModel->realParamArray[221])
#define IP64 (&amesys->pModel->integerParamArray[152])
#define TP64 (&amesys->pModel->textParamArray[68])
#define PS66 (&amesys->pModel->pointerStoreArray[35])
#define PS67 (&amesys->pModel->pointerStoreArray[36])
#define RP67 (&amesys->pModel->realParamArray[244])
#define IP67 (&amesys->pModel->integerParamArray[156])
#define PS70 (&amesys->pModel->pointerStoreArray[37])
#define PS71 (&amesys->pModel->pointerStoreArray[38])
#define RP71 (&amesys->pModel->realParamArray[246])
#define IP71 (&amesys->pModel->integerParamArray[157])
#define PS74 (&amesys->pModel->pointerStoreArray[39])
#define PS75 (&amesys->pModel->pointerStoreArray[40])
#define RP75 (&amesys->pModel->realParamArray[248])
#define IP75 (&amesys->pModel->integerParamArray[158])
#define PS78 (&amesys->pModel->pointerStoreArray[41])
#define PS79 (&amesys->pModel->pointerStoreArray[42])
#define RP79 (&amesys->pModel->realParamArray[250])
#define IP79 (&amesys->pModel->integerParamArray[159])
#define PS82 (&amesys->pModel->pointerStoreArray[43])
#define PS83 (&amesys->pModel->pointerStoreArray[44])
#define RP83 (&amesys->pModel->realParamArray[252])
#define IP83 (&amesys->pModel->integerParamArray[160])
#define PS85 (&amesys->pModel->pointerStoreArray[45])
#define RP85 (&amesys->pModel->realParamArray[254])
#define IP85 (&amesys->pModel->integerParamArray[161])
#define TP85 (&amesys->pModel->textParamArray[72])
#define PS86 (&amesys->pModel->pointerStoreArray[46])
#define RP86 (&amesys->pModel->realParamArray[269])
#define IP86 (&amesys->pModel->integerParamArray[172])
#define PS87 (&amesys->pModel->pointerStoreArray[49])
#define RP87 (&amesys->pModel->realParamArray[278])
#define IP87 (&amesys->pModel->integerParamArray[179])
#define PS88 (&amesys->pModel->pointerStoreArray[52])
#define RP88 (&amesys->pModel->realParamArray[287])
#define IP88 (&amesys->pModel->integerParamArray[186])
#define TP88 (&amesys->pModel->textParamArray[81])
#define PS89 (&amesys->pModel->pointerStoreArray[55])
#define RP89 (&amesys->pModel->realParamArray[296])
#define IP89 (&amesys->pModel->integerParamArray[194])
#define PS90 (&amesys->pModel->pointerStoreArray[58])
#define RP90 (&amesys->pModel->realParamArray[305])
#define IP90 (&amesys->pModel->integerParamArray[201])
#define TP90 (&amesys->pModel->textParamArray[83])
#define PS91 (&amesys->pModel->pointerStoreArray[59])
#define RP91 (&amesys->pModel->realParamArray[320])
#define IP91 (&amesys->pModel->integerParamArray[212])
#define PS92 (&amesys->pModel->pointerStoreArray[62])
#define RP92 (&amesys->pModel->realParamArray[329])
#define IP92 (&amesys->pModel->integerParamArray[219])
#define TP92 (&amesys->pModel->textParamArray[92])
#define IS93 (&amesys->pModel->intStoreArray[5])
#define PS93 (&amesys->pModel->pointerStoreArray[65])
#define RP93 (&amesys->pModel->realParamArray[338])
#define IP93 (&amesys->pModel->integerParamArray[227])
#define IS94 (&amesys->pModel->intStoreArray[6])
#define PS94 (&amesys->pModel->pointerStoreArray[67])
#define RP94 (&amesys->pModel->realParamArray[341])
#define IP94 (&amesys->pModel->integerParamArray[230])
#define IS95 (&amesys->pModel->intStoreArray[7])
#define PS95 (&amesys->pModel->pointerStoreArray[69])
#define RP95 (&amesys->pModel->realParamArray[344])
#define IP95 (&amesys->pModel->integerParamArray[233])
#define IS96 (&amesys->pModel->intStoreArray[8])
#define PS96 (&amesys->pModel->pointerStoreArray[71])
#define RP96 (&amesys->pModel->realParamArray[347])
#define IP96 (&amesys->pModel->integerParamArray[236])
#define PS97 (&amesys->pModel->pointerStoreArray[73])
#define RP97 (&amesys->pModel->realParamArray[350])
#define IP97 (&amesys->pModel->integerParamArray[239])
#define PS98 (&amesys->pModel->pointerStoreArray[75])
#define RP98 (&amesys->pModel->realParamArray[352])
#define IP98 (&amesys->pModel->integerParamArray[241])
#define PS99 (&amesys->pModel->pointerStoreArray[78])
#define RP99 (&amesys->pModel->realParamArray[361])
#define IP99 (&amesys->pModel->integerParamArray[248])
#define TP99 (&amesys->pModel->textParamArray[94])
#define PS100 (&amesys->pModel->pointerStoreArray[81])
#define RP100 (&amesys->pModel->realParamArray[373])
#define IP100 (&amesys->pModel->integerParamArray[259])
#define RP101 (&amesys->pModel->realParamArray[374])
#define IS102 (&amesys->pModel->intStoreArray[9])
#define RP102 (&amesys->pModel->realParamArray[375])
#define IP102 (&amesys->pModel->integerParamArray[260])


static const S_AMEVariableInfo GVarInfo[AME_NB_VAR_INFO] = {
   { 0, 1, 1, 1, "CONS00", "out" }
  ,{ 1, 1, 1, 1, "CONS00", "k0GEN" }
  ,{ 2, 1, 1, 2, "CONS00", "out" }
  ,{ 3, 1, 1, 2, "CONS00", "k0GEN" }
  ,{ 4, 1, 1, 1, "THMAGS00", "dm1" }
  ,{ 5, 1, 1, 1, "THMAGS00", "rh1" }
  ,{ 6, 1, 1, 1, "THMAGS00", "p1" }
  ,{ 7, 1, 1, 1, "THMAGS00", "t1" }
  ,{ 8, 1, 1, 3, "THHF0", "dh1" }
  ,{ 9, 1, 1, 1, "THMAGS00", "sig" }
  ,{ 10, 1, 1, 1, "THMAFS00", "dm1" }
  ,{ 11, 1, 1, 1, "THMAFS00", "rh1" }
  ,{ 12, 1, 1, 1, "THMAFS00", "p1" }
  ,{ 13, 1, 1, 1, "THMAFS00", "t1" }
  ,{ 14, 1, 1, 1, "THMAGS00", "ah3" }
  ,{ 15, 1, 1, 1, "THMAGS00", "hspe3" }
  ,{ 16, 1, 1, 1, "THMAGS00", "rho3" }
  ,{ 17, 1, 1, 1, "THMAGS00", "mu3" }
  ,{ 18, 1, 1, 1, "THMAGS00", "cp3" }
  ,{ 19, 1, 1, 1, "THMAGS00", "lam3" }
  ,{ 20, 1, 1, 1, "THMAGS00", "ahsat3" }
  ,{ 21, 1, 1, 1, "THMAGS00", "tempBulbC" }
  ,{ 22, 1, 1, 1, "THMAGS00", "tempDewC" }
  ,{ 23, 1, 1, 2, "THMAGS00", "dm1" }
  ,{ 24, 1, 1, 2, "THMAGS00", "rh1" }
  ,{ 25, 1, 1, 2, "THMAGS00", "p1" }
  ,{ 26, 1, 1, 2, "THMAGS00", "t1" }
  ,{ 27, 1, 1, 2, "THHF0", "dh1" }
  ,{ 28, 1, 1, 2, "THMAGS00", "sig" }
  ,{ 29, 1, 1, 2, "THMAGS00", "ah3" }
  ,{ 30, 1, 1, 2, "THMAGS00", "hspe3" }
  ,{ 31, 1, 1, 2, "THMAGS00", "rho3" }
  ,{ 32, 1, 1, 2, "THMAGS00", "mu3" }
  ,{ 33, 1, 1, 2, "THMAGS00", "cp3" }
  ,{ 34, 1, 1, 2, "THMAGS00", "lam3" }
  ,{ 35, 1, 1, 2, "THMAGS00", "ahsat3" }
  ,{ 36, 1, 1, 2, "THMAGS00", "tempBulbC" }
  ,{ 37, 1, 1, 2, "THMAGS00", "tempDewC" }
  ,{ 38, 1, 1, 3, "THMAGS00", "dm1" }
  ,{ 39, 1, 1, 3, "THMAGS00", "rh1" }
  ,{ 40, 1, 1, 3, "THMAGS00", "p1" }
  ,{ 41, 1, 1, 3, "THMAGS00", "t1" }
  ,{ 42, 1, 1, 1, "THHF0", "dh1" }
  ,{ 43, 1, 1, 3, "THMAGS00", "sig" }
  ,{ 44, 1, 1, 3, "THMAGS00", "ah3" }
  ,{ 45, 1, 1, 3, "THMAGS00", "hspe3" }
  ,{ 46, 1, 1, 3, "THMAGS00", "rho3" }
  ,{ 47, 1, 1, 3, "THMAGS00", "mu3" }
  ,{ 48, 1, 1, 3, "THMAGS00", "cp3" }
  ,{ 49, 1, 1, 3, "THMAGS00", "lam3" }
  ,{ 50, 1, 1, 3, "THMAGS00", "ahsat3" }
  ,{ 51, 1, 1, 3, "THMAGS00", "tempBulbC" }
  ,{ 52, 1, 1, 3, "THMAGS00", "tempDewC" }
  ,{ 53, 1, 1, 1, "THMAFS00", "sig" }
  ,{ 54, 1, 1, 4, "THHF0", "dh1" }
  ,{ 55, 1, 1, 6, "THMAGS00", "dm1" }
  ,{ 56, 1, 1, 6, "THMAGS00", "rh1" }
  ,{ 57, 1, 1, 6, "THMAGS00", "p1" }
  ,{ 58, 1, 1, 6, "THMAGS00", "t1" }
  ,{ 59, 1, 1, 1, "THMAFS00", "dmd3" }
  ,{ 60, 1, 1, 1, "TPFPUCOMPVD0000", "dmh3" }
  ,{ 61, 1, 1, 1, "TPFPUCOMPVD0000", "dm3" }
  ,{ 62, 1, 1, 1, "TPFP002", "p1" }
  ,{ 63, 1, 1, 1, "TPFP002", "rho1" }
  ,{ 64, 0, 1, 1, "TPFP002", "com1" }
  ,{ 65, 0, 1, 1, "TPFGS010", "p1" }
  ,{ 66, 0, 1, 1, "TPFGS010", "rho1" }
  ,{ 67, 0, 1, 1, "TPFGS010", "com1" }
  ,{ 68, 1, 1, 1, "TPFP002", "dmh2" }
  ,{ 69, 1, 1, 1, "TPFP002", "dm2" }
  ,{ 72, 1, 1, 1, "TPFP002", "t1" }
  ,{ 73, 1, 1, 1, "TPFP002", "x1" }
  ,{ 74, 1, 1, 1, "TPFP002", "alpha1" }
  ,{ 75, 1, 1, 1, "TPFP002", "shsc" }
  ,{ 76, 1, 1, 1, "TPFP002", "rey" }
  ,{ 77, 1, 1, 1, "TPFP002", "vel" }
  ,{ 78, 1, 1, 1, "TPFP002", "dp" }
  ,{ 79, 1, 1, 1, "TPFP002", "mtot" }
  ,{ 80, 1, 1, 1, "TPFP002", "region" }
  ,{ 81, 1, 1, 1, "TPFP002", "slipRatio" }
  ,{ 82, 1, 1, 1, "TPFP002", "xflow" }
  ,{ 83, 1, 1, 1, "GA00", "output" }
  ,{ 84, 1, 1, 1, "TPFPUCOMPVD0000", "torq" }
  ,{ 85, 1, 1, 1, "OMEGC0", "omega" }
  ,{ 86, 0, 1, 2, "TPFGS010", "p1" }
  ,{ 87, 0, 1, 2, "TPFGS010", "rho1" }
  ,{ 88, 0, 1, 2, "TPFGS010", "com1" }
  ,{ 89, 1, 1, 1, "TPFPIN00", "dmh1" }
  ,{ 90, 1, 1, 1, "TPFPIN00", "dm1" }
  ,{ 93, 1, 1, 1, "TPFP000", "p2" }
  ,{ 94, 1, 1, 1, "TPFP000", "rho2" }
  ,{ 95, 1, 1, 1, "TPFP000", "cnum2" }
  ,{ 96, 1, 1, 1, "TPFPIN00", "dmh2" }
  ,{ 97, 1, 1, 1, "TPFPIN00", "dm2" }
  ,{ 98, 1, 1, 1, "TPFPIN00", "re" }
  ,{ 99, 1, 1, 1, "TPFPIN00", "vel" }
  ,{ 100, 1, 1, 1, "TPFPIN00", "dp" }
  ,{ 101, 1, 1, 1, "TPFPIN00", "ff" }
  ,{ 102, 1, 1, 3, "CONS00", "out" }
  ,{ 103, 1, 1, 3, "CONS00", "k0GEN" }
  ,{ 104, 1, 1, 4, "CONS00", "out" }
  ,{ 105, 1, 1, 4, "CONS00", "k0GEN" }
  ,{ 106, 1, 1, 5, "CONS00", "out" }
  ,{ 107, 1, 1, 5, "CONS00", "k0GEN" }
  ,{ 108, 1, 1, 1, "SAT0", "output" }
  ,{ 109, 1, 1, 1, "ACMAS0000", "dms5" }
  ,{ 110, 1, 1, 1, "ACMAS0000", "rh" }
  ,{ 111, 1, 1, 1, "ACMAS0000", "p5" }
  ,{ 112, 1, 1, 1, "ACMAS0000", "t5" }
  ,{ 113, 1, 1, 1, "ACMAS0000", "ah" }
  ,{ 114, 1, 1, 1, "ACMAS0000", "hspe" }
  ,{ 115, 1, 1, 1, "TPFCVINT01", "dmh1" }
  ,{ 116, 1, 1, 1, "TPFCVINT01", "dm1" }
  ,{ 117, 1, 1, 1, "TPFP000", "p1" }
  ,{ 118, 1, 1, 1, "TPFP000", "rho1" }
  ,{ 119, 0, 1, 1, "TPFP000", "cnum1" }
  ,{ 120, 1, 1, 1, "TPFP000", "temp" }
  ,{ 121, 1, 1, 1, "TPFP000", "enth" }
  ,{ 122, 1, 1, 1, "TPFP000", "xx" }
  ,{ 123, 1, 1, 1, "TPFP000", "alpha" }
  ,{ 124, 1, 1, 1, "TPFP000", "shsc" }
  ,{ 125, 1, 1, 1, "TPFP000", "mtot" }
  ,{ 126, 1, 1, 1, "TPFP000", "region" }
  ,{ 127, 1, 1, 6, "CONS00", "out" }
  ,{ 128, 1, 1, 6, "CONS00", "k0GEN" }
  ,{ 129, 1, 1, 7, "CONS00", "out" }
  ,{ 130, 1, 1, 7, "CONS00", "k0GEN" }
  ,{ 131, 1, 1, 8, "CONS00", "out" }
  ,{ 132, 1, 1, 8, "CONS00", "k0GEN" }
  ,{ 133, 1, 1, 9, "CONS00", "out" }
  ,{ 134, 1, 1, 9, "CONS00", "k0GEN" }
  ,{ 135, 0, 1, 4, "TPFGS010", "p1" }
  ,{ 136, 0, 1, 4, "TPFGS010", "rho1" }
  ,{ 137, 0, 1, 4, "TPFGS010", "com1" }
  ,{ 138, 1, 1, 1, "TPFP001", "dmh1" }
  ,{ 139, 1, 1, 1, "TPFP001", "dm1" }
  ,{ 142, 1, 1, 1, "TPFPUCOMPVD0000", "dmh1" }
  ,{ 143, 1, 1, 1, "TPFPUCOMPVD0000", "dm1" }
  ,{ 144, 1, 1, 1, "TPFP001", "p2" }
  ,{ 145, 1, 1, 1, "TPFP001", "rho2" }
  ,{ 146, 0, 1, 1, "TPFP001", "com2" }
  ,{ 147, 1, 1, 1, "TPFP001", "t2" }
  ,{ 148, 1, 1, 1, "TPFP001", "x2" }
  ,{ 149, 1, 1, 1, "TPFP001", "alpha2" }
  ,{ 150, 1, 1, 1, "TPFP001", "shsc" }
  ,{ 151, 1, 1, 1, "TPFP001", "rey" }
  ,{ 152, 1, 1, 1, "TPFP001", "vel" }
  ,{ 153, 1, 1, 1, "TPFP001", "dp" }
  ,{ 154, 1, 1, 1, "TPFP001", "mtot" }
  ,{ 155, 1, 1, 1, "TPFP001", "region" }
  ,{ 156, 1, 1, 1, "TPFP001", "slipRatio" }
  ,{ 157, 1, 1, 1, "TPFP001", "xflow" }
  ,{ 158, 1, 1, 1, "RSTAT", "cpu" }
  ,{ 159, 1, 1, 1, "RSTAT", "wallTime" }
  ,{ 160, 1, 1, 1, "RSTAT", "step" }
  ,{ 161, 1, 1, 1, "RSTAT", "minh" }
  ,{ 162, 1, 1, 1, "RSTAT", "maxh" }
  ,{ 163, 1, 1, 1, "RSTAT", "minhprint" }
  ,{ 164, 1, 1, 1, "RSTAT", "maxhprint" }
  ,{ 165, 1, 1, 1, "RSTAT", "njacs" }
  ,{ 166, 1, 1, 1, "RSTAT", "nfes" }
  ,{ 167, 1, 1, 1, "RSTAT", "ndisc" }
  ,{ 168, 1, 1, 1, "RSTAT", "nsteps" }
  ,{ 169, 1, 1, 1, "RSTAT", "fetime" }
  ,{ 170, 1, 1, 1, "RSTAT", "stime" }
  ,{ 171, 1, 1, 1, "RSTAT", "nadams" }
  ,{ 172, 1, 1, 1, "RSTAT", "nbdf" }
  ,{ 173, 1, 12, 1, "RSTAT", "adams_1" }
  ,{ 185, 1, 5, 1, "RSTAT", "bdf_1" }
  ,{ 190, 1, 1, 1, "TPFGS010", "sig" }
  ,{ 191, 1, 1, 1, "ACMCTFTOP2", "p4" }
  ,{ 192, 1, 1, 1, "ACMCTFTOP2", "rho4" }
  ,{ 193, 0, 1, 1, "ACMCTFTOP2", "com4" }
  ,{ 194, 1, 1, 1, "TPFGS010", "dmh3" }
  ,{ 195, 1, 1, 1, "TPFGS010", "dm3" }
  ,{ 196, 1, 1, 1, "TPFGS010", "vol3" }
  ,{ 197, 1, 1, 1, "TPFGS010", "dvol3" }
  ,{ 198, 1, 1, 1, "TPFGS010", "v" }
  ,{ 199, 1, 1, 1, "TPFGS010", "temp" }
  ,{ 200, 1, 1, 1, "TPFGS010", "uspe" }
  ,{ 201, 1, 1, 1, "TPFGS010", "hspe" }
  ,{ 202, 1, 1, 1, "TPFGS010", "sspe" }
  ,{ 203, 1, 1, 1, "TPFGS010", "fspe" }
  ,{ 204, 1, 1, 1, "TPFGS010", "gspe" }
  ,{ 205, 1, 1, 1, "TPFGS010", "cp" }
  ,{ 206, 1, 1, 1, "TPFGS010", "cv" }
  ,{ 207, 1, 1, 1, "TPFGS010", "xx" }
  ,{ 208, 1, 1, 1, "TPFGS010", "alpha" }
  ,{ 209, 1, 1, 1, "TPFGS010", "shsc" }
  ,{ 210, 1, 1, 1, "TPFGS010", "dpc" }
  ,{ 211, 1, 1, 1, "TPFGS010", "mu" }
  ,{ 212, 1, 1, 1, "TPFGS010", "nu" }
  ,{ 213, 1, 1, 1, "TPFGS010", "lambda" }
  ,{ 214, 1, 1, 1, "TPFGS010", "pr" }
  ,{ 215, 1, 1, 1, "TPFGS010", "sigma" }
  ,{ 216, 1, 1, 1, "TPFGS010", "region" }
  ,{ 217, 1, 1, 1, "TPFGS010", "wOil" }
  ,{ 218, 1, 1, 1, "TPFGS010", "bmod" }
  ,{ 219, 1, 1, 1, "TPFGS010", "svel" }
  ,{ 220, 1, 1, 2, "TPFGS010", "sig" }
  ,{ 221, 1, 1, 1, "ACMCTFREF1", "p5" }
  ,{ 222, 1, 1, 1, "ACMCTFREF1", "rho5" }
  ,{ 223, 0, 1, 1, "ACMCTFREF1", "com5" }
  ,{ 224, 1, 1, 2, "TPFGS010", "dmh3" }
  ,{ 225, 1, 1, 2, "TPFGS010", "dm3" }
  ,{ 226, 1, 1, 2, "TPFGS010", "vol3" }
  ,{ 227, 1, 1, 2, "TPFGS010", "dvol3" }
  ,{ 228, 1, 1, 2, "TPFGS010", "v" }
  ,{ 229, 1, 1, 2, "TPFGS010", "temp" }
  ,{ 230, 1, 1, 2, "TPFGS010", "uspe" }
  ,{ 231, 1, 1, 2, "TPFGS010", "hspe" }
  ,{ 232, 1, 1, 2, "TPFGS010", "sspe" }
  ,{ 233, 1, 1, 2, "TPFGS010", "fspe" }
  ,{ 234, 1, 1, 2, "TPFGS010", "gspe" }
  ,{ 235, 1, 1, 2, "TPFGS010", "cp" }
  ,{ 236, 1, 1, 2, "TPFGS010", "cv" }
  ,{ 237, 1, 1, 2, "TPFGS010", "xx" }
  ,{ 238, 1, 1, 2, "TPFGS010", "alpha" }
  ,{ 239, 1, 1, 2, "TPFGS010", "shsc" }
  ,{ 240, 1, 1, 2, "TPFGS010", "dpc" }
  ,{ 241, 1, 1, 2, "TPFGS010", "mu" }
  ,{ 242, 1, 1, 2, "TPFGS010", "nu" }
  ,{ 243, 1, 1, 2, "TPFGS010", "lambda" }
  ,{ 244, 1, 1, 2, "TPFGS010", "pr" }
  ,{ 245, 1, 1, 2, "TPFGS010", "sigma" }
  ,{ 246, 1, 1, 2, "TPFGS010", "region" }
  ,{ 247, 1, 1, 2, "TPFGS010", "wOil" }
  ,{ 248, 1, 1, 2, "TPFGS010", "bmod" }
  ,{ 249, 1, 1, 2, "TPFGS010", "svel" }
  ,{ 250, 1, 1, 6, "TPFGS010", "sig" }
  ,{ 251, 1, 1, 4, "TPFGS010", "sig" }
  ,{ 252, 1, 1, 1, "TPF_FP01", "masstot" }
  ,{ 253, 1, 1, 1, "TPF_FP01", "voltot" }
  ,{ 254, 1, 1, 1, "TPF_FP01", "pcrit" }
  ,{ 255, 1, 1, 1, "TPF_FP01", "tcrit" }
  ,{ 256, 1, 1, 1, "TPF_FP01", "rhocrit" }
  ,{ 257, 1, 1, 1, "TPF_FP01", "mmass" }
  ,{ 258, 1, 1, 9, "THMAGS00", "dm1" }
  ,{ 259, 1, 1, 9, "THMAGS00", "rh1" }
  ,{ 260, 1, 1, 9, "THMAGS00", "p1" }
  ,{ 261, 1, 1, 9, "THMAGS00", "t1" }
  ,{ 262, 1, 1, 1, "TPFPHE0001", "dmh3" }
  ,{ 263, 1, 1, 1, "TPFPHE0001", "dm3" }
  ,{ 266, 0, 1, 3, "TPFGS010", "p1" }
  ,{ 267, 0, 1, 3, "TPFGS010", "rho1" }
  ,{ 268, 0, 1, 3, "TPFGS010", "com1" }
  ,{ 269, 1, 1, 3, "TPFGS010", "sig" }
  ,{ 270, 1, 1, 1, "ACUCPFEND1", "p4" }
  ,{ 271, 1, 1, 1, "ACUCPFEND1", "rho4" }
  ,{ 272, 0, 1, 1, "ACUCPFEND1", "com4" }
  ,{ 273, 1, 1, 3, "TPFGS010", "dmh3" }
  ,{ 274, 1, 1, 3, "TPFGS010", "dm3" }
  ,{ 275, 1, 1, 3, "TPFGS010", "vol3" }
  ,{ 276, 1, 1, 3, "TPFGS010", "dvol3" }
  ,{ 277, 1, 1, 3, "TPFGS010", "v" }
  ,{ 278, 1, 1, 3, "TPFGS010", "temp" }
  ,{ 279, 1, 1, 3, "TPFGS010", "uspe" }
  ,{ 280, 1, 1, 3, "TPFGS010", "hspe" }
  ,{ 281, 1, 1, 3, "TPFGS010", "sspe" }
  ,{ 282, 1, 1, 3, "TPFGS010", "fspe" }
  ,{ 283, 1, 1, 3, "TPFGS010", "gspe" }
  ,{ 284, 1, 1, 3, "TPFGS010", "cp" }
  ,{ 285, 1, 1, 3, "TPFGS010", "cv" }
  ,{ 286, 1, 1, 3, "TPFGS010", "xx" }
  ,{ 287, 1, 1, 3, "TPFGS010", "alpha" }
  ,{ 288, 1, 1, 3, "TPFGS010", "shsc" }
  ,{ 289, 1, 1, 3, "TPFGS010", "dpc" }
  ,{ 290, 1, 1, 3, "TPFGS010", "mu" }
  ,{ 291, 1, 1, 3, "TPFGS010", "nu" }
  ,{ 292, 1, 1, 3, "TPFGS010", "lambda" }
  ,{ 293, 1, 1, 3, "TPFGS010", "pr" }
  ,{ 294, 1, 1, 3, "TPFGS010", "sigma" }
  ,{ 295, 1, 1, 3, "TPFGS010", "region" }
  ,{ 296, 1, 1, 3, "TPFGS010", "wOil" }
  ,{ 297, 1, 1, 3, "TPFGS010", "bmod" }
  ,{ 298, 1, 1, 3, "TPFGS010", "svel" }
  ,{ 299, 1, 1, 1, "ACTEVSB02", "p3" }
  ,{ 300, 1, 1, 1, "ACTEVSB02", "rho3" }
  ,{ 301, 1, 1, 1, "ACTEVSB02", "com3" }
  ,{ 302, 1, 1, 4, "TPFGS010", "dmh3" }
  ,{ 303, 1, 1, 4, "TPFGS010", "dm3" }
  ,{ 304, 1, 1, 4, "TPFGS010", "vol3" }
  ,{ 305, 1, 1, 4, "TPFGS010", "dvol3" }
  ,{ 306, 1, 1, 4, "TPFGS010", "v" }
  ,{ 307, 1, 1, 4, "TPFGS010", "temp" }
  ,{ 308, 1, 1, 4, "TPFGS010", "uspe" }
  ,{ 309, 1, 1, 4, "TPFGS010", "hspe" }
  ,{ 310, 1, 1, 4, "TPFGS010", "sspe" }
  ,{ 311, 1, 1, 4, "TPFGS010", "fspe" }
  ,{ 312, 1, 1, 4, "TPFGS010", "gspe" }
  ,{ 313, 1, 1, 4, "TPFGS010", "cp" }
  ,{ 314, 1, 1, 4, "TPFGS010", "cv" }
  ,{ 315, 1, 1, 4, "TPFGS010", "xx" }
  ,{ 316, 1, 1, 4, "TPFGS010", "alpha" }
  ,{ 317, 1, 1, 4, "TPFGS010", "shsc" }
  ,{ 318, 1, 1, 4, "TPFGS010", "dpc" }
  ,{ 319, 1, 1, 4, "TPFGS010", "mu" }
  ,{ 320, 1, 1, 4, "TPFGS010", "nu" }
  ,{ 321, 1, 1, 4, "TPFGS010", "lambda" }
  ,{ 322, 1, 1, 4, "TPFGS010", "pr" }
  ,{ 323, 1, 1, 4, "TPFGS010", "sigma" }
  ,{ 324, 1, 1, 4, "TPFGS010", "region" }
  ,{ 325, 1, 1, 4, "TPFGS010", "wOil" }
  ,{ 326, 1, 1, 4, "TPFGS010", "bmod" }
  ,{ 327, 1, 1, 4, "TPFGS010", "svel" }
  ,{ 328, 1, 1, 6, "TPFGS010", "dmh3" }
  ,{ 329, 1, 1, 6, "TPFGS010", "dm3" }
  ,{ 330, 1, 1, 6, "TPFGS010", "vol3" }
  ,{ 331, 1, 1, 6, "TPFGS010", "dvol3" }
  ,{ 332, 1, 1, 2, "TPFP002", "p1" }
  ,{ 333, 1, 1, 2, "TPFP002", "rho1" }
  ,{ 334, 0, 1, 2, "TPFP002", "com1" }
  ,{ 335, 1, 1, 1, "ACUCPFREF1", "p2" }
  ,{ 336, 1, 1, 1, "ACUCPFREF1", "rho2" }
  ,{ 337, 0, 1, 1, "ACUCPFREF1", "com2" }
  ,{ 338, 1, 1, 2, "TPFP002", "dmh2" }
  ,{ 339, 1, 1, 2, "TPFP002", "dm2" }
  ,{ 340, 1, 1, 2, "TPFP002", "t1" }
  ,{ 341, 1, 1, 2, "TPFP002", "x1" }
  ,{ 342, 1, 1, 2, "TPFP002", "alpha1" }
  ,{ 343, 1, 1, 2, "TPFP002", "shsc" }
  ,{ 344, 1, 1, 2, "TPFP002", "rey" }
  ,{ 345, 1, 1, 2, "TPFP002", "vel" }
  ,{ 346, 1, 1, 2, "TPFP002", "dp" }
  ,{ 347, 1, 1, 2, "TPFP002", "mtot" }
  ,{ 348, 1, 1, 2, "TPFP002", "region" }
  ,{ 349, 1, 1, 2, "TPFP002", "slipRatio" }
  ,{ 350, 1, 1, 2, "TPFP002", "xflow" }
  ,{ 351, 1, 1, 1, "ACMCTFREF1", "dmh3" }
  ,{ 352, 1, 1, 1, "ACMCTFREF1", "dm3" }
  ,{ 353, 1, 1, 1, "TPFSCH00", "press" }
  ,{ 354, 1, 1, 1, "TPFSCH00", "rho1" }
  ,{ 355, 0, 1, 1, "TPFSCH00", "cnum1" }
  ,{ 356, 1, 1, 1, "THHS0", "dh1" }
  ,{ 357, 1, 1, 1, "TPFSCH00", "tempc" }
  ,{ 358, 1, 1, 1, "TPFRFL000", "dmh1" }
  ,{ 359, 1, 1, 1, "TPFRFL000", "dm1" }
  ,{ 360, 1, 1, 1, "TPFSCH00", "p2" }
  ,{ 361, 1, 1, 1, "TPFSCH00", "rho3" }
  ,{ 362, 0, 1, 1, "TPFSCH00", "cnum3" }
  ,{ 363, 1, 1, 1, "TPFSCH00", "rho" }
  ,{ 364, 1, 1, 1, "TPFSCH00", "tau" }
  ,{ 365, 1, 1, 1, "TPFSCH00", "load" }
  ,{ 366, 1, 1, 1, "TPFSCH00", "mtot" }
  ,{ 367, 1, 1, 1, "TPFSCH00", "region" }
  ,{ 368, 1, 1, 1, "ACMCTFINT1", "p2" }
  ,{ 369, 1, 1, 1, "ACMCTFINT1", "rho2" }
  ,{ 370, 0, 1, 1, "ACMCTFINT1", "com2" }
  ,{ 371, 1, 1, 1, "TPFRFL000", "dmh2" }
  ,{ 372, 1, 1, 1, "TPFRFL000", "dm2" }
  ,{ 373, 1, 1, 1, "TPFRFL000", "rey" }
  ,{ 374, 1, 1, 1, "TPFRFL000", "vel" }
  ,{ 375, 1, 1, 1, "TPFRFL000", "dp" }
  ,{ 376, 1, 1, 1, "TPFRFL000", "slipRatio" }
  ,{ 377, 1, 1, 1, "TPFRFL000", "xflow" }
  ,{ 378, 0, 1, 6, "TPFGS010", "p1" }
  ,{ 379, 0, 1, 6, "TPFGS010", "rho1" }
  ,{ 380, 0, 1, 6, "TPFGS010", "com1" }
  ,{ 381, 1, 1, 1, "ACTEVSB02", "dmh1" }
  ,{ 382, 1, 1, 1, "ACTEVSB02", "dm1" }
  ,{ 385, 1, 1, 2, "TPFPHE0001", "p1" }
  ,{ 386, 1, 1, 2, "TPFPHE0001", "rho1" }
  ,{ 387, 0, 1, 2, "TPFPHE0001", "com1" }
  ,{ 388, 1, 1, 1, "ACTEVSB02", "dmh2" }
  ,{ 389, 1, 1, 1, "ACTEVSB02", "dm2" }
  ,{ 390, 0, 1, 5, "TPFGS010", "p1" }
  ,{ 391, 0, 1, 5, "TPFGS010", "rho1" }
  ,{ 392, 0, 1, 5, "TPFGS010", "com1" }
  ,{ 393, 1, 1, 1, "ACTEVSB02", "dmh4" }
  ,{ 394, 1, 1, 1, "ACTEVSB02", "dm4" }
  ,{ 397, 1, 1, 1, "ACTEVSB02", "xPort4" }
  ,{ 398, 1, 1, 1, "ACTEVSB02", "xPort1" }
  ,{ 399, 1, 1, 1, "ACTEVSB02", "subcoolingPort4" }
  ,{ 400, 1, 1, 1, "ACTEVSB02", "lift" }
  ,{ 401, 1, 1, 1, "ACTEVSB02", "superheatValveOpening" }
  ,{ 402, 1, 1, 1, "ACTEVSB02", "superheatFullyOpen" }
  ,{ 403, 1, 1, 1, "ACTEVSB02", "tempBulb" }
  ,{ 404, 1, 1, 1, "GA00", "k0GEN" }
  ,{ 405, 1, 1, 2, "GA00", "output" }
  ,{ 406, 1, 1, 1, "MUL00", "outp" }
  ,{ 407, 1, 1, 2, "GA00", "k0GEN" }
  ,{ 408, 1, 1, 4, "THMAGS00", "dm1" }
  ,{ 409, 1, 1, 4, "THMAGS00", "rh1" }
  ,{ 410, 1, 1, 4, "THMAGS00", "p1" }
  ,{ 411, 1, 1, 4, "THMAGS00", "t1" }
  ,{ 412, 1, 1, 4, "THMAGS00", "sig" }
  ,{ 413, 1, 1, 4, "THMAGS00", "ah3" }
  ,{ 414, 1, 1, 4, "THMAGS00", "hspe3" }
  ,{ 415, 1, 1, 4, "THMAGS00", "rho3" }
  ,{ 416, 1, 1, 4, "THMAGS00", "mu3" }
  ,{ 417, 1, 1, 4, "THMAGS00", "cp3" }
  ,{ 418, 1, 1, 4, "THMAGS00", "lam3" }
  ,{ 419, 1, 1, 4, "THMAGS00", "ahsat3" }
  ,{ 420, 1, 1, 4, "THMAGS00", "tempBulbC" }
  ,{ 421, 1, 1, 4, "THMAGS00", "tempDewC" }
  ,{ 422, 1, 1, 3, "GA00", "output" }
  ,{ 423, 1, 1, 3, "GA00", "k0GEN" }
  ,{ 424, 1, 1, 1, "SAT0", "xmax0GEN" }
  ,{ 425, 1, 1, 1, "SAT0", "xmin0GEN" }
  ,{ 426, 1, 1, 1, "THSD00", "mtot" }
  ,{ 427, 1, 1, 1, "THSD00", "se" }
  ,{ 428, 1, 1, 2, "THSD00", "mtot" }
  ,{ 429, 1, 1, 2, "THSD00", "se" }
  ,{ 430, 1, 1, 3, "THC000", "t4" }
  ,{ 431, 1, 1, 5, "THHF0", "dh1" }
  ,{ 432, 1, 1, 4, "THC000", "t2" }
  ,{ 433, 1, 1, 6, "THHF0", "dh1" }
  ,{ 434, 1, 1, 4, "THC000", "t4" }
  ,{ 435, 1, 1, 7, "THHF0", "dh1" }
  ,{ 436, 1, 1, 2, "TPFPHE0001", "dmh3" }
  ,{ 437, 1, 1, 2, "TPFPHE0001", "dm3" }
  ,{ 438, 1, 1, 1, "TPFPHE0001", "p1" }
  ,{ 439, 1, 1, 1, "TPFPHE0001", "rho1" }
  ,{ 440, 0, 1, 1, "TPFPHE0001", "com1" }
  ,{ 441, 1, 1, 3, "THC000", "t1" }
  ,{ 442, 1, 1, 1, "TPFPHE0001", "dmh2" }
  ,{ 443, 1, 1, 1, "TPFPHE0001", "t3" }
  ,{ 444, 1, 1, 1, "TPFPHE0001", "t1" }
  ,{ 445, 1, 1, 1, "TPFPHE0001", "x1" }
  ,{ 446, 1, 1, 1, "TPFPHE0001", "alpha1" }
  ,{ 447, 1, 1, 1, "TPFPHE0001", "shsc" }
  ,{ 448, 1, 1, 1, "TPFPHE0001", "rey" }
  ,{ 449, 1, 1, 1, "TPFPHE0001", "vel" }
  ,{ 450, 1, 1, 1, "TPFPHE0001", "h" }
  ,{ 451, 1, 1, 1, "TPFPHE0001", "dp" }
  ,{ 452, 1, 1, 1, "TPFPHE0001", "mtot" }
  ,{ 453, 1, 1, 1, "TPFPHE0001", "region" }
  ,{ 454, 1, 1, 1, "TPFPHE0001", "slipRatio" }
  ,{ 455, 1, 1, 1, "TPFPHE0001", "xflow" }
  ,{ 456, 1, 1, 4, "THC000", "t1" }
  ,{ 457, 1, 1, 2, "TPFPHE0001", "dmh2" }
  ,{ 458, 1, 1, 2, "TPFPHE0001", "t3" }
  ,{ 459, 1, 1, 2, "TPFPHE0001", "t1" }
  ,{ 460, 1, 1, 2, "TPFPHE0001", "x1" }
  ,{ 461, 1, 1, 2, "TPFPHE0001", "alpha1" }
  ,{ 462, 1, 1, 2, "TPFPHE0001", "shsc" }
  ,{ 463, 1, 1, 2, "TPFPHE0001", "rey" }
  ,{ 464, 1, 1, 2, "TPFPHE0001", "vel" }
  ,{ 465, 1, 1, 2, "TPFPHE0001", "h" }
  ,{ 466, 1, 1, 2, "TPFPHE0001", "dp" }
  ,{ 467, 1, 1, 2, "TPFPHE0001", "mtot" }
  ,{ 468, 1, 1, 2, "TPFPHE0001", "region" }
  ,{ 469, 1, 1, 2, "TPFPHE0001", "slipRatio" }
  ,{ 470, 1, 1, 2, "TPFPHE0001", "xflow" }
  ,{ 471, 1, 1, 3, "THC000", "t2" }
  ,{ 472, 1, 1, 8, "THHF0", "dh1" }
  ,{ 473, 1, 1, 5, "TPFGS010", "sig" }
  ,{ 474, 1, 1, 2, "TPFCVINT01", "p3" }
  ,{ 475, 1, 1, 2, "TPFCVINT01", "rho3" }
  ,{ 476, 0, 1, 2, "TPFCVINT01", "com3" }
  ,{ 477, 1, 1, 5, "TPFGS010", "dmh3" }
  ,{ 478, 1, 1, 5, "TPFGS010", "dm3" }
  ,{ 479, 1, 1, 5, "TPFGS010", "vol3" }
  ,{ 480, 1, 1, 5, "TPFGS010", "dvol3" }
  ,{ 481, 1, 1, 5, "TPFGS010", "v" }
  ,{ 482, 1, 1, 5, "TPFGS010", "temp" }
  ,{ 483, 1, 1, 5, "TPFGS010", "uspe" }
  ,{ 484, 1, 1, 5, "TPFGS010", "hspe" }
  ,{ 485, 1, 1, 5, "TPFGS010", "sspe" }
  ,{ 486, 1, 1, 5, "TPFGS010", "fspe" }
  ,{ 487, 1, 1, 5, "TPFGS010", "gspe" }
  ,{ 488, 1, 1, 5, "TPFGS010", "cp" }
  ,{ 489, 1, 1, 5, "TPFGS010", "cv" }
  ,{ 490, 1, 1, 5, "TPFGS010", "xx" }
  ,{ 491, 1, 1, 5, "TPFGS010", "alpha" }
  ,{ 492, 1, 1, 5, "TPFGS010", "shsc" }
  ,{ 493, 1, 1, 5, "TPFGS010", "dpc" }
  ,{ 494, 1, 1, 5, "TPFGS010", "mu" }
  ,{ 495, 1, 1, 5, "TPFGS010", "nu" }
  ,{ 496, 1, 1, 5, "TPFGS010", "lambda" }
  ,{ 497, 1, 1, 5, "TPFGS010", "pr" }
  ,{ 498, 1, 1, 5, "TPFGS010", "sigma" }
  ,{ 499, 1, 1, 5, "TPFGS010", "region" }
  ,{ 500, 1, 1, 5, "TPFGS010", "wOil" }
  ,{ 501, 1, 1, 5, "TPFGS010", "bmod" }
  ,{ 502, 1, 1, 5, "TPFGS010", "svel" }
  ,{ 503, 1, 1, 4, "THC000", "t3" }
  ,{ 504, 1, 1, 1, "TPFCVINT01", "dmh2" }
  ,{ 505, 1, 1, 2, "TPFCVINT01", "dmh1" }
  ,{ 506, 1, 1, 2, "TPFCVINT01", "dm1" }
  ,{ 507, 1, 1, 1, "TPFCVINT01", "p3" }
  ,{ 508, 1, 1, 1, "TPFCVINT01", "rho3" }
  ,{ 509, 0, 1, 1, "TPFCVINT01", "com3" }
  ,{ 510, 1, 1, 1, "THC000", "t1" }
  ,{ 511, 1, 1, 1, "TPFCVINT01", "dmh4" }
  ,{ 512, 1, 1, 1, "TPFCVINT01", "t3" }
  ,{ 513, 1, 1, 1, "TPFCVINT01", "x3" }
  ,{ 514, 1, 1, 1, "TPFCVINT01", "alpha3" }
  ,{ 515, 1, 1, 1, "TPFCVINT01", "shsc3" }
  ,{ 516, 1, 1, 1, "TPFCVINT01", "rey" }
  ,{ 517, 1, 1, 1, "TPFCVINT01", "vel" }
  ,{ 518, 1, 1, 1, "TPFCVINT01", "h2" }
  ,{ 519, 1, 1, 1, "TPFCVINT01", "h4" }
  ,{ 520, 1, 1, 1, "TPFCVINT01", "dp" }
  ,{ 521, 1, 1, 1, "TPFCVINT01", "mtot" }
  ,{ 522, 1, 1, 1, "TPFCVINT01", "region" }
  ,{ 523, 1, 1, 1, "TPFCVINT01", "t1" }
  ,{ 524, 1, 1, 3, "THC000", "t3" }
  ,{ 525, 1, 1, 2, "TPFCVINT01", "dmh2" }
  ,{ 526, 1, 1, 2, "THC000", "t1" }
  ,{ 527, 1, 1, 2, "TPFCVINT01", "dmh4" }
  ,{ 528, 1, 1, 2, "TPFCVINT01", "t3" }
  ,{ 529, 1, 1, 2, "TPFCVINT01", "x3" }
  ,{ 530, 1, 1, 2, "TPFCVINT01", "alpha3" }
  ,{ 531, 1, 1, 2, "TPFCVINT01", "shsc3" }
  ,{ 532, 1, 1, 2, "TPFCVINT01", "rey" }
  ,{ 533, 1, 1, 2, "TPFCVINT01", "vel" }
  ,{ 534, 1, 1, 2, "TPFCVINT01", "h2" }
  ,{ 535, 1, 1, 2, "TPFCVINT01", "h4" }
  ,{ 536, 1, 1, 2, "TPFCVINT01", "dp" }
  ,{ 537, 1, 1, 2, "TPFCVINT01", "mtot" }
  ,{ 538, 1, 1, 2, "TPFCVINT01", "region" }
  ,{ 539, 1, 1, 2, "TPFCVINT01", "t1" }
  ,{ 540, 1, 1, 2, "THC000", "t4" }
  ,{ 541, 1, 1, 9, "THHF0", "dh1" }
  ,{ 542, 1, 1, 1, "THC000", "t2" }
  ,{ 543, 1, 1, 10, "THHF0", "dh1" }
  ,{ 544, 1, 1, 1, "THC000", "t4" }
  ,{ 545, 1, 1, 11, "THHF0", "dh1" }
  ,{ 546, 1, 1, 2, "THC000", "t2" }
  ,{ 547, 1, 1, 12, "THHF0", "dh1" }
  ,{ 548, 1, 1, 1, "THC000", "t3" }
  ,{ 549, 1, 1, 1, "THGCV00", "dh1" }
  ,{ 550, 1, 1, 1, "THGCV00", "Re" }
  ,{ 551, 1, 1, 1, "THGCV00", "Pr" }
  ,{ 552, 1, 1, 1, "THGCV00", "Gr" }
  ,{ 553, 1, 1, 1, "THGCV00", "NuFree" }
  ,{ 554, 1, 1, 1, "THGCV00", "NuForced" }
  ,{ 555, 1, 1, 1, "THGCV00", "hconv" }
  ,{ 556, 1, 1, 2, "THC000", "t3" }
  ,{ 557, 1, 1, 2, "THGCV00", "dh1" }
  ,{ 558, 1, 1, 2, "THGCV00", "Re" }
  ,{ 559, 1, 1, 2, "THGCV00", "Pr" }
  ,{ 560, 1, 1, 2, "THGCV00", "Gr" }
  ,{ 561, 1, 1, 2, "THGCV00", "NuFree" }
  ,{ 562, 1, 1, 2, "THGCV00", "NuForced" }
  ,{ 563, 1, 1, 2, "THGCV00", "hconv" }
  ,{ 564, 1, 1, 1, "ACUCPFINT1", "mamfr3" }
  ,{ 565, 1, 1, 1, "ACUCPFINT1", "marh3" }
  ,{ 566, 1, 1, 1, "ACUCPFINT1", "map3" }
  ,{ 567, 1, 1, 1, "ACUCPFINT1", "mat3" }
  ,{ 568, 1, 1, 1, "THMAMX000", "dm2" }
  ,{ 569, 1, 1, 1, "THMAMX000", "rh2" }
  ,{ 570, 1, 1, 1, "THMAMX000", "p2" }
  ,{ 571, 1, 1, 1, "THMAMX000", "t2" }
  ,{ 572, 1, 1, 1, "ACUCPFREF1", "mamfr3" }
  ,{ 573, 1, 1, 1, "ACUCPFREF1", "marh3" }
  ,{ 574, 1, 1, 1, "ACUCPFREF1", "map3" }
  ,{ 575, 1, 1, 1, "ACUCPFREF1", "mat3" }
  ,{ 576, 1, 3, 1, "THMAMX000", "ah_1" }
  ,{ 579, 1, 3, 1, "THMAMX000", "hspe_1" }
  ,{ 582, 1, 1, 5, "THMAGS00", "dm1" }
  ,{ 583, 1, 1, 5, "THMAGS00", "rh1" }
  ,{ 584, 1, 1, 5, "THMAGS00", "p1" }
  ,{ 585, 1, 1, 5, "THMAGS00", "t1" }
  ,{ 586, 1, 1, 5, "THMAGS00", "sig" }
  ,{ 587, 1, 1, 5, "THMAGS00", "ah3" }
  ,{ 588, 1, 1, 5, "THMAGS00", "hspe3" }
  ,{ 589, 1, 1, 5, "THMAGS00", "rho3" }
  ,{ 590, 1, 1, 5, "THMAGS00", "mu3" }
  ,{ 591, 1, 1, 5, "THMAGS00", "cp3" }
  ,{ 592, 1, 1, 5, "THMAGS00", "lam3" }
  ,{ 593, 1, 1, 5, "THMAGS00", "ahsat3" }
  ,{ 594, 1, 1, 5, "THMAGS00", "tempBulbC" }
  ,{ 595, 1, 1, 5, "THMAGS00", "tempDewC" }
  ,{ 596, 1, 1, 1, "ACUCPFEND1", "mamfr3" }
  ,{ 597, 1, 1, 1, "ACUCPFEND1", "marh3" }
  ,{ 598, 1, 1, 1, "ACUCPFEND1", "map3" }
  ,{ 599, 1, 1, 1, "ACUCPFEND1", "mat3" }
  ,{ 600, 1, 1, 2, "THMAMX000", "dm2" }
  ,{ 601, 1, 1, 2, "THMAMX000", "rh2" }
  ,{ 602, 1, 1, 2, "THMAMX000", "p2" }
  ,{ 603, 1, 1, 2, "THMAMX000", "t2" }
  ,{ 604, 1, 3, 2, "THMAMX000", "ah_1" }
  ,{ 607, 1, 3, 2, "THMAMX000", "hspe_1" }
  ,{ 610, 1, 1, 6, "THMAGS00", "sig" }
  ,{ 611, 1, 1, 6, "THMAGS00", "ah3" }
  ,{ 612, 1, 1, 6, "THMAGS00", "hspe3" }
  ,{ 613, 1, 1, 6, "THMAGS00", "rho3" }
  ,{ 614, 1, 1, 6, "THMAGS00", "mu3" }
  ,{ 615, 1, 1, 6, "THMAGS00", "cp3" }
  ,{ 616, 1, 1, 6, "THMAGS00", "lam3" }
  ,{ 617, 1, 1, 6, "THMAGS00", "ahsat3" }
  ,{ 618, 1, 1, 6, "THMAGS00", "tempBulbC" }
  ,{ 619, 1, 1, 6, "THMAGS00", "tempDewC" }
  ,{ 620, 1, 1, 1, "ACMCTFREF1", "mamfr2" }
  ,{ 621, 1, 1, 1, "ACMCTFREF1", "marh2" }
  ,{ 622, 1, 1, 1, "ACMCTFREF1", "map2" }
  ,{ 623, 1, 1, 1, "ACMCTFREF1", "mat2" }
  ,{ 624, 1, 1, 3, "THMAMX000", "dm2" }
  ,{ 625, 1, 1, 3, "THMAMX000", "rh2" }
  ,{ 626, 1, 1, 3, "THMAMX000", "p2" }
  ,{ 627, 1, 1, 3, "THMAMX000", "t2" }
  ,{ 628, 1, 1, 1, "ACMCTFINT1", "mamfr3" }
  ,{ 629, 1, 1, 1, "ACMCTFINT1", "marh3" }
  ,{ 630, 1, 1, 1, "ACMCTFINT1", "map3" }
  ,{ 631, 1, 1, 1, "ACMCTFINT1", "mat3" }
  ,{ 632, 1, 3, 3, "THMAMX000", "ah_1" }
  ,{ 635, 1, 3, 3, "THMAMX000", "hspe_1" }
  ,{ 638, 1, 1, 7, "THMAGS00", "dm1" }
  ,{ 639, 1, 1, 7, "THMAGS00", "rh1" }
  ,{ 640, 1, 1, 7, "THMAGS00", "p1" }
  ,{ 641, 1, 1, 7, "THMAGS00", "t1" }
  ,{ 642, 1, 1, 7, "THMAGS00", "sig" }
  ,{ 643, 1, 1, 7, "THMAGS00", "ah3" }
  ,{ 644, 1, 1, 7, "THMAGS00", "hspe3" }
  ,{ 645, 1, 1, 7, "THMAGS00", "rho3" }
  ,{ 646, 1, 1, 7, "THMAGS00", "mu3" }
  ,{ 647, 1, 1, 7, "THMAGS00", "cp3" }
  ,{ 648, 1, 1, 7, "THMAGS00", "lam3" }
  ,{ 649, 1, 1, 7, "THMAGS00", "ahsat3" }
  ,{ 650, 1, 1, 7, "THMAGS00", "tempBulbC" }
  ,{ 651, 1, 1, 7, "THMAGS00", "tempDewC" }
  ,{ 652, 1, 1, 4, "THMAMX000", "dm2" }
  ,{ 653, 1, 1, 4, "THMAMX000", "rh2" }
  ,{ 654, 1, 1, 4, "THMAMX000", "p2" }
  ,{ 655, 1, 1, 4, "THMAMX000", "t2" }
  ,{ 656, 1, 1, 1, "ACMCTFINT2", "mamfr3" }
  ,{ 657, 1, 1, 1, "ACMCTFINT2", "marh3" }
  ,{ 658, 1, 1, 1, "ACMCTFINT2", "map3" }
  ,{ 659, 1, 1, 1, "ACMCTFINT2", "mat3" }
  ,{ 660, 1, 3, 4, "THMAMX000", "ah_1" }
  ,{ 663, 1, 3, 4, "THMAMX000", "hspe_1" }
  ,{ 666, 1, 1, 8, "THMAGS00", "dm1" }
  ,{ 667, 1, 1, 8, "THMAGS00", "rh1" }
  ,{ 668, 1, 1, 8, "THMAGS00", "p1" }
  ,{ 669, 1, 1, 8, "THMAGS00", "t1" }
  ,{ 670, 1, 1, 8, "THMAGS00", "sig" }
  ,{ 671, 1, 1, 8, "THMAGS00", "ah3" }
  ,{ 672, 1, 1, 8, "THMAGS00", "hspe3" }
  ,{ 673, 1, 1, 8, "THMAGS00", "rho3" }
  ,{ 674, 1, 1, 8, "THMAGS00", "mu3" }
  ,{ 675, 1, 1, 8, "THMAGS00", "cp3" }
  ,{ 676, 1, 1, 8, "THMAGS00", "lam3" }
  ,{ 677, 1, 1, 8, "THMAGS00", "ahsat3" }
  ,{ 678, 1, 1, 8, "THMAGS00", "tempBulbC" }
  ,{ 679, 1, 1, 8, "THMAGS00", "tempDewC" }
  ,{ 680, 1, 1, 5, "THMAMX000", "dm2" }
  ,{ 681, 1, 1, 5, "THMAMX000", "rh2" }
  ,{ 682, 1, 1, 5, "THMAMX000", "p2" }
  ,{ 683, 1, 1, 5, "THMAMX000", "t2" }
  ,{ 684, 1, 1, 1, "ACMCTFTOP2", "mamfr3" }
  ,{ 685, 1, 1, 1, "ACMCTFTOP2", "marh3" }
  ,{ 686, 1, 1, 1, "ACMCTFTOP2", "map3" }
  ,{ 687, 1, 1, 1, "ACMCTFTOP2", "mat3" }
  ,{ 688, 1, 3, 5, "THMAMX000", "ah_1" }
  ,{ 691, 1, 3, 5, "THMAMX000", "hspe_1" }
  ,{ 694, 1, 1, 9, "THMAGS00", "sig" }
  ,{ 695, 1, 1, 9, "THMAGS00", "ah3" }
  ,{ 696, 1, 1, 9, "THMAGS00", "hspe3" }
  ,{ 697, 1, 1, 9, "THMAGS00", "rho3" }
  ,{ 698, 1, 1, 9, "THMAGS00", "mu3" }
  ,{ 699, 1, 1, 9, "THMAGS00", "cp3" }
  ,{ 700, 1, 1, 9, "THMAGS00", "lam3" }
  ,{ 701, 1, 1, 9, "THMAGS00", "ahsat3" }
  ,{ 702, 1, 1, 9, "THMAGS00", "tempBulbC" }
  ,{ 703, 1, 1, 9, "THMAGS00", "tempDewC" }
  ,{ 704, 1, 1, 1, "ACMCTF0", "areaf" }
  ,{ 705, 1, 1, 1, "ACMCTF0", "arear" }
  ,{ 706, 1, 1, 1, "ACMCTF0", "extarea" }
  ,{ 707, 1, 1, 1, "ACMCTF0", "totpow" }
  ,{ 708, 1, 1, 1, "ACMCTF0", "cpheat" }
  ,{ 709, 1, 1, 1, "ACMCTF0", "ratio" }
  ,{ 710, 1, 1, 1, "ACMCTF0", "condmfr" }
  ,{ 711, 1, 1, 1, "ACMCTF0", "refvol" }
  ,{ 712, 1, 1, 1, "ACMCTF0", "massInt" }
  ,{ 713, 1, 1, 1, "ACMCTF0", "masstot" }
  ,{ 714, 1, 1, 1, "ACMCTFINT1", "dmh5" }
  ,{ 715, 1, 1, 1, "ACMCTFINT1", "dm5" }
  ,{ 716, 1, 1, 1, "ACMCTFINT2", "p1" }
  ,{ 717, 1, 1, 1, "ACMCTFINT2", "rho1" }
  ,{ 718, 0, 1, 1, "ACMCTFINT2", "com1" }
  ,{ 719, 1, 1, 1, "ACMCTFINT1", "mamfr4" }
  ,{ 720, 1, 1, 1, "ACMCTFINT1", "maxh4" }
  ,{ 721, 1, 1, 1, "ACMCTFINT1", "map4" }
  ,{ 722, 1, 1, 1, "ACMCTFINT1", "mat4" }
  ,{ 723, 1, 1, 1, "ACMCTFINT1", "y4" }
  ,{ 724, 1, 1, 1, "ACMCTFINT1", "mctfindex4" }
  ,{ 725, 1, 1, 1, "ACMCTFTOP2", "p2" }
  ,{ 726, 1, 1, 1, "ACMCTFTOP2", "rho2" }
  ,{ 727, 0, 1, 1, "ACMCTFTOP2", "com2" }
  ,{ 728, 1, 1, 1, "ACMCTFINT2", "dmh4" }
  ,{ 729, 1, 1, 1, "ACMCTFINT2", "dm4" }
  ,{ 730, 1, 1, 1, "ACMCTFINT2", "mamfr5" }
  ,{ 731, 1, 1, 1, "ACMCTFINT2", "maxh5" }
  ,{ 732, 1, 1, 1, "ACMCTFINT2", "map5" }
  ,{ 733, 1, 1, 1, "ACMCTFINT2", "mat5" }
  ,{ 734, 0, 1, 1, "ACMCTFINT2", "y5" }
  ,{ 735, 1, 1, 1, "ACMCTFINT2", "mctfindex5" }
  ,{ 736, 1, 1, 1, "ACMCTFINT2", "massInt" }
  ,{ 737, 1, 2, 1, "ACMCTFINT2", "pstate_1" }
  ,{ 739, 1, 2, 1, "ACMCTFINT2", "rhostate_1" }
  ,{ 741, 1, 3, 1, "ACMCTFINT2", "pint_1" }
  ,{ 744, 1, 3, 1, "ACMCTFINT2", "rhoint_1" }
  ,{ 747, 1, 3, 1, "ACMCTFINT2", "tint_1" }
  ,{ 750, 1, 3, 1, "ACMCTFINT2", "xint_1" }
  ,{ 753, 1, 3, 1, "ACMCTFINT2", "alphaInt_1" }
  ,{ 756, 1, 3, 1, "ACMCTFINT2", "shscint_1" }
  ,{ 759, 1, 3, 1, "ACMCTFINT2", "dmint_1" }
  ,{ 762, 1, 3, 1, "ACMCTFINT2", "twall_1" }
  ,{ 765, 1, 3, 1, "ACMCTFINT2", "hfref_1" }
  ,{ 768, 1, 3, 1, "ACMCTFINT2", "hfah_1" }
  ,{ 771, 1, 3, 1, "ACMCTFINT2", "hint_1" }
  ,{ 774, 1, 3, 1, "ACMCTFINT2", "region_1" }
  ,{ 777, 1, 2, 1, "ACMCTFTOP2", "pstate_1" }
  ,{ 779, 1, 2, 1, "ACMCTFTOP2", "rhostate_1" }
  ,{ 781, 1, 1, 1, "ACMCTFTOP2", "tint4" }
  ,{ 782, 1, 1, 1, "ACMCTFTOP2", "x4" }
  ,{ 783, 1, 1, 1, "ACMCTFTOP2", "alpha4" }
  ,{ 784, 1, 1, 1, "ACMCTFTOP2", "shsc4" }
  ,{ 785, 1, 1, 1, "ACMCTFTOP2", "condl" }
  ,{ 786, 1, 1, 1, "ACMCTFTOP2", "massInt" }
  ,{ 787, 1, 3, 1, "ACMCTFTOP2", "pint_1" }
  ,{ 790, 1, 3, 1, "ACMCTFTOP2", "rhoint_1" }
  ,{ 793, 1, 3, 1, "ACMCTFTOP2", "tint_1" }
  ,{ 796, 1, 3, 1, "ACMCTFTOP2", "xint_1" }
  ,{ 799, 1, 3, 1, "ACMCTFTOP2", "alphaInt_1" }
  ,{ 802, 1, 3, 1, "ACMCTFTOP2", "shscint_1" }
  ,{ 805, 1, 3, 1, "ACMCTFTOP2", "dmint_1" }
  ,{ 808, 1, 3, 1, "ACMCTFTOP2", "twall_1" }
  ,{ 811, 1, 3, 1, "ACMCTFTOP2", "hfref_1" }
  ,{ 814, 1, 3, 1, "ACMCTFTOP2", "hfah_1" }
  ,{ 817, 1, 3, 1, "ACMCTFTOP2", "hint_1" }
  ,{ 820, 1, 3, 1, "ACMCTFTOP2", "region_1" }
  ,{ 823, 1, 1, 1, "ACMCTFREF1", "mamfr4" }
  ,{ 824, 0, 1, 1, "ACMCTFREF1", "maxh4" }
  ,{ 825, 1, 1, 1, "ACMCTFREF1", "map4" }
  ,{ 826, 1, 1, 1, "ACMCTFREF1", "mat4" }
  ,{ 827, 1, 1, 1, "ACMCTFREF1", "y4" }
  ,{ 828, 0, 1, 1, "ACMCTFREF1", "mctfindex" }
  ,{ 829, 1, 1, 1, "ACMCTFREF1", "massInt" }
  ,{ 830, 1, 2, 1, "ACMCTFREF1", "pstate_1" }
  ,{ 832, 1, 2, 1, "ACMCTFREF1", "rhostate_1" }
  ,{ 834, 1, 3, 1, "ACMCTFREF1", "pint_1" }
  ,{ 837, 1, 3, 1, "ACMCTFREF1", "rhoint_1" }
  ,{ 840, 1, 3, 1, "ACMCTFREF1", "tint_1" }
  ,{ 843, 1, 3, 1, "ACMCTFREF1", "xint_1" }
  ,{ 846, 1, 3, 1, "ACMCTFREF1", "alphaInt_1" }
  ,{ 849, 1, 3, 1, "ACMCTFREF1", "shscint_1" }
  ,{ 852, 1, 3, 1, "ACMCTFREF1", "dmint_1" }
  ,{ 855, 1, 3, 1, "ACMCTFREF1", "twall_1" }
  ,{ 858, 1, 3, 1, "ACMCTFREF1", "hfref_1" }
  ,{ 861, 1, 3, 1, "ACMCTFREF1", "hfah_1" }
  ,{ 864, 1, 3, 1, "ACMCTFREF1", "hint_1" }
  ,{ 867, 1, 3, 1, "ACMCTFREF1", "region_1" }
  ,{ 870, 1, 1, 1, "ACMCTFINT1", "massInt" }
  ,{ 871, 1, 2, 1, "ACMCTFINT1", "pstate_1" }
  ,{ 873, 1, 2, 1, "ACMCTFINT1", "rhostate_1" }
  ,{ 875, 1, 3, 1, "ACMCTFINT1", "pint_1" }
  ,{ 878, 1, 3, 1, "ACMCTFINT1", "rhoint_1" }
  ,{ 881, 1, 3, 1, "ACMCTFINT1", "tint_1" }
  ,{ 884, 1, 3, 1, "ACMCTFINT1", "xint_1" }
  ,{ 887, 1, 3, 1, "ACMCTFINT1", "alphaInt_1" }
  ,{ 890, 1, 3, 1, "ACMCTFINT1", "shscint_1" }
  ,{ 893, 1, 3, 1, "ACMCTFINT1", "dmint_1" }
  ,{ 896, 1, 3, 1, "ACMCTFINT1", "twall_1" }
  ,{ 899, 1, 3, 1, "ACMCTFINT1", "hfref_1" }
  ,{ 902, 1, 3, 1, "ACMCTFINT1", "hfah_1" }
  ,{ 905, 1, 3, 1, "ACMCTFINT1", "hint_1" }
  ,{ 908, 1, 3, 1, "ACMCTFINT1", "region_1" }
  ,{ 911, 1, 1, 1, "ACUCPF0", "areaf" }
  ,{ 912, 1, 1, 1, "ACUCPF0", "arear" }
  ,{ 913, 1, 1, 1, "ACUCPF0", "extarea" }
  ,{ 914, 1, 1, 1, "ACUCPF0", "totpow" }
  ,{ 915, 1, 1, 1, "ACUCPF0", "cpheat" }
  ,{ 916, 1, 1, 1, "ACUCPF0", "ratio" }
  ,{ 917, 1, 1, 1, "ACUCPF0", "condmfr" }
  ,{ 918, 1, 1, 1, "ACUCPF0", "refvol" }
  ,{ 919, 1, 1, 1, "ACUCPF0", "massInt" }
  ,{ 920, 1, 1, 1, "ACUCPF0", "masstot" }
  ,{ 921, 1, 1, 1, "ACUCPFINT1", "dmh5" }
  ,{ 922, 1, 1, 1, "ACUCPFINT1", "dm5" }
  ,{ 923, 1, 1, 1, "ACUCPFEND1", "p1" }
  ,{ 924, 1, 1, 1, "ACUCPFEND1", "rho1" }
  ,{ 925, 0, 1, 1, "ACUCPFEND1", "com1" }
  ,{ 926, 1, 1, 1, "ACUCPFINT1", "mamfr4" }
  ,{ 927, 1, 1, 1, "ACUCPFINT1", "maxh4" }
  ,{ 928, 1, 1, 1, "ACUCPFINT1", "map4" }
  ,{ 929, 1, 1, 1, "ACUCPFINT1", "mat4" }
  ,{ 930, 1, 1, 1, "ACUCPFINT1", "abs4" }
  ,{ 931, 1, 1, 1, "ACUCPFINT1", "ucpfindex4" }
  ,{ 932, 1, 2, 1, "ACUCPFEND1", "pstate_1" }
  ,{ 934, 1, 2, 1, "ACUCPFEND1", "rhostate_1" }
  ,{ 936, 1, 1, 1, "ACUCPFEND1", "tint4" }
  ,{ 937, 1, 1, 1, "ACUCPFEND1", "xint4" }
  ,{ 938, 1, 1, 1, "ACUCPFEND1", "alpha4" }
  ,{ 939, 1, 1, 1, "ACUCPFEND1", "shsc4" }
  ,{ 940, 1, 1, 1, "ACUCPFEND1", "eval" }
  ,{ 941, 1, 1, 1, "ACUCPFEND1", "massInt" }
  ,{ 942, 1, 3, 1, "ACUCPFEND1", "pint_1" }
  ,{ 945, 1, 3, 1, "ACUCPFEND1", "rhoint_1" }
  ,{ 948, 1, 3, 1, "ACUCPFEND1", "tint_1" }
  ,{ 951, 1, 3, 1, "ACUCPFEND1", "xint_1" }
  ,{ 954, 1, 3, 1, "ACUCPFEND1", "alphaInt_1" }
  ,{ 957, 1, 3, 1, "ACUCPFEND1", "shscint_1" }
  ,{ 960, 1, 3, 1, "ACUCPFEND1", "dmint_1" }
  ,{ 963, 1, 3, 1, "ACUCPFEND1", "twall_1" }
  ,{ 966, 1, 3, 1, "ACUCPFEND1", "dhint_1" }
  ,{ 969, 1, 3, 1, "ACUCPFEND1", "dhext_1" }
  ,{ 972, 1, 3, 1, "ACUCPFEND1", "hint_1" }
  ,{ 975, 1, 3, 1, "ACUCPFEND1", "region_1" }
  ,{ 978, 1, 1, 2, "ACMAS0000", "dms5" }
  ,{ 979, 1, 1, 2, "ACMAS0000", "rh" }
  ,{ 980, 1, 1, 2, "ACMAS0000", "p5" }
  ,{ 981, 1, 1, 2, "ACMAS0000", "t5" }
  ,{ 982, 1, 1, 1, "ACUCPFREF1", "mamfr4" }
  ,{ 983, 0, 1, 1, "ACUCPFREF1", "maxh4" }
  ,{ 984, 1, 1, 1, "ACUCPFREF1", "map4" }
  ,{ 985, 1, 1, 1, "ACUCPFREF1", "mat4" }
  ,{ 986, 1, 1, 1, "ACUCPFREF1", "abs4" }
  ,{ 987, 0, 1, 1, "ACUCPFREF1", "ucpfindex" }
  ,{ 988, 1, 1, 1, "ACUCPFINT1", "p1" }
  ,{ 989, 1, 1, 1, "ACUCPFINT1", "rho1" }
  ,{ 990, 0, 1, 1, "ACUCPFINT1", "com1" }
  ,{ 991, 1, 1, 1, "ACUCPFREF1", "dmh5" }
  ,{ 992, 1, 1, 1, "ACUCPFREF1", "dm5" }
  ,{ 993, 1, 1, 1, "ACUCPFREF1", "massInt" }
  ,{ 994, 1, 2, 1, "ACUCPFREF1", "pstate_1" }
  ,{ 996, 1, 2, 1, "ACUCPFREF1", "rhostate_1" }
  ,{ 998, 1, 3, 1, "ACUCPFREF1", "pint_1" }
  ,{ 1001, 1, 3, 1, "ACUCPFREF1", "rhoint_1" }
  ,{ 1004, 1, 3, 1, "ACUCPFREF1", "tint_1" }
  ,{ 1007, 1, 3, 1, "ACUCPFREF1", "xint_1" }
  ,{ 1010, 1, 3, 1, "ACUCPFREF1", "alphaInt_1" }
  ,{ 1013, 1, 3, 1, "ACUCPFREF1", "shscint_1" }
  ,{ 1016, 1, 3, 1, "ACUCPFREF1", "dmint_1" }
  ,{ 1019, 1, 3, 1, "ACUCPFREF1", "twall_1" }
  ,{ 1022, 1, 3, 1, "ACUCPFREF1", "dhint_1" }
  ,{ 1025, 1, 3, 1, "ACUCPFREF1", "dhext_1" }
  ,{ 1028, 1, 3, 1, "ACUCPFREF1", "hint_1" }
  ,{ 1031, 1, 3, 1, "ACUCPFREF1", "region_1" }
  ,{ 1034, 1, 1, 1, "THC000", "se" }
  ,{ 1035, 0, 1, 1, "THC000", "powerCmass" }
  ,{ 1036, 1, 1, 1, "THC000", "calcmass" }
  ,{ 1037, 1, 1, 1, "THC000", "x" }
  ,{ 1038, 1, 1, 2, "THC000", "se" }
  ,{ 1039, 0, 1, 2, "THC000", "powerCmass" }
  ,{ 1040, 1, 1, 2, "THC000", "calcmass" }
  ,{ 1041, 1, 1, 2, "THC000", "x" }
  ,{ 1042, 1, 1, 3, "THC000", "se" }
  ,{ 1043, 0, 1, 3, "THC000", "powerCmass" }
  ,{ 1044, 1, 1, 3, "THC000", "calcmass" }
  ,{ 1045, 1, 1, 3, "THC000", "x" }
  ,{ 1046, 1, 1, 4, "THC000", "se" }
  ,{ 1047, 0, 1, 4, "THC000", "powerCmass" }
  ,{ 1048, 1, 1, 4, "THC000", "calcmass" }
  ,{ 1049, 1, 1, 4, "THC000", "x" }
  ,{ 1050, 1, 1, 6, "TPFGS010", "v" }
  ,{ 1051, 1, 1, 6, "TPFGS010", "temp" }
  ,{ 1052, 1, 1, 6, "TPFGS010", "uspe" }
  ,{ 1053, 1, 1, 6, "TPFGS010", "hspe" }
  ,{ 1054, 1, 1, 6, "TPFGS010", "sspe" }
  ,{ 1055, 1, 1, 6, "TPFGS010", "fspe" }
  ,{ 1056, 1, 1, 6, "TPFGS010", "gspe" }
  ,{ 1057, 1, 1, 6, "TPFGS010", "cp" }
  ,{ 1058, 1, 1, 6, "TPFGS010", "cv" }
  ,{ 1059, 1, 1, 6, "TPFGS010", "xx" }
  ,{ 1060, 1, 1, 6, "TPFGS010", "alpha" }
  ,{ 1061, 1, 1, 6, "TPFGS010", "shsc" }
  ,{ 1062, 1, 1, 6, "TPFGS010", "dpc" }
  ,{ 1063, 1, 1, 6, "TPFGS010", "mu" }
  ,{ 1064, 1, 1, 6, "TPFGS010", "nu" }
  ,{ 1065, 1, 1, 6, "TPFGS010", "lambda" }
  ,{ 1066, 1, 1, 6, "TPFGS010", "pr" }
  ,{ 1067, 1, 1, 6, "TPFGS010", "sigma" }
  ,{ 1068, 1, 1, 6, "TPFGS010", "region" }
  ,{ 1069, 1, 1, 6, "TPFGS010", "wOil" }
  ,{ 1070, 1, 1, 6, "TPFGS010", "bmod" }
  ,{ 1071, 1, 1, 6, "TPFGS010", "svel" }
  ,{ 1072, 1, 1, 1, "ACUCPFINT1", "massInt" }
  ,{ 1073, 1, 2, 1, "ACUCPFINT1", "pstate_1" }
  ,{ 1075, 1, 2, 1, "ACUCPFINT1", "rhostate_1" }
  ,{ 1077, 1, 3, 1, "ACUCPFINT1", "pint_1" }
  ,{ 1080, 1, 3, 1, "ACUCPFINT1", "rhoint_1" }
  ,{ 1083, 1, 3, 1, "ACUCPFINT1", "tint_1" }
  ,{ 1086, 1, 3, 1, "ACUCPFINT1", "xint_1" }
  ,{ 1089, 1, 3, 1, "ACUCPFINT1", "alphaInt_1" }
  ,{ 1092, 1, 3, 1, "ACUCPFINT1", "shscint_1" }
  ,{ 1095, 1, 3, 1, "ACUCPFINT1", "dmint_1" }
  ,{ 1098, 1, 3, 1, "ACUCPFINT1", "twall_1" }
  ,{ 1101, 1, 3, 1, "ACUCPFINT1", "dhint_1" }
  ,{ 1104, 1, 3, 1, "ACUCPFINT1", "dhext_1" }
  ,{ 1107, 1, 3, 1, "ACUCPFINT1", "hint_1" }
  ,{ 1110, 1, 3, 1, "ACUCPFINT1", "region_1" }
  ,{ 1113, 1, 1, 2, "SAT0", "output" }
  ,{ 1114, 1, 1, 1, "TPFPUCOMPVD0000", "dmhcomp" }
  ,{ 1115, 1, 1, 1, "TPFPUCOMPVD0000", "tau1" }
  ,{ 1116, 1, 1, 1, "TPFPUCOMPVD0000", "dmeff" }
  ,{ 1117, 1, 1, 1, "TPFPUCOMPVD0000", "dmheff" }
  ,{ 1118, 1, 1, 1, "TPFPUCOMPVD0000", "mecheff" }
  ,{ 1119, 1, 1, 1, "TPFPUCOMPVD0000", "disp" }
  ,{ 1120, 1, 1, 1, "TPFPUCOMPVD0000", "xm" }
  ,{ 1121, 1, 1, 1, "TPFPUCOMPVD0000", "xn" }
  ,{ 1122, 1, 1, 1, "TPFPUCOMPVD0000", "xh" }
  ,{ 1123, 1, 1, 2, "ACMAS0000", "ah" }
  ,{ 1124, 1, 1, 2, "ACMAS0000", "hspe" }
  ,{ 1125, 1, 1, 10, "CONS00", "out" }
  ,{ 1126, 1, 1, 10, "CONS00", "k0GEN" }
  ,{ 1127, 1, 1, 2, "SAT0", "xmax0GEN" }
  ,{ 1128, 1, 1, 2, "SAT0", "xmin0GEN" }
};

#if !defined(AME_IMPLICIT_MODEL_ACCEPTED) && (AME_MODEL_ISEXPLICIT == 0)
#error "Implicit model not supported for the current interface."
#endif


/* ============================================================== */
/* If the interface needs linearisation (cosim and Amesim) */

#ifndef AME_NO_LA
#ifndef AME_NEED_LINEAR_ANALYSIS
#define AME_NEED_LINEAR_ANALYSIS
#endif
#endif

#if( AME_MODEL_ISEXPLICIT == 1)
#define AMEfuncPerturb LPerturbIfNecessary
#else
#define AMEfuncPerturb DPerturbIfNecessary
#endif

#ifdef AME_ADVANCEDDEBUG
static void AME_POST_SUBMODCALL_WITH_DISCON(AMESIMSYSTEM *amesys, int *flag, int *sflag, int *oflag, int *panic, char *submodelname, int instancenum)
{
   if(*sflag < 3)*sflag = getnfg_();
#ifdef AME_NEED_LINEAR_ANALYSIS
   if(*flag == 5)
   {
      AMEfuncPerturb(amesys, flag);
   }
   else if(*oflag != 5)
   {
      resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic);
   }
#else
   resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic);
#endif
}

static void AME_POST_SUBMODCALL_NO_DISCON(AMESIMSYSTEM *amesys, int *flag)
{
#ifdef AME_NEED_LINEAR_ANALYSIS
   if(*flag == 5)
   {
      AMEfuncPerturb(amesys, flag);
   }
#endif
}
#endif


#ifndef AME_ADVANCEDDEBUG
#ifdef AME_NEED_LINEAR_ANALYSIS
/* Typically for normal runs and cosim */
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) if(*sflag < 3)*sflag = getnfg_(); if(*flag == 5) AMEfuncPerturb(amesys, flag); else if(*oflag != 5) resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic)
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag) if(*flag == 5) AMEfuncPerturb(amesys, flag)
#else
/* Typically for code exchange (simulink for instance) */
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) if(*sflag < 3)*sflag = getnfg_(); resdis(amesys, flag, sflag, oflag,submodelname,instancenum,panic)
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag)
#endif
#endif

#ifdef AMERT
/* We dont need LA nor resdis for real-time - so set them to (almost) empty macros. (reset sflag to orig value "oflag") */
#undef AME_POST_SUBMODCALL_WITH_DISCON
#undef AME_POST_SUBMODCALL_NO_DISCON
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) *sflag = *oflag
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag)
#endif

/* ============================================================== */

#ifdef AMERT
double IL_RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_step_ratio=0;
#endif

#ifdef AME_MEMORY_ACCESS_RT_EXPORT
/* For memory access in case of RT target such as dSpace targets */
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.export.h"

static void RT_Get_Watch_Var(AMESIMSYSTEM *amesys)
{
#if (NB_WATCH_VAR>0)
   int i;

   for(i=0; i<NB_WATCH_VAR; i++) {
      RT_Export_Vars[i] = amesys->v[RT_Watch_Vars_Idx[i]];
   }
#endif
}

static void RT_Get_Watch_Param(AMESIMSYSTEM *amesys)
{
#if (NB_WATCH_REAL_PARAM>0) || (NB_WATCH_INT_PARAM>0)
   int i;

   for(i=0; i<NB_WATCH_REAL_PARAM; i++) {
      RT_Export_RealParam[i] = amesys->pModel->realParamArray[RT_Watch_RP_Idx[i]];
   }
   for(i=0; i<NB_WATCH_INT_PARAM; i++) {
      RT_Export_IntParam[i] = amesys->pModel->integerParamArray[RT_Watch_IP_Idx[i]];
   }
#endif
}

static void RT_Set_Watch_Param(AMESIMSYSTEM *amesys)
{
#if (NB_WATCH_REAL_PARAM>0) || (NB_WATCH_INT_PARAM>0)
   int i;

   for(i=0; i<NB_WATCH_REAL_PARAM; i++) {
      amesys->pModel->realParamArray[RT_Watch_RP_Idx[i]] = RT_Export_RealParam[i];
   }
   for(i=0; i<NB_WATCH_INT_PARAM; i++) {
      amesys->pModel->integerParamArray[RT_Watch_IP_Idx[i]] = RT_Export_IntParam[i];
   }
#endif
}

#endif

#ifdef AME_INPUT_IN_MEMORY
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.sim.h"
#endif

#if( AME_MODEL_ISEXPLICIT == 0 )
#define LRW (40+9*AME_NBOF_SOLVER_STATES+AME_NBOF_SOLVER_STATES*AME_NBOF_SOLVER_STATES)
#define LIW (21+AME_NBOF_SOLVER_STATES)
#endif

// Submodel RSTAT . 1
// Submodel TPF_FP01 . 1
// Submodel THSD00 . 1
// Submodel THSD00 . 2
// Submodel ACMCTF0 . 1
// Submodel ACUCPF0 . 1
// Submodel CONS00 . 1
// variable out (Basic var)
static const int EVIA_V0[7] = {0, -1, 0, -1, 1, 1, 1};
// Submodel CONS00 . 2
// variable out (Basic var)
static const int EVIA_V1[7] = {2, -1, 1, -1, 1, 1, 1};
// Submodel THHF0 . 1
// variable dh1 (Fixed var)
static const int EVIA_V2[7] = {42, -1, 2, -1, 1, 1, 1};
// Submodel THHF0 . 2
// variable dh1 (Fixed var)
static const int EVIA_V3[7] = {27, -1, 3, -1, 1, 1, 1};
// Submodel THHF0 . 3
// variable dh1 (Fixed var)
static const int EVIA_V4[7] = {8, -1, 4, -1, 1, 1, 1};
// Submodel THHF0 . 4
// variable dh1 (Fixed var)
static const int EVIA_V5[7] = {54, -1, 5, -1, 1, 1, 1};
// Submodel CONS00 . 3
// variable out (Basic var)
static const int EVIA_V6[7] = {102, -1, 6, -1, 1, 1, 1};
// Submodel CONS00 . 4
// variable out (Basic var)
static const int EVIA_V7[7] = {104, -1, 7, -1, 1, 1, 1};
// Submodel CONS00 . 5
// variable out (Basic var)
static const int EVIA_V8[7] = {106, -1, 8, -1, 1, 1, 1};
// Submodel ACMAS0000 . 1
// variable tsig (Basic var)
static const int EVIA_V9[7] = {102, -1, 9, -1, 1, 1, 1};
// variable psig (Basic var)
static const int EVIA_V10[7] = {104, -1, 10, -1, 1, 1, 1};
// variable rhsig (Basic var)
static const int EVIA_V11[7] = {106, -1, 11, -1, 1, 1, 1};
// variable flowSignal (Basic var)
static const int EVIA_V12[7] = {108, -1, 12, -1, 1, 1, 1};
// variable dms5 (Multiline var)
static const int EVIA_V13[7] = {109, -1, 13, -1, 1, 1, 1};
// variable rh (Multiline var)
static const int EVIA_V14[7] = {110, -1, 14, -1, 1, 1, 1};
// variable p5 (Multiline var)
static const int EVIA_V15[7] = {111, -1, 15, -1, 1, 1, 1};
// variable t5 (Multiline var)
static const int EVIA_V16[7] = {112, -1, 16, -1, 1, 1, 1};
// Submodel CONS00 . 6
// variable out (Basic var)
static const int EVIA_V17[7] = {127, -1, 17, -1, 1, 1, 1};
// Submodel CONS00 . 7
// variable out (Basic var)
static const int EVIA_V18[7] = {129, -1, 18, -1, 1, 1, 1};
// Submodel CONS00 . 8
// variable out (Basic var)
static const int EVIA_V19[7] = {131, -1, 19, -1, 1, 1, 1};
// Submodel CONS00 . 9
// variable out (Basic var)
static const int EVIA_V20[7] = {133, -1, 20, -1, 1, 1, 1};
// Submodel TPFGS010 . 1
// variable p1 (Multiline var)
static const int EVIA_V21[7] = {65, -1, 21, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V22[7] = {66, -1, 22, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V23[7] = {67, -1, 23, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V24[7] = {68, -1, 24, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V25[7] = {69, -1, 25, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V26[7] = {70, -1, 26, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V27[7] = {71, -1, 27, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V28[7] = {190, -1, 28, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V29[7] = {194, -1, 29, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V30[7] = {195, -1, 30, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V31[7] = {196, -1, 31, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V32[7] = {197, -1, 32, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V33[7] = {191, -1, 33, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V34[7] = {192, -1, 34, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V35[7] = {193, -1, 35, -1, 1, 1, 1};
// Submodel TPFGS010 . 2
// variable p1 (Multiline var)
static const int EVIA_V36[7] = {86, -1, 36, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V37[7] = {87, -1, 37, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V38[7] = {88, -1, 38, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V39[7] = {89, -1, 39, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V40[7] = {90, -1, 40, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V41[7] = {91, -1, 41, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V42[7] = {92, -1, 42, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V43[7] = {220, -1, 43, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V44[7] = {224, -1, 44, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V45[7] = {225, -1, 45, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V46[7] = {226, -1, 46, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V47[7] = {227, -1, 47, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V48[7] = {221, -1, 48, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V49[7] = {222, -1, 49, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V50[7] = {223, -1, 50, -1, 1, 1, 1};
// Submodel TPFGS010 . 3
// variable p1 (Multiline var)
static const int EVIA_V51[7] = {266, -1, 51, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V52[7] = {267, -1, 52, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V53[7] = {268, -1, 53, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V54[7] = {262, -1, 54, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V55[7] = {263, -1, 55, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V56[7] = {264, -1, 56, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V57[7] = {265, -1, 57, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V58[7] = {269, -1, 58, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V59[7] = {273, -1, 59, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V60[7] = {274, -1, 60, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V61[7] = {275, -1, 61, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V62[7] = {276, -1, 62, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V63[7] = {270, -1, 63, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V64[7] = {271, -1, 64, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V65[7] = {272, -1, 65, -1, 1, 1, 1};
// Submodel TPFGS010 . 4
// variable p1 (Multiline var)
static const int EVIA_V66[7] = {135, -1, 66, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V67[7] = {136, -1, 67, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V68[7] = {137, -1, 68, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V69[7] = {138, -1, 69, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V70[7] = {139, -1, 70, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V71[7] = {140, -1, 71, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V72[7] = {141, -1, 72, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V73[7] = {251, -1, 73, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V74[7] = {302, -1, 74, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V75[7] = {303, -1, 75, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V76[7] = {304, -1, 76, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V77[7] = {305, -1, 77, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V78[7] = {299, -1, 78, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V79[7] = {300, -1, 79, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V80[7] = {301, -1, 80, -1, 1, 1, 1};
// Submodel THHS0 . 1
// variable dh1 (Fixed var)
static const int EVIA_V81[7] = {356, -1, 81, -1, 1, 1, 1};
// Submodel GA00 . 1
// variable output (Basic var)
static const int EVIA_V82[7] = {83, -1, 82, -1, 1, 1, 1};
// variable input (Basic var)
static const int EVIA_V83[7] = {0, -1, 83, -1, 1, 1, 1};
// Submodel THMAGS00 . 4
// variable dm1 (Duplicate var)
static const int EVIA_V84[7] = {408, -1, 84, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V85[7] = {409, -1, 85, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V86[7] = {410, -1, 86, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V87[7] = {411, -1, 87, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V88[7] = {412, -1, 88, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V89[7] = {109, -1, 89, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V90[7] = {110, -1, 90, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V91[7] = {111, -1, 91, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V92[7] = {112, -1, 92, -1, 1, 1, 1};
// Submodel GA00 . 3
// variable output (Basic var)
static const int EVIA_V93[7] = {422, -1, 93, -1, 1, 1, 1};
// variable input (Basic var)
static const int EVIA_V94[7] = {2, -1, 94, -1, 1, 1, 1};
// Submodel THHF0 . 5
// variable dh1 (Fixed var)
static const int EVIA_V95[7] = {431, -1, 95, -1, 1, 1, 1};
// Submodel THHF0 . 6
// variable dh1 (Fixed var)
static const int EVIA_V96[7] = {433, -1, 96, -1, 1, 1, 1};
// Submodel THHF0 . 7
// variable dh1 (Fixed var)
static const int EVIA_V97[7] = {435, -1, 97, -1, 1, 1, 1};
// Submodel THHF0 . 8
// variable dh1 (Fixed var)
static const int EVIA_V98[7] = {472, -1, 98, -1, 1, 1, 1};
// Submodel TPFGS010 . 5
// variable p1 (Multiline var)
static const int EVIA_V99[7] = {390, -1, 99, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V100[7] = {391, -1, 100, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V101[7] = {392, -1, 101, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V102[7] = {393, -1, 102, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V103[7] = {394, -1, 103, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V104[7] = {395, -1, 104, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V105[7] = {396, -1, 105, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V106[7] = {473, -1, 106, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V107[7] = {477, -1, 107, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V108[7] = {478, -1, 108, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V109[7] = {479, -1, 109, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V110[7] = {480, -1, 110, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V111[7] = {474, -1, 111, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V112[7] = {475, -1, 112, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V113[7] = {476, -1, 113, -1, 1, 1, 1};
// Submodel THHF0 . 9
// variable dh1 (Fixed var)
static const int EVIA_V114[7] = {541, -1, 114, -1, 1, 1, 1};
// Submodel THHF0 . 10
// variable dh1 (Fixed var)
static const int EVIA_V115[7] = {543, -1, 115, -1, 1, 1, 1};
// Submodel THHF0 . 11
// variable dh1 (Fixed var)
static const int EVIA_V116[7] = {545, -1, 116, -1, 1, 1, 1};
// Submodel THHF0 . 12
// variable dh1 (Fixed var)
static const int EVIA_V117[7] = {547, -1, 117, -1, 1, 1, 1};
// Submodel ACMCTFREF1 . 1
// variable mamfr (Basic var)
static const int EVIA_V118[7] = {408, -1, 118, -1, 1, 1, 1};
// variable marh (Basic var)
static const int EVIA_V119[7] = {409, -1, 119, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V120[7] = {410, -1, 120, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V121[7] = {411, -1, 121, -1, 1, 1, 1};
// variable mamfr2 (Basic var)
static const int EVIA_V122[7] = {620, -1, 122, -1, 1, 1, 1};
// variable marh2 (Basic var)
static const int EVIA_V123[7] = {621, -1, 123, -1, 1, 1, 1};
// variable map2 (Duplicate var)
static const int EVIA_V124[7] = {622, -1, 124, -1, 1, 1, 1};
// variable mat2 (Basic var)
static const int EVIA_V125[7] = {623, -1, 125, -1, 1, 1, 1};
// variable dmh3 (Multiline shared var)
static const int EVIA_V126[7] = {351, -1, 126, -1, 1, 1, 1};
// variable dm3 (Multiline var)
static const int EVIA_V127[7] = {352, -1, 127, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V128[7] = {353, -1, 128, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V129[7] = {354, -1, 129, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V130[7] = {355, -1, 130, -1, 1, 1, 1};
// variable mamfr4 (Duplicate var)
static const int EVIA_V131[7] = {823, -1, 131, -1, 1, 1, 1};
// variable maxh4 (Basic var)
static const int EVIA_V132[7] = {824, -1, 132, -1, 1, 1, 1};
// variable map4 (Duplicate var)
static const int EVIA_V133[7] = {825, -1, 133, -1, 1, 1, 1};
// variable mat4 (Duplicate var)
static const int EVIA_V134[7] = {826, -1, 134, -1, 1, 1, 1};
// variable y4 (Fixed var)
static const int EVIA_V135[7] = {827, -1, 135, -1, 1, 1, 1};
// variable mctfindex (Fixed var)
static const int EVIA_V136[7] = {828, -1, 136, -1, 1, 1, 1};
// variable p5 (Explicit state)
static const int EVIA_V137[7] = {221, 8, 137, 138, 1, 1, 1};
// variable rho5 (Explicit state)
static const int EVIA_V138[7] = {222, 9, 139, 140, 1, 1, 1};
// variable com5 (Fixed var)
static const int EVIA_V139[7] = {223, -1, 141, -1, 1, 1, 1};
// variable dmh5 (Basic var)
static const int EVIA_V140[7] = {224, -1, 142, -1, 1, 1, 1};
// variable dm5 (Basic var)
static const int EVIA_V141[7] = {225, -1, 143, -1, 1, 1, 1};
// Submodel ACMCTFINT1 . 1
// variable mamfr (Basic var)
static const int EVIA_V142[7] = {823, -1, 144, -1, 1, 1, 1};
// variable maxh (Basic var)
static const int EVIA_V143[7] = {824, -1, 145, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V144[7] = {825, -1, 146, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V145[7] = {826, -1, 147, -1, 1, 1, 1};
// variable hbot (Basic var)
static const int EVIA_V146[7] = {827, -1, 148, -1, 1, 1, 1};
// variable mctfindex (Basic var)
static const int EVIA_V147[7] = {828, -1, 149, -1, 1, 1, 1};
// variable p2 (Explicit state)
static const int EVIA_V148[7] = {368, 18, 150, 151, 1, 1, 1};
// variable rho2 (Explicit state)
static const int EVIA_V149[7] = {369, 19, 152, 153, 1, 1, 1};
// variable com2 (Fixed var)
static const int EVIA_V150[7] = {370, -1, 154, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V151[7] = {371, -1, 155, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V152[7] = {372, -1, 156, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V153[7] = {628, -1, 157, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V154[7] = {629, -1, 158, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V155[7] = {630, -1, 159, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V156[7] = {631, -1, 160, -1, 1, 1, 1};
// variable mamfr4 (Duplicate var)
static const int EVIA_V157[7] = {719, -1, 161, -1, 1, 1, 1};
// variable maxh4 (Duplicate var)
static const int EVIA_V158[7] = {720, -1, 162, -1, 1, 1, 1};
// variable map4 (Duplicate var)
static const int EVIA_V159[7] = {721, -1, 163, -1, 1, 1, 1};
// variable mat4 (Duplicate var)
static const int EVIA_V160[7] = {722, -1, 164, -1, 1, 1, 1};
// variable y4 (Multiline var)
static const int EVIA_V161[7] = {723, -1, 165, -1, 1, 1, 1};
// variable mctfindex4 (Duplicate var)
static const int EVIA_V162[7] = {724, -1, 166, -1, 1, 1, 1};
// variable dmh5 (Multiline shared var)
static const int EVIA_V163[7] = {714, -1, 167, -1, 1, 1, 1};
// variable dm5 (Multiline var)
static const int EVIA_V164[7] = {715, -1, 168, -1, 1, 1, 1};
// variable p5 (Basic var)
static const int EVIA_V165[7] = {716, -1, 169, -1, 1, 1, 1};
// variable rho5 (Basic var)
static const int EVIA_V166[7] = {717, -1, 170, -1, 1, 1, 1};
// variable com5 (Basic var)
static const int EVIA_V167[7] = {718, -1, 171, -1, 1, 1, 1};
// Submodel TPFGS010 . 6
// variable p1 (Multiline var)
static const int EVIA_V168[7] = {378, -1, 172, -1, 1, 1, 1};
// variable rho1 (Multiline shared var)
static const int EVIA_V169[7] = {379, -1, 173, -1, 1, 1, 1};
// variable com1 (Multiline shared var)
static const int EVIA_V170[7] = {380, -1, 174, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V171[7] = {381, -1, 175, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V172[7] = {382, -1, 176, -1, 1, 1, 1};
// variable vol1 (Basic var)
static const int EVIA_V173[7] = {383, -1, 177, -1, 1, 1, 1};
// variable dvol1 (Basic var)
static const int EVIA_V174[7] = {384, -1, 178, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V175[7] = {250, -1, 179, -1, 1, 1, 1};
// variable dmh3 (Duplicate var)
static const int EVIA_V176[7] = {328, -1, 180, -1, 1, 1, 1};
// variable dm3 (Duplicate var)
static const int EVIA_V177[7] = {329, -1, 181, -1, 1, 1, 1};
// variable vol3 (Duplicate var)
static const int EVIA_V178[7] = {330, -1, 182, -1, 1, 1, 1};
// variable dvol3 (Duplicate var)
static const int EVIA_V179[7] = {331, -1, 183, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V180[7] = {332, -1, 184, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V181[7] = {333, -1, 185, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V182[7] = {334, -1, 186, -1, 1, 1, 1};
// Submodel ACUCPFINT1 . 1
// variable p1 (Explicit state)
static const int EVIA_V183[7] = {988, 74, 187, 188, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V184[7] = {989, 75, 189, 190, 1, 1, 1};
// variable com1 (Fixed var)
static const int EVIA_V185[7] = {990, -1, 191, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V186[7] = {991, -1, 192, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V187[7] = {992, -1, 193, -1, 1, 1, 1};
// variable mamfr (Basic var)
static const int EVIA_V188[7] = {982, -1, 194, -1, 1, 1, 1};
// variable maxh (Basic var)
static const int EVIA_V189[7] = {983, -1, 195, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V190[7] = {984, -1, 196, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V191[7] = {985, -1, 197, -1, 1, 1, 1};
// variable abs2 (Basic var)
static const int EVIA_V192[7] = {986, -1, 198, -1, 1, 1, 1};
// variable ucpfindex (Basic var)
static const int EVIA_V193[7] = {987, -1, 199, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V194[7] = {564, -1, 200, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V195[7] = {565, -1, 201, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V196[7] = {566, -1, 202, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V197[7] = {567, -1, 203, -1, 1, 1, 1};
// variable mamfr4 (Duplicate var)
static const int EVIA_V198[7] = {926, -1, 204, -1, 1, 1, 1};
// variable maxh4 (Duplicate var)
static const int EVIA_V199[7] = {927, -1, 205, -1, 1, 1, 1};
// variable map4 (Duplicate var)
static const int EVIA_V200[7] = {928, -1, 206, -1, 1, 1, 1};
// variable mat4 (Duplicate var)
static const int EVIA_V201[7] = {929, -1, 207, -1, 1, 1, 1};
// variable abs4 (Multiline var)
static const int EVIA_V202[7] = {930, -1, 208, -1, 1, 1, 1};
// variable ucpfindex4 (Duplicate var)
static const int EVIA_V203[7] = {931, -1, 209, -1, 1, 1, 1};
// variable dmh5 (Multiline shared var)
static const int EVIA_V204[7] = {921, -1, 210, -1, 1, 1, 1};
// variable dm5 (Multiline var)
static const int EVIA_V205[7] = {922, -1, 211, -1, 1, 1, 1};
// variable p5 (Basic var)
static const int EVIA_V206[7] = {923, -1, 212, -1, 1, 1, 1};
// variable rho5 (Basic var)
static const int EVIA_V207[7] = {924, -1, 213, -1, 1, 1, 1};
// variable com5 (Basic var)
static const int EVIA_V208[7] = {925, -1, 214, -1, 1, 1, 1};
// Submodel ACMAS0000 . 2
// variable tsig (Basic var)
static const int EVIA_V209[7] = {131, -1, 215, -1, 1, 1, 1};
// variable psig (Basic var)
static const int EVIA_V210[7] = {129, -1, 216, -1, 1, 1, 1};
// variable rhsig (Basic var)
static const int EVIA_V211[7] = {133, -1, 217, -1, 1, 1, 1};
// variable flowSignal (Basic var)
static const int EVIA_V212[7] = {127, -1, 218, -1, 1, 1, 1};
// variable dms5 (Multiline var)
static const int EVIA_V213[7] = {978, -1, 219, -1, 1, 1, 1};
// variable rh (Multiline var)
static const int EVIA_V214[7] = {979, -1, 220, -1, 1, 1, 1};
// variable p5 (Multiline var)
static const int EVIA_V215[7] = {980, -1, 221, -1, 1, 1, 1};
// variable t5 (Multiline var)
static const int EVIA_V216[7] = {981, -1, 222, -1, 1, 1, 1};
// Submodel CONS00 . 10
// variable out (Basic var)
static const int EVIA_V217[7] = {1125, -1, 223, -1, 1, 1, 1};
// Submodel SAT0 . 2
// variable output (Basic var)
static const int EVIA_V218[7] = {1113, -1, 224, -1, 1, 1, 1};
// variable input (Basic var)
static const int EVIA_V219[7] = {1125, -1, 225, -1, 1, 1, 1};
// Submodel OMEGC0 . 1
// variable input (Basic var)
static const int EVIA_V220[7] = {83, -1, 226, -1, 1, 1, 1};
// variable omega (Oneline var)
static const int EVIA_V221[7] = {85, -1, 227, -1, 1, 1, 1};
// Submodel MUL00 . 1
// variable inp1 (Basic var)
static const int EVIA_V222[7] = {412, -1, 228, -1, 1, 1, 1};
// variable outp (Oneline var)
static const int EVIA_V223[7] = {406, -1, 229, -1, 1, 1, 1};
// variable inp3 (Basic var)
static const int EVIA_V224[7] = {422, -1, 230, -1, 1, 1, 1};
// Submodel ACMCTFINT2 . 1
// variable p1 (Explicit state)
static const int EVIA_V225[7] = {716, 33, 231, 232, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V226[7] = {717, 34, 233, 234, 1, 1, 1};
// variable com1 (Fixed var)
static const int EVIA_V227[7] = {718, -1, 235, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V228[7] = {714, -1, 236, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V229[7] = {715, -1, 237, -1, 1, 1, 1};
// variable mamfr (Basic var)
static const int EVIA_V230[7] = {719, -1, 238, -1, 1, 1, 1};
// variable maxh (Basic var)
static const int EVIA_V231[7] = {720, -1, 239, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V232[7] = {721, -1, 240, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V233[7] = {722, -1, 241, -1, 1, 1, 1};
// variable hbot (Basic var)
static const int EVIA_V234[7] = {723, -1, 242, -1, 1, 1, 1};
// variable mctfindex (Basic var)
static const int EVIA_V235[7] = {724, -1, 243, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V236[7] = {656, -1, 244, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V237[7] = {657, -1, 245, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V238[7] = {658, -1, 246, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V239[7] = {659, -1, 247, -1, 1, 1, 1};
// variable dmh4 (Multiline shared var)
static const int EVIA_V240[7] = {728, -1, 248, -1, 1, 1, 1};
// variable dm4 (Multiline var)
static const int EVIA_V241[7] = {729, -1, 249, -1, 1, 1, 1};
// variable p4 (Basic var)
static const int EVIA_V242[7] = {725, -1, 250, -1, 1, 1, 1};
// variable rho4 (Basic var)
static const int EVIA_V243[7] = {726, -1, 251, -1, 1, 1, 1};
// variable com4 (Basic var)
static const int EVIA_V244[7] = {727, -1, 252, -1, 1, 1, 1};
// variable mamfr5 (Duplicate var)
static const int EVIA_V245[7] = {730, -1, 253, -1, 1, 1, 1};
// variable maxh5 (Duplicate var)
static const int EVIA_V246[7] = {731, -1, 254, -1, 1, 1, 1};
// variable map5 (Duplicate var)
static const int EVIA_V247[7] = {732, -1, 255, -1, 1, 1, 1};
// variable mat5 (Duplicate var)
static const int EVIA_V248[7] = {733, -1, 256, -1, 1, 1, 1};
// variable y5 (Multiline var)
static const int EVIA_V249[7] = {734, -1, 257, -1, 1, 1, 1};
// variable mctfindex5 (Duplicate var)
static const int EVIA_V250[7] = {735, -1, 258, -1, 1, 1, 1};
// Submodel ACMCTFTOP2 . 1
// variable mamfr (Basic var)
static const int EVIA_V251[7] = {730, -1, 259, -1, 1, 1, 1};
// variable maxh (Basic var)
static const int EVIA_V252[7] = {731, -1, 260, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V253[7] = {732, -1, 261, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V254[7] = {733, -1, 262, -1, 1, 1, 1};
// variable hbot (Basic var)
static const int EVIA_V255[7] = {734, -1, 263, -1, 1, 1, 1};
// variable mctfindex (Basic var)
static const int EVIA_V256[7] = {735, -1, 264, -1, 1, 1, 1};
// variable p2 (Explicit state)
static const int EVIA_V257[7] = {725, 35, 265, 266, 1, 1, 1};
// variable rho2 (Explicit state)
static const int EVIA_V258[7] = {726, 36, 267, 268, 1, 1, 1};
// variable com2 (Fixed var)
static const int EVIA_V259[7] = {727, -1, 269, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V260[7] = {728, -1, 270, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V261[7] = {729, -1, 271, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V262[7] = {684, -1, 272, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V263[7] = {685, -1, 273, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V264[7] = {686, -1, 274, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V265[7] = {687, -1, 275, -1, 1, 1, 1};
// variable p4 (Explicit state)
static const int EVIA_V266[7] = {191, 6, 276, 277, 1, 1, 1};
// variable rho4 (Explicit state)
static const int EVIA_V267[7] = {192, 7, 278, 279, 1, 1, 1};
// variable com4 (Fixed var)
static const int EVIA_V268[7] = {193, -1, 280, -1, 1, 1, 1};
// variable dmh4 (Basic var)
static const int EVIA_V269[7] = {194, -1, 281, -1, 1, 1, 1};
// variable dm4 (Basic var)
static const int EVIA_V270[7] = {195, -1, 282, -1, 1, 1, 1};
// Submodel ACUCPFREF1 . 1
// variable mamfr (Basic var)
static const int EVIA_V271[7] = {978, -1, 283, -1, 1, 1, 1};
// variable marh (Basic var)
static const int EVIA_V272[7] = {979, -1, 284, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V273[7] = {980, -1, 285, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V274[7] = {981, -1, 286, -1, 1, 1, 1};
// variable p2 (Explicit state)
static const int EVIA_V275[7] = {335, 14, 287, 288, 1, 1, 1};
// variable rho2 (Explicit state)
static const int EVIA_V276[7] = {336, 15, 289, 290, 1, 1, 1};
// variable com2 (Fixed var)
static const int EVIA_V277[7] = {337, -1, 291, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V278[7] = {338, -1, 292, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V279[7] = {339, -1, 293, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V280[7] = {572, -1, 294, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V281[7] = {573, -1, 295, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V282[7] = {574, -1, 296, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V283[7] = {575, -1, 297, -1, 1, 1, 1};
// variable mamfr4 (Duplicate var)
static const int EVIA_V284[7] = {982, -1, 298, -1, 1, 1, 1};
// variable maxh4 (Basic var)
static const int EVIA_V285[7] = {983, -1, 299, -1, 1, 1, 1};
// variable map4 (Duplicate var)
static const int EVIA_V286[7] = {984, -1, 300, -1, 1, 1, 1};
// variable mat4 (Duplicate var)
static const int EVIA_V287[7] = {985, -1, 301, -1, 1, 1, 1};
// variable abs4 (Fixed var)
static const int EVIA_V288[7] = {986, -1, 302, -1, 1, 1, 1};
// variable ucpfindex (Fixed var)
static const int EVIA_V289[7] = {987, -1, 303, -1, 1, 1, 1};
// variable dmh5 (Multiline shared var)
static const int EVIA_V290[7] = {991, -1, 304, -1, 1, 1, 1};
// variable dm5 (Multiline var)
static const int EVIA_V291[7] = {992, -1, 305, -1, 1, 1, 1};
// variable p5 (Basic var)
static const int EVIA_V292[7] = {988, -1, 306, -1, 1, 1, 1};
// variable rho5 (Basic var)
static const int EVIA_V293[7] = {989, -1, 307, -1, 1, 1, 1};
// variable com5 (Basic var)
static const int EVIA_V294[7] = {990, -1, 308, -1, 1, 1, 1};
// Submodel GA00 . 2
// variable output (Basic var)
static const int EVIA_V295[7] = {405, -1, 309, -1, 1, 1, 1};
// variable input (Basic var)
static const int EVIA_V296[7] = {406, -1, 310, -1, 1, 1, 1};
// Submodel SAT0 . 1
// variable output (Basic var)
static const int EVIA_V297[7] = {108, -1, 311, -1, 1, 1, 1};
// variable input (Basic var)
static const int EVIA_V298[7] = {405, -1, 312, -1, 1, 1, 1};
// Submodel ACUCPFEND1 . 1
// variable p1 (Explicit state)
static const int EVIA_V299[7] = {923, 65, 313, 314, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V300[7] = {924, 66, 315, 316, 1, 1, 1};
// variable com1 (Fixed var)
static const int EVIA_V301[7] = {925, -1, 317, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V302[7] = {921, -1, 318, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V303[7] = {922, -1, 319, -1, 1, 1, 1};
// variable mamfr (Basic var)
static const int EVIA_V304[7] = {926, -1, 320, -1, 1, 1, 1};
// variable maxh (Basic var)
static const int EVIA_V305[7] = {927, -1, 321, -1, 1, 1, 1};
// variable map (Basic var)
static const int EVIA_V306[7] = {928, -1, 322, -1, 1, 1, 1};
// variable mat (Basic var)
static const int EVIA_V307[7] = {929, -1, 323, -1, 1, 1, 1};
// variable abs2 (Basic var)
static const int EVIA_V308[7] = {930, -1, 324, -1, 1, 1, 1};
// variable ucpfindex (Basic var)
static const int EVIA_V309[7] = {931, -1, 325, -1, 1, 1, 1};
// variable mamfr3 (Basic var)
static const int EVIA_V310[7] = {596, -1, 326, -1, 1, 1, 1};
// variable marh3 (Basic var)
static const int EVIA_V311[7] = {597, -1, 327, -1, 1, 1, 1};
// variable map3 (Duplicate var)
static const int EVIA_V312[7] = {598, -1, 328, -1, 1, 1, 1};
// variable mat3 (Basic var)
static const int EVIA_V313[7] = {599, -1, 329, -1, 1, 1, 1};
// variable p4 (Explicit state)
static const int EVIA_V314[7] = {270, 10, 330, 331, 1, 1, 1};
// variable rho4 (Explicit state)
static const int EVIA_V315[7] = {271, 11, 332, 333, 1, 1, 1};
// variable com4 (Fixed var)
static const int EVIA_V316[7] = {272, -1, 334, -1, 1, 1, 1};
// variable dmh4 (Basic var)
static const int EVIA_V317[7] = {273, -1, 335, -1, 1, 1, 1};
// variable dm4 (Basic var)
static const int EVIA_V318[7] = {274, -1, 336, -1, 1, 1, 1};
// Submodel TPFP002 . 1
// variable p1 (Explicit state)
static const int EVIA_V319[7] = {62, 0, 337, 338, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V320[7] = {63, 1, 339, 340, 1, 1, 1};
// variable com1 (Multiline var)
static const int EVIA_V321[7] = {64, -1, 341, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V322[7] = {60, -1, 342, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V323[7] = {61, -1, 343, -1, 1, 1, 1};
// variable dmh2 (Multiline shared var)
static const int EVIA_V324[7] = {68, -1, 344, -1, 1, 1, 1};
// variable dm2 (Multiline var)
static const int EVIA_V325[7] = {69, -1, 345, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V326[7] = {65, -1, 346, -1, 1, 1, 1};
// variable rho2 (Basic var)
static const int EVIA_V327[7] = {66, -1, 347, -1, 1, 1, 1};
// variable com2 (Basic var)
static const int EVIA_V328[7] = {67, -1, 348, -1, 1, 1, 1};
// Submodel TPFP000 . 1
// variable p1 (Explicit state)
static const int EVIA_V329[7] = {117, 2, 349, 350, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V330[7] = {118, 3, 351, 352, 1, 1, 1};
// variable cnum1 (Multiline var)
static const int EVIA_V331[7] = {119, -1, 353, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V332[7] = {115, -1, 354, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V333[7] = {116, -1, 355, -1, 1, 1, 1};
// variable p2 (Duplicate var)
static const int EVIA_V334[7] = {93, -1, 356, -1, 1, 1, 1};
// variable rho2 (Duplicate var)
static const int EVIA_V335[7] = {94, -1, 357, -1, 1, 1, 1};
// variable cnum2 (Duplicate var)
static const int EVIA_V336[7] = {95, -1, 358, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V337[7] = {96, -1, 359, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V338[7] = {97, -1, 360, -1, 1, 1, 1};
// Submodel TPFP001 . 1
// variable dmh1 (Multiline shared var)
static const int EVIA_V339[7] = {138, -1, 361, -1, 1, 1, 1};
// variable dm1 (Multiline var)
static const int EVIA_V340[7] = {139, -1, 362, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V341[7] = {135, -1, 363, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V342[7] = {136, -1, 364, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V343[7] = {137, -1, 365, -1, 1, 1, 1};
// variable p2 (Explicit state)
static const int EVIA_V344[7] = {144, 4, 366, 367, 1, 1, 1};
// variable rho2 (Explicit state)
static const int EVIA_V345[7] = {145, 5, 368, 369, 1, 1, 1};
// variable com2 (Multiline var)
static const int EVIA_V346[7] = {146, -1, 370, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V347[7] = {142, -1, 371, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V348[7] = {143, -1, 372, -1, 1, 1, 1};
// Submodel SSINK . 1
// variable sink (Basic var)
static const int EVIA_V349[7] = {190, -1, 373, -1, 1, 1, 1};
// Submodel SSINK . 2
// variable sink (Basic var)
static const int EVIA_V350[7] = {220, -1, 374, -1, 1, 1, 1};
// Submodel SSINK . 5
// variable sink (Basic var)
static const int EVIA_V351[7] = {269, -1, 375, -1, 1, 1, 1};
// Submodel TPFP002 . 2
// variable p1 (Explicit state)
static const int EVIA_V352[7] = {332, 12, 376, 377, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V353[7] = {333, 13, 378, 379, 1, 1, 1};
// variable com1 (Multiline var)
static const int EVIA_V354[7] = {334, -1, 380, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V355[7] = {328, -1, 381, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V356[7] = {329, -1, 382, -1, 1, 1, 1};
// variable dmh2 (Multiline shared var)
static const int EVIA_V357[7] = {338, -1, 383, -1, 1, 1, 1};
// variable dm2 (Multiline var)
static const int EVIA_V358[7] = {339, -1, 384, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V359[7] = {335, -1, 385, -1, 1, 1, 1};
// variable rho2 (Basic var)
static const int EVIA_V360[7] = {336, -1, 386, -1, 1, 1, 1};
// variable com2 (Basic var)
static const int EVIA_V361[7] = {337, -1, 387, -1, 1, 1, 1};
// Submodel TPFSCH00 . 1
// variable press (Explicit state)
static const int EVIA_V362[7] = {353, 16, 388, 389, 1, 1, 1};
// variable rho1 (Multiline var)
static const int EVIA_V363[7] = {354, -1, 390, -1, 1, 1, 1};
// variable cnum1 (Multiline var)
static const int EVIA_V364[7] = {355, -1, 391, -1, 1, 1, 1};
// variable hfr1 (Basic var)
static const int EVIA_V365[7] = {351, -1, 392, -1, 1, 1, 1};
// variable mfr1 (Basic var)
static const int EVIA_V366[7] = {352, -1, 393, -1, 1, 1, 1};
// variable tempc (Multiline var)
static const int EVIA_V367[7] = {357, -1, 394, -1, 1, 1, 1};
// variable hfi (Basic var)
static const int EVIA_V368[7] = {356, -1, 395, -1, 1, 1, 1};
// variable p2 (Duplicate var)
static const int EVIA_V369[7] = {360, -1, 396, -1, 1, 1, 1};
// variable rho3 (Multiline var)
static const int EVIA_V370[7] = {361, -1, 397, -1, 1, 1, 1};
// variable cnum3 (Multiline var)
static const int EVIA_V371[7] = {362, -1, 398, -1, 1, 1, 1};
// variable hfr3 (Basic var)
static const int EVIA_V372[7] = {358, -1, 399, -1, 1, 1, 1};
// variable mfr3 (Basic var)
static const int EVIA_V373[7] = {359, -1, 400, -1, 1, 1, 1};
// Submodel TPFRFL000 . 1
// variable dmh1 (Basic var)
static const int EVIA_V374[7] = {358, -1, 401, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V375[7] = {359, -1, 402, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V376[7] = {360, -1, 403, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V377[7] = {361, -1, 404, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V378[7] = {362, -1, 405, -1, 1, 1, 1};
// variable dmh2 (Duplicate var)
static const int EVIA_V379[7] = {371, -1, 406, -1, 1, 1, 1};
// variable dm2 (Duplicate var)
static const int EVIA_V380[7] = {372, -1, 407, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V381[7] = {368, -1, 408, -1, 1, 1, 1};
// variable rho2 (Basic var)
static const int EVIA_V382[7] = {369, -1, 409, -1, 1, 1, 1};
// variable com2 (Basic var)
static const int EVIA_V383[7] = {370, -1, 410, -1, 1, 1, 1};
// Submodel ACTEVSB02 . 1
// variable dmh1 (Basic var)
static const int EVIA_V384[7] = {381, -1, 411, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V385[7] = {382, -1, 412, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V386[7] = {378, -1, 413, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V387[7] = {379, -1, 414, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V388[7] = {380, -1, 415, -1, 1, 1, 1};
// variable dmh2 (Duplicate var)
static const int EVIA_V389[7] = {388, -1, 416, -1, 1, 1, 1};
// variable dm2 (Duplicate var)
static const int EVIA_V390[7] = {389, -1, 417, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V391[7] = {385, -1, 418, -1, 1, 1, 1};
// variable rho2 (Basic var)
static const int EVIA_V392[7] = {386, -1, 419, -1, 1, 1, 1};
// variable com2 (Basic var)
static const int EVIA_V393[7] = {387, -1, 420, -1, 1, 1, 1};
// variable p3 (Duplicate var)
static const int EVIA_V394[7] = {299, -1, 421, -1, 1, 1, 1};
// variable rho3 (Duplicate var)
static const int EVIA_V395[7] = {300, -1, 422, -1, 1, 1, 1};
// variable com3 (Duplicate var)
static const int EVIA_V396[7] = {301, -1, 423, -1, 1, 1, 1};
// variable dmh3 (Basic var)
static const int EVIA_V397[7] = {302, -1, 424, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V398[7] = {303, -1, 425, -1, 1, 1, 1};
// variable dmh4 (Duplicate var)
static const int EVIA_V399[7] = {393, -1, 426, -1, 1, 1, 1};
// variable dm4 (Duplicate var)
static const int EVIA_V400[7] = {394, -1, 427, -1, 1, 1, 1};
// variable p4 (Basic var)
static const int EVIA_V401[7] = {390, -1, 428, -1, 1, 1, 1};
// variable rho4 (Basic var)
static const int EVIA_V402[7] = {391, -1, 429, -1, 1, 1, 1};
// variable com4 (Basic var)
static const int EVIA_V403[7] = {392, -1, 430, -1, 1, 1, 1};
// Submodel TPFPHE0001 . 1
// variable p1 (Explicit state)
static const int EVIA_V404[7] = {438, 23, 431, 432, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V405[7] = {439, 24, 433, 434, 1, 1, 1};
// variable com1 (Multiline var)
static const int EVIA_V406[7] = {440, -1, 435, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V407[7] = {436, -1, 436, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V408[7] = {437, -1, 437, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V409[7] = {442, -1, 438, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V410[7] = {441, -1, 439, -1, 1, 1, 1};
// variable dmh3 (Multiline shared var)
static const int EVIA_V411[7] = {262, -1, 440, -1, 1, 1, 1};
// variable dm3 (Multiline var)
static const int EVIA_V412[7] = {263, -1, 441, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V413[7] = {266, -1, 442, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V414[7] = {267, -1, 443, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V415[7] = {268, -1, 444, -1, 1, 1, 1};
// Submodel TPFPHE0001 . 2
// variable p1 (Explicit state)
static const int EVIA_V416[7] = {385, 20, 445, 446, 1, 1, 1};
// variable rho1 (Explicit state)
static const int EVIA_V417[7] = {386, 21, 447, 448, 1, 1, 1};
// variable com1 (Multiline var)
static const int EVIA_V418[7] = {387, -1, 449, -1, 1, 1, 1};
// variable dmh1 (Basic var)
static const int EVIA_V419[7] = {388, -1, 450, -1, 1, 1, 1};
// variable dm1 (Basic var)
static const int EVIA_V420[7] = {389, -1, 451, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V421[7] = {457, -1, 452, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V422[7] = {456, -1, 453, -1, 1, 1, 1};
// variable dmh3 (Multiline shared var)
static const int EVIA_V423[7] = {436, -1, 454, -1, 1, 1, 1};
// variable dm3 (Multiline var)
static const int EVIA_V424[7] = {437, -1, 455, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V425[7] = {438, -1, 456, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V426[7] = {439, -1, 457, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V427[7] = {440, -1, 458, -1, 1, 1, 1};
// Submodel TPFCVINT01 . 1
// variable dmh1 (Multiline shared var)
static const int EVIA_V428[7] = {115, -1, 459, -1, 1, 1, 1};
// variable dm1 (Multiline var)
static const int EVIA_V429[7] = {116, -1, 460, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V430[7] = {117, -1, 461, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V431[7] = {118, -1, 462, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V432[7] = {119, -1, 463, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V433[7] = {504, -1, 464, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V434[7] = {503, -1, 465, -1, 1, 1, 1};
// variable p3 (Explicit state)
static const int EVIA_V435[7] = {507, 29, 466, 467, 1, 1, 1};
// variable rho3 (Explicit state)
static const int EVIA_V436[7] = {508, 30, 468, 469, 1, 1, 1};
// variable com3 (Multiline var)
static const int EVIA_V437[7] = {509, -1, 470, -1, 1, 1, 1};
// variable dmh3 (Basic var)
static const int EVIA_V438[7] = {505, -1, 471, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V439[7] = {506, -1, 472, -1, 1, 1, 1};
// variable dmh4 (Basic var)
static const int EVIA_V440[7] = {511, -1, 473, -1, 1, 1, 1};
// variable t4 (Basic var)
static const int EVIA_V441[7] = {510, -1, 474, -1, 1, 1, 1};
// Submodel TPFCVINT01 . 2
// variable dmh1 (Multiline shared var)
static const int EVIA_V442[7] = {505, -1, 475, -1, 1, 1, 1};
// variable dm1 (Multiline var)
static const int EVIA_V443[7] = {506, -1, 476, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V444[7] = {507, -1, 477, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V445[7] = {508, -1, 478, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V446[7] = {509, -1, 479, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V447[7] = {525, -1, 480, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V448[7] = {524, -1, 481, -1, 1, 1, 1};
// variable p3 (Explicit state)
static const int EVIA_V449[7] = {474, 27, 482, 483, 1, 1, 1};
// variable rho3 (Explicit state)
static const int EVIA_V450[7] = {475, 28, 484, 485, 1, 1, 1};
// variable com3 (Multiline var)
static const int EVIA_V451[7] = {476, -1, 486, -1, 1, 1, 1};
// variable dmh3 (Basic var)
static const int EVIA_V452[7] = {477, -1, 487, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V453[7] = {478, -1, 488, -1, 1, 1, 1};
// variable dmh4 (Basic var)
static const int EVIA_V454[7] = {527, -1, 489, -1, 1, 1, 1};
// variable t4 (Basic var)
static const int EVIA_V455[7] = {526, -1, 490, -1, 1, 1, 1};
// Submodel THC000 . 1
// variable t1 (Explicit state)
static const int EVIA_V456[7] = {510, 31, 491, 492, 1, 1, 1};
// variable dmq1 (Basic var)
static const int EVIA_V457[7] = {511, -1, 493, -1, 1, 1, 1};
// variable t2 (Duplicate var)
static const int EVIA_V458[7] = {542, -1, 494, -1, 1, 1, 1};
// variable dmq2 (Basic var)
static const int EVIA_V459[7] = {543, -1, 495, -1, 1, 1, 1};
// variable t3 (Duplicate var)
static const int EVIA_V460[7] = {548, -1, 496, -1, 1, 1, 1};
// variable dmq3 (Basic var)
static const int EVIA_V461[7] = {549, -1, 497, -1, 1, 1, 1};
// variable t4 (Duplicate var)
static const int EVIA_V462[7] = {544, -1, 498, -1, 1, 1, 1};
// variable dmq4 (Basic var)
static const int EVIA_V463[7] = {545, -1, 499, -1, 1, 1, 1};
// Submodel THC000 . 2
// variable t1 (Explicit state)
static const int EVIA_V464[7] = {526, 32, 500, 501, 1, 1, 1};
// variable dmq1 (Basic var)
static const int EVIA_V465[7] = {527, -1, 502, -1, 1, 1, 1};
// variable t2 (Duplicate var)
static const int EVIA_V466[7] = {546, -1, 503, -1, 1, 1, 1};
// variable dmq2 (Basic var)
static const int EVIA_V467[7] = {547, -1, 504, -1, 1, 1, 1};
// variable t3 (Duplicate var)
static const int EVIA_V468[7] = {556, -1, 505, -1, 1, 1, 1};
// variable dmq3 (Basic var)
static const int EVIA_V469[7] = {557, -1, 506, -1, 1, 1, 1};
// variable t4 (Duplicate var)
static const int EVIA_V470[7] = {540, -1, 507, -1, 1, 1, 1};
// variable dmq4 (Basic var)
static const int EVIA_V471[7] = {541, -1, 508, -1, 1, 1, 1};
// Submodel THC000 . 3
// variable t1 (Explicit state)
static const int EVIA_V472[7] = {441, 25, 509, 510, 1, 1, 1};
// variable dmq1 (Basic var)
static const int EVIA_V473[7] = {442, -1, 511, -1, 1, 1, 1};
// variable t2 (Duplicate var)
static const int EVIA_V474[7] = {471, -1, 512, -1, 1, 1, 1};
// variable dmq2 (Basic var)
static const int EVIA_V475[7] = {472, -1, 513, -1, 1, 1, 1};
// variable t3 (Duplicate var)
static const int EVIA_V476[7] = {524, -1, 514, -1, 1, 1, 1};
// variable dmq3 (Basic var)
static const int EVIA_V477[7] = {525, -1, 515, -1, 1, 1, 1};
// variable t4 (Duplicate var)
static const int EVIA_V478[7] = {430, -1, 516, -1, 1, 1, 1};
// variable dmq4 (Basic var)
static const int EVIA_V479[7] = {431, -1, 517, -1, 1, 1, 1};
// Submodel THC000 . 4
// variable t1 (Explicit state)
static const int EVIA_V480[7] = {456, 26, 518, 519, 1, 1, 1};
// variable dmq1 (Basic var)
static const int EVIA_V481[7] = {457, -1, 520, -1, 1, 1, 1};
// variable t2 (Duplicate var)
static const int EVIA_V482[7] = {432, -1, 521, -1, 1, 1, 1};
// variable dmq2 (Basic var)
static const int EVIA_V483[7] = {433, -1, 522, -1, 1, 1, 1};
// variable t3 (Duplicate var)
static const int EVIA_V484[7] = {503, -1, 523, -1, 1, 1, 1};
// variable dmq3 (Basic var)
static const int EVIA_V485[7] = {504, -1, 524, -1, 1, 1, 1};
// variable t4 (Duplicate var)
static const int EVIA_V486[7] = {434, -1, 525, -1, 1, 1, 1};
// variable dmq4 (Basic var)
static const int EVIA_V487[7] = {435, -1, 526, -1, 1, 1, 1};
// Submodel TPFPUCOMPVD0000 . 1
// variable dmh1 (Basic var)
static const int EVIA_V488[7] = {142, -1, 527, -1, 1, 1, 1};
// variable dm1 (Duplicate var)
static const int EVIA_V489[7] = {143, -1, 528, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V490[7] = {144, -1, 529, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V491[7] = {145, -1, 530, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V492[7] = {146, -1, 531, -1, 1, 1, 1};
// variable sigin (Basic var)
static const int EVIA_V493[7] = {1113, -1, 532, -1, 1, 1, 1};
// variable dmh3 (Basic var)
static const int EVIA_V494[7] = {60, -1, 533, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V495[7] = {61, -1, 534, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V496[7] = {62, -1, 535, -1, 1, 1, 1};
// variable rho3 (Basic var)
static const int EVIA_V497[7] = {63, -1, 536, -1, 1, 1, 1};
// variable com3 (Basic var)
static const int EVIA_V498[7] = {64, -1, 537, -1, 1, 1, 1};
// variable torq (Basic var)
static const int EVIA_V499[7] = {84, -1, 538, -1, 1, 1, 1};
// variable omega (Basic var)
static const int EVIA_V500[7] = {85, -1, 539, -1, 1, 1, 1};
// Submodel TPFPIN00 . 1
// variable dmh1 (Duplicate var)
static const int EVIA_V501[7] = {89, -1, 540, -1, 1, 1, 1};
// variable dm1 (Duplicate var)
static const int EVIA_V502[7] = {90, -1, 541, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V503[7] = {86, -1, 542, -1, 1, 1, 1};
// variable rho1 (Basic var)
static const int EVIA_V504[7] = {87, -1, 543, -1, 1, 1, 1};
// variable com1 (Basic var)
static const int EVIA_V505[7] = {88, -1, 544, -1, 1, 1, 1};
// variable dmh2 (Basic var)
static const int EVIA_V506[7] = {96, -1, 545, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V507[7] = {97, -1, 546, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V508[7] = {93, -1, 547, -1, 1, 1, 1};
// variable rho2 (Basic var)
static const int EVIA_V509[7] = {94, -1, 548, -1, 1, 1, 1};
// variable com2 (Basic var)
static const int EVIA_V510[7] = {95, -1, 549, -1, 1, 1, 1};
// Submodel SSINK . 3
// variable sink (Basic var)
static const int EVIA_V511[7] = {250, -1, 550, -1, 1, 1, 1};
// Submodel THGCV00 . 1
// variable dh1 (Basic var)
static const int EVIA_V512[7] = {549, -1, 551, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V513[7] = {548, -1, 552, -1, 1, 1, 1};
// Submodel THGCV00 . 2
// variable dh1 (Basic var)
static const int EVIA_V514[7] = {557, -1, 553, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V515[7] = {556, -1, 554, -1, 1, 1, 1};
// Submodel SSINK . 4
// variable sink (Basic var)
static const int EVIA_V516[7] = {251, -1, 555, -1, 1, 1, 1};
// Submodel SSINK . 6
// variable sink (Basic var)
static const int EVIA_V517[7] = {473, -1, 556, -1, 1, 1, 1};
// Submodel THMAMX000 . 1
// variable dm1 (Basic var)
static const int EVIA_V518[7] = {564, -1, 557, -1, 1, 1, 1};
// variable rh1 (Basic var)
static const int EVIA_V519[7] = {565, -1, 558, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V520[7] = {566, -1, 559, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V521[7] = {567, -1, 560, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V522[7] = {568, -1, 561, -1, 1, 1, 1};
// variable rh2 (Basic var)
static const int EVIA_V523[7] = {569, -1, 562, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V524[7] = {570, -1, 563, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V525[7] = {571, -1, 564, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V526[7] = {572, -1, 565, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V527[7] = {573, -1, 566, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V528[7] = {574, -1, 567, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V529[7] = {575, -1, 568, -1, 1, 1, 1};
// Submodel THMAGS00 . 5
// variable dm1 (Duplicate var)
static const int EVIA_V530[7] = {582, -1, 569, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V531[7] = {583, -1, 570, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V532[7] = {584, -1, 571, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V533[7] = {585, -1, 572, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V534[7] = {586, -1, 573, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V535[7] = {568, -1, 574, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V536[7] = {569, -1, 575, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V537[7] = {570, -1, 576, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V538[7] = {571, -1, 577, -1, 1, 1, 1};
// Submodel SSINK . 7
// variable sink (Basic var)
static const int EVIA_V539[7] = {586, -1, 578, -1, 1, 1, 1};
// Submodel THMAMX000 . 3
// variable dm1 (Basic var)
static const int EVIA_V540[7] = {620, -1, 579, -1, 1, 1, 1};
// variable rh1 (Basic var)
static const int EVIA_V541[7] = {621, -1, 580, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V542[7] = {622, -1, 581, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V543[7] = {623, -1, 582, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V544[7] = {624, -1, 583, -1, 1, 1, 1};
// variable rh2 (Basic var)
static const int EVIA_V545[7] = {625, -1, 584, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V546[7] = {626, -1, 585, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V547[7] = {627, -1, 586, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V548[7] = {628, -1, 587, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V549[7] = {629, -1, 588, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V550[7] = {630, -1, 589, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V551[7] = {631, -1, 590, -1, 1, 1, 1};
// Submodel THMAGS00 . 7
// variable dm1 (Duplicate var)
static const int EVIA_V552[7] = {638, -1, 591, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V553[7] = {639, -1, 592, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V554[7] = {640, -1, 593, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V555[7] = {641, -1, 594, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V556[7] = {642, -1, 595, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V557[7] = {624, -1, 596, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V558[7] = {625, -1, 597, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V559[7] = {626, -1, 598, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V560[7] = {627, -1, 599, -1, 1, 1, 1};
// Submodel SSINK . 9
// variable sink (Basic var)
static const int EVIA_V561[7] = {642, -1, 600, -1, 1, 1, 1};
// Submodel THMAMX000 . 4
// variable dm1 (Basic var)
static const int EVIA_V562[7] = {638, -1, 601, -1, 1, 1, 1};
// variable rh1 (Basic var)
static const int EVIA_V563[7] = {639, -1, 602, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V564[7] = {640, -1, 603, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V565[7] = {641, -1, 604, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V566[7] = {652, -1, 605, -1, 1, 1, 1};
// variable rh2 (Basic var)
static const int EVIA_V567[7] = {653, -1, 606, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V568[7] = {654, -1, 607, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V569[7] = {655, -1, 608, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V570[7] = {656, -1, 609, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V571[7] = {657, -1, 610, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V572[7] = {658, -1, 611, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V573[7] = {659, -1, 612, -1, 1, 1, 1};
// Submodel THMAGS00 . 8
// variable dm1 (Duplicate var)
static const int EVIA_V574[7] = {666, -1, 613, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V575[7] = {667, -1, 614, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V576[7] = {668, -1, 615, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V577[7] = {669, -1, 616, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V578[7] = {670, -1, 617, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V579[7] = {652, -1, 618, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V580[7] = {653, -1, 619, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V581[7] = {654, -1, 620, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V582[7] = {655, -1, 621, -1, 1, 1, 1};
// Submodel SSINK . 10
// variable sink (Basic var)
static const int EVIA_V583[7] = {670, -1, 622, -1, 1, 1, 1};
// Submodel THMAMX000 . 5
// variable dm1 (Basic var)
static const int EVIA_V584[7] = {666, -1, 623, -1, 1, 1, 1};
// variable rh1 (Basic var)
static const int EVIA_V585[7] = {667, -1, 624, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V586[7] = {668, -1, 625, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V587[7] = {669, -1, 626, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V588[7] = {680, -1, 627, -1, 1, 1, 1};
// variable rh2 (Basic var)
static const int EVIA_V589[7] = {681, -1, 628, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V590[7] = {682, -1, 629, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V591[7] = {683, -1, 630, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V592[7] = {684, -1, 631, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V593[7] = {685, -1, 632, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V594[7] = {686, -1, 633, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V595[7] = {687, -1, 634, -1, 1, 1, 1};
// Submodel THMAGS00 . 9
// variable dm1 (Duplicate var)
static const int EVIA_V596[7] = {258, -1, 635, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V597[7] = {259, -1, 636, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V598[7] = {260, -1, 637, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V599[7] = {261, -1, 638, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V600[7] = {694, -1, 639, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V601[7] = {680, -1, 640, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V602[7] = {681, -1, 641, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V603[7] = {682, -1, 642, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V604[7] = {683, -1, 643, -1, 1, 1, 1};
// Submodel SSINK . 11
// variable sink (Basic var)
static const int EVIA_V605[7] = {694, -1, 644, -1, 1, 1, 1};
// Submodel THMASINK00 . 2
// variable dms1 (Basic var)
static const int EVIA_V606[7] = {258, -1, 645, -1, 1, 1, 1};
// variable rh (Basic var)
static const int EVIA_V607[7] = {259, -1, 646, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V608[7] = {260, -1, 647, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V609[7] = {261, -1, 648, -1, 1, 1, 1};
// Submodel THMAMX000 . 2
// variable dm1 (Basic var)
static const int EVIA_V610[7] = {596, -1, 649, -1, 1, 1, 1};
// variable rh1 (Basic var)
static const int EVIA_V611[7] = {597, -1, 650, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V612[7] = {598, -1, 651, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V613[7] = {599, -1, 652, -1, 1, 1, 1};
// variable dm2 (Basic var)
static const int EVIA_V614[7] = {600, -1, 653, -1, 1, 1, 1};
// variable rh2 (Basic var)
static const int EVIA_V615[7] = {601, -1, 654, -1, 1, 1, 1};
// variable p2 (Basic var)
static const int EVIA_V616[7] = {602, -1, 655, -1, 1, 1, 1};
// variable t2 (Basic var)
static const int EVIA_V617[7] = {603, -1, 656, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V618[7] = {582, -1, 657, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V619[7] = {583, -1, 658, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V620[7] = {584, -1, 659, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V621[7] = {585, -1, 660, -1, 1, 1, 1};
// Submodel THMAGS00 . 6
// variable dm1 (Duplicate var)
static const int EVIA_V622[7] = {55, -1, 661, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V623[7] = {56, -1, 662, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V624[7] = {57, -1, 663, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V625[7] = {58, -1, 664, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V626[7] = {610, -1, 665, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V627[7] = {600, -1, 666, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V628[7] = {601, -1, 667, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V629[7] = {602, -1, 668, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V630[7] = {603, -1, 669, -1, 1, 1, 1};
// Submodel SSINK . 8
// variable sink (Basic var)
static const int EVIA_V631[7] = {610, -1, 670, -1, 1, 1, 1};
// Submodel THMAFS00 . 1
// variable dm1 (Duplicate var)
static const int EVIA_V632[7] = {10, -1, 671, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V633[7] = {11, -1, 672, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V634[7] = {12, -1, 673, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V635[7] = {13, -1, 674, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V636[7] = {53, -1, 675, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V637[7] = {55, -1, 676, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V638[7] = {56, -1, 677, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V639[7] = {57, -1, 678, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V640[7] = {58, -1, 679, -1, 1, 1, 1};
// Submodel THMAGS00 . 1
// variable dm1 (Duplicate var)
static const int EVIA_V641[7] = {4, -1, 680, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V642[7] = {5, -1, 681, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V643[7] = {6, -1, 682, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V644[7] = {7, -1, 683, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V645[7] = {9, -1, 684, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V646[7] = {10, -1, 685, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V647[7] = {11, -1, 686, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V648[7] = {12, -1, 687, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V649[7] = {13, -1, 688, -1, 1, 1, 1};
// Submodel THMAGS00 . 2
// variable dm1 (Duplicate var)
static const int EVIA_V650[7] = {23, -1, 689, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V651[7] = {24, -1, 690, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V652[7] = {25, -1, 691, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V653[7] = {26, -1, 692, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V654[7] = {28, -1, 693, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V655[7] = {4, -1, 694, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V656[7] = {5, -1, 695, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V657[7] = {6, -1, 696, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V658[7] = {7, -1, 697, -1, 1, 1, 1};
// Submodel THMAGS00 . 3
// variable dm1 (Duplicate var)
static const int EVIA_V659[7] = {38, -1, 698, -1, 1, 1, 1};
// variable rh1 (Duplicate var)
static const int EVIA_V660[7] = {39, -1, 699, -1, 1, 1, 1};
// variable p1 (Duplicate var)
static const int EVIA_V661[7] = {40, -1, 700, -1, 1, 1, 1};
// variable t1 (Duplicate var)
static const int EVIA_V662[7] = {41, -1, 701, -1, 1, 1, 1};
// variable sig (Multiline var)
static const int EVIA_V663[7] = {43, -1, 702, -1, 1, 1, 1};
// variable dm3 (Basic var)
static const int EVIA_V664[7] = {23, -1, 703, -1, 1, 1, 1};
// variable rh3 (Basic var)
static const int EVIA_V665[7] = {24, -1, 704, -1, 1, 1, 1};
// variable p3 (Basic var)
static const int EVIA_V666[7] = {25, -1, 705, -1, 1, 1, 1};
// variable t3 (Basic var)
static const int EVIA_V667[7] = {26, -1, 706, -1, 1, 1, 1};
// Submodel THMASINK00 . 1
// variable dms1 (Basic var)
static const int EVIA_V668[7] = {38, -1, 707, -1, 1, 1, 1};
// variable rh (Basic var)
static const int EVIA_V669[7] = {39, -1, 708, -1, 1, 1, 1};
// variable p1 (Basic var)
static const int EVIA_V670[7] = {40, -1, 709, -1, 1, 1, 1};
// variable t1 (Basic var)
static const int EVIA_V671[7] = {41, -1, 710, -1, 1, 1, 1};
static const int* EVIA[672] = {
     EVIA_V0, EVIA_V1, EVIA_V2, EVIA_V3, EVIA_V4, EVIA_V5, EVIA_V6, EVIA_V7, EVIA_V8, EVIA_V9
   , EVIA_V10, EVIA_V11, EVIA_V12, EVIA_V13, EVIA_V14, EVIA_V15, EVIA_V16, EVIA_V17, EVIA_V18, EVIA_V19
   , EVIA_V20, EVIA_V21, EVIA_V22, EVIA_V23, EVIA_V24, EVIA_V25, EVIA_V26, EVIA_V27, EVIA_V28, EVIA_V29
   , EVIA_V30, EVIA_V31, EVIA_V32, EVIA_V33, EVIA_V34, EVIA_V35, EVIA_V36, EVIA_V37, EVIA_V38, EVIA_V39
   , EVIA_V40, EVIA_V41, EVIA_V42, EVIA_V43, EVIA_V44, EVIA_V45, EVIA_V46, EVIA_V47, EVIA_V48, EVIA_V49
   , EVIA_V50, EVIA_V51, EVIA_V52, EVIA_V53, EVIA_V54, EVIA_V55, EVIA_V56, EVIA_V57, EVIA_V58, EVIA_V59
   , EVIA_V60, EVIA_V61, EVIA_V62, EVIA_V63, EVIA_V64, EVIA_V65, EVIA_V66, EVIA_V67, EVIA_V68, EVIA_V69
   , EVIA_V70, EVIA_V71, EVIA_V72, EVIA_V73, EVIA_V74, EVIA_V75, EVIA_V76, EVIA_V77, EVIA_V78, EVIA_V79
   , EVIA_V80, EVIA_V81, EVIA_V82, EVIA_V83, EVIA_V84, EVIA_V85, EVIA_V86, EVIA_V87, EVIA_V88, EVIA_V89
   , EVIA_V90, EVIA_V91, EVIA_V92, EVIA_V93, EVIA_V94, EVIA_V95, EVIA_V96, EVIA_V97, EVIA_V98, EVIA_V99
   , EVIA_V100, EVIA_V101, EVIA_V102, EVIA_V103, EVIA_V104, EVIA_V105, EVIA_V106, EVIA_V107, EVIA_V108, EVIA_V109
   , EVIA_V110, EVIA_V111, EVIA_V112, EVIA_V113, EVIA_V114, EVIA_V115, EVIA_V116, EVIA_V117, EVIA_V118, EVIA_V119
   , EVIA_V120, EVIA_V121, EVIA_V122, EVIA_V123, EVIA_V124, EVIA_V125, EVIA_V126, EVIA_V127, EVIA_V128, EVIA_V129
   , EVIA_V130, EVIA_V131, EVIA_V132, EVIA_V133, EVIA_V134, EVIA_V135, EVIA_V136, EVIA_V137, EVIA_V138, EVIA_V139
   , EVIA_V140, EVIA_V141, EVIA_V142, EVIA_V143, EVIA_V144, EVIA_V145, EVIA_V146, EVIA_V147, EVIA_V148, EVIA_V149
   , EVIA_V150, EVIA_V151, EVIA_V152, EVIA_V153, EVIA_V154, EVIA_V155, EVIA_V156, EVIA_V157, EVIA_V158, EVIA_V159
   , EVIA_V160, EVIA_V161, EVIA_V162, EVIA_V163, EVIA_V164, EVIA_V165, EVIA_V166, EVIA_V167, EVIA_V168, EVIA_V169
   , EVIA_V170, EVIA_V171, EVIA_V172, EVIA_V173, EVIA_V174, EVIA_V175, EVIA_V176, EVIA_V177, EVIA_V178, EVIA_V179
   , EVIA_V180, EVIA_V181, EVIA_V182, EVIA_V183, EVIA_V184, EVIA_V185, EVIA_V186, EVIA_V187, EVIA_V188, EVIA_V189
   , EVIA_V190, EVIA_V191, EVIA_V192, EVIA_V193, EVIA_V194, EVIA_V195, EVIA_V196, EVIA_V197, EVIA_V198, EVIA_V199
   , EVIA_V200, EVIA_V201, EVIA_V202, EVIA_V203, EVIA_V204, EVIA_V205, EVIA_V206, EVIA_V207, EVIA_V208, EVIA_V209
   , EVIA_V210, EVIA_V211, EVIA_V212, EVIA_V213, EVIA_V214, EVIA_V215, EVIA_V216, EVIA_V217, EVIA_V218, EVIA_V219
   , EVIA_V220, EVIA_V221, EVIA_V222, EVIA_V223, EVIA_V224, EVIA_V225, EVIA_V226, EVIA_V227, EVIA_V228, EVIA_V229
   , EVIA_V230, EVIA_V231, EVIA_V232, EVIA_V233, EVIA_V234, EVIA_V235, EVIA_V236, EVIA_V237, EVIA_V238, EVIA_V239
   , EVIA_V240, EVIA_V241, EVIA_V242, EVIA_V243, EVIA_V244, EVIA_V245, EVIA_V246, EVIA_V247, EVIA_V248, EVIA_V249
   , EVIA_V250, EVIA_V251, EVIA_V252, EVIA_V253, EVIA_V254, EVIA_V255, EVIA_V256, EVIA_V257, EVIA_V258, EVIA_V259
   , EVIA_V260, EVIA_V261, EVIA_V262, EVIA_V263, EVIA_V264, EVIA_V265, EVIA_V266, EVIA_V267, EVIA_V268, EVIA_V269
   , EVIA_V270, EVIA_V271, EVIA_V272, EVIA_V273, EVIA_V274, EVIA_V275, EVIA_V276, EVIA_V277, EVIA_V278, EVIA_V279
   , EVIA_V280, EVIA_V281, EVIA_V282, EVIA_V283, EVIA_V284, EVIA_V285, EVIA_V286, EVIA_V287, EVIA_V288, EVIA_V289
   , EVIA_V290, EVIA_V291, EVIA_V292, EVIA_V293, EVIA_V294, EVIA_V295, EVIA_V296, EVIA_V297, EVIA_V298, EVIA_V299
   , EVIA_V300, EVIA_V301, EVIA_V302, EVIA_V303, EVIA_V304, EVIA_V305, EVIA_V306, EVIA_V307, EVIA_V308, EVIA_V309
   , EVIA_V310, EVIA_V311, EVIA_V312, EVIA_V313, EVIA_V314, EVIA_V315, EVIA_V316, EVIA_V317, EVIA_V318, EVIA_V319
   , EVIA_V320, EVIA_V321, EVIA_V322, EVIA_V323, EVIA_V324, EVIA_V325, EVIA_V326, EVIA_V327, EVIA_V328, EVIA_V329
   , EVIA_V330, EVIA_V331, EVIA_V332, EVIA_V333, EVIA_V334, EVIA_V335, EVIA_V336, EVIA_V337, EVIA_V338, EVIA_V339
   , EVIA_V340, EVIA_V341, EVIA_V342, EVIA_V343, EVIA_V344, EVIA_V345, EVIA_V346, EVIA_V347, EVIA_V348, EVIA_V349
   , EVIA_V350, EVIA_V351, EVIA_V352, EVIA_V353, EVIA_V354, EVIA_V355, EVIA_V356, EVIA_V357, EVIA_V358, EVIA_V359
   , EVIA_V360, EVIA_V361, EVIA_V362, EVIA_V363, EVIA_V364, EVIA_V365, EVIA_V366, EVIA_V367, EVIA_V368, EVIA_V369
   , EVIA_V370, EVIA_V371, EVIA_V372, EVIA_V373, EVIA_V374, EVIA_V375, EVIA_V376, EVIA_V377, EVIA_V378, EVIA_V379
   , EVIA_V380, EVIA_V381, EVIA_V382, EVIA_V383, EVIA_V384, EVIA_V385, EVIA_V386, EVIA_V387, EVIA_V388, EVIA_V389
   , EVIA_V390, EVIA_V391, EVIA_V392, EVIA_V393, EVIA_V394, EVIA_V395, EVIA_V396, EVIA_V397, EVIA_V398, EVIA_V399
   , EVIA_V400, EVIA_V401, EVIA_V402, EVIA_V403, EVIA_V404, EVIA_V405, EVIA_V406, EVIA_V407, EVIA_V408, EVIA_V409
   , EVIA_V410, EVIA_V411, EVIA_V412, EVIA_V413, EVIA_V414, EVIA_V415, EVIA_V416, EVIA_V417, EVIA_V418, EVIA_V419
   , EVIA_V420, EVIA_V421, EVIA_V422, EVIA_V423, EVIA_V424, EVIA_V425, EVIA_V426, EVIA_V427, EVIA_V428, EVIA_V429
   , EVIA_V430, EVIA_V431, EVIA_V432, EVIA_V433, EVIA_V434, EVIA_V435, EVIA_V436, EVIA_V437, EVIA_V438, EVIA_V439
   , EVIA_V440, EVIA_V441, EVIA_V442, EVIA_V443, EVIA_V444, EVIA_V445, EVIA_V446, EVIA_V447, EVIA_V448, EVIA_V449
   , EVIA_V450, EVIA_V451, EVIA_V452, EVIA_V453, EVIA_V454, EVIA_V455, EVIA_V456, EVIA_V457, EVIA_V458, EVIA_V459
   , EVIA_V460, EVIA_V461, EVIA_V462, EVIA_V463, EVIA_V464, EVIA_V465, EVIA_V466, EVIA_V467, EVIA_V468, EVIA_V469
   , EVIA_V470, EVIA_V471, EVIA_V472, EVIA_V473, EVIA_V474, EVIA_V475, EVIA_V476, EVIA_V477, EVIA_V478, EVIA_V479
   , EVIA_V480, EVIA_V481, EVIA_V482, EVIA_V483, EVIA_V484, EVIA_V485, EVIA_V486, EVIA_V487, EVIA_V488, EVIA_V489
   , EVIA_V490, EVIA_V491, EVIA_V492, EVIA_V493, EVIA_V494, EVIA_V495, EVIA_V496, EVIA_V497, EVIA_V498, EVIA_V499
   , EVIA_V500, EVIA_V501, EVIA_V502, EVIA_V503, EVIA_V504, EVIA_V505, EVIA_V506, EVIA_V507, EVIA_V508, EVIA_V509
   , EVIA_V510, EVIA_V511, EVIA_V512, EVIA_V513, EVIA_V514, EVIA_V515, EVIA_V516, EVIA_V517, EVIA_V518, EVIA_V519
   , EVIA_V520, EVIA_V521, EVIA_V522, EVIA_V523, EVIA_V524, EVIA_V525, EVIA_V526, EVIA_V527, EVIA_V528, EVIA_V529
   , EVIA_V530, EVIA_V531, EVIA_V532, EVIA_V533, EVIA_V534, EVIA_V535, EVIA_V536, EVIA_V537, EVIA_V538, EVIA_V539
   , EVIA_V540, EVIA_V541, EVIA_V542, EVIA_V543, EVIA_V544, EVIA_V545, EVIA_V546, EVIA_V547, EVIA_V548, EVIA_V549
   , EVIA_V550, EVIA_V551, EVIA_V552, EVIA_V553, EVIA_V554, EVIA_V555, EVIA_V556, EVIA_V557, EVIA_V558, EVIA_V559
   , EVIA_V560, EVIA_V561, EVIA_V562, EVIA_V563, EVIA_V564, EVIA_V565, EVIA_V566, EVIA_V567, EVIA_V568, EVIA_V569
   , EVIA_V570, EVIA_V571, EVIA_V572, EVIA_V573, EVIA_V574, EVIA_V575, EVIA_V576, EVIA_V577, EVIA_V578, EVIA_V579
   , EVIA_V580, EVIA_V581, EVIA_V582, EVIA_V583, EVIA_V584, EVIA_V585, EVIA_V586, EVIA_V587, EVIA_V588, EVIA_V589
   , EVIA_V590, EVIA_V591, EVIA_V592, EVIA_V593, EVIA_V594, EVIA_V595, EVIA_V596, EVIA_V597, EVIA_V598, EVIA_V599
   , EVIA_V600, EVIA_V601, EVIA_V602, EVIA_V603, EVIA_V604, EVIA_V605, EVIA_V606, EVIA_V607, EVIA_V608, EVIA_V609
   , EVIA_V610, EVIA_V611, EVIA_V612, EVIA_V613, EVIA_V614, EVIA_V615, EVIA_V616, EVIA_V617, EVIA_V618, EVIA_V619
   , EVIA_V620, EVIA_V621, EVIA_V622, EVIA_V623, EVIA_V624, EVIA_V625, EVIA_V626, EVIA_V627, EVIA_V628, EVIA_V629
   , EVIA_V630, EVIA_V631, EVIA_V632, EVIA_V633, EVIA_V634, EVIA_V635, EVIA_V636, EVIA_V637, EVIA_V638, EVIA_V639
   , EVIA_V640, EVIA_V641, EVIA_V642, EVIA_V643, EVIA_V644, EVIA_V645, EVIA_V646, EVIA_V647, EVIA_V648, EVIA_V649
   , EVIA_V650, EVIA_V651, EVIA_V652, EVIA_V653, EVIA_V654, EVIA_V655, EVIA_V656, EVIA_V657, EVIA_V658, EVIA_V659
   , EVIA_V660, EVIA_V661, EVIA_V662, EVIA_V663, EVIA_V664, EVIA_V665, EVIA_V666, EVIA_V667, EVIA_V668, EVIA_V669
   , EVIA_V670, EVIA_V671
};

// Submodel RSTAT . 1
// variable cpu (Basic var)
static const int IVIA_V0[4] = {158, -1, 1, 1};
// variable wallTime (Basic var)
static const int IVIA_V1[4] = {159, -1, 1, 1};
// variable step (Basic var)
static const int IVIA_V2[4] = {160, -1, 1, 1};
// variable minh (Basic var)
static const int IVIA_V3[4] = {161, -1, 1, 1};
// variable maxh (Basic var)
static const int IVIA_V4[4] = {162, -1, 1, 1};
// variable minhprint (Basic var)
static const int IVIA_V5[4] = {163, -1, 1, 1};
// variable maxhprint (Basic var)
static const int IVIA_V6[4] = {164, -1, 1, 1};
// variable njacs (Basic var)
static const int IVIA_V7[4] = {165, -1, 1, 1};
// variable nfes (Basic var)
static const int IVIA_V8[4] = {166, -1, 1, 1};
// variable ndisc (Basic var)
static const int IVIA_V9[4] = {167, -1, 1, 1};
// variable nsteps (Basic var)
static const int IVIA_V10[4] = {168, -1, 1, 1};
// variable fetime (Basic var)
static const int IVIA_V11[4] = {169, -1, 1, 1};
// variable stime (Basic var)
static const int IVIA_V12[4] = {170, -1, 1, 1};
// variable nadams (Basic var)
static const int IVIA_V13[4] = {171, -1, 1, 1};
// variable nbdf (Basic var)
static const int IVIA_V14[4] = {172, -1, 1, 1};
// variable adams (Basic var)
static const int IVIA_V15[4] = {173, -1, 12, 1};
// variable bdf (Basic var)
static const int IVIA_V16[4] = {185, -1, 5, 1};
// Submodel TPF_FP01 . 1
// variable masstot (Basic var)
static const int IVIA_V17[4] = {252, -1, 1, 1};
// variable voltot (Basic var)
static const int IVIA_V18[4] = {253, -1, 1, 1};
// variable pcrit (Fixed var)
static const int IVIA_V19[4] = {254, -1, 1, 1};
// variable tcrit (Fixed var)
static const int IVIA_V20[4] = {255, -1, 1, 1};
// variable rhocrit (Fixed var)
static const int IVIA_V21[4] = {256, -1, 1, 1};
// variable mmass (Fixed var)
static const int IVIA_V22[4] = {257, -1, 1, 1};
// Submodel THSD00 . 1
// variable mtot (Basic var)
static const int IVIA_V23[4] = {426, -1, 1, 1};
// variable se (Basic var)
static const int IVIA_V24[4] = {427, -1, 1, 1};
// Submodel THSD00 . 2
// variable mtot (Basic var)
static const int IVIA_V25[4] = {428, -1, 1, 1};
// variable se (Basic var)
static const int IVIA_V26[4] = {429, -1, 1, 1};
// Submodel ACMCTF0 . 1
// variable areaf (Basic var)
static const int IVIA_V27[4] = {704, -1, 1, 1};
// variable arear (Basic var)
static const int IVIA_V28[4] = {705, -1, 1, 1};
// variable extarea (Basic var)
static const int IVIA_V29[4] = {706, -1, 1, 1};
// variable totpow (Basic var)
static const int IVIA_V30[4] = {707, -1, 1, 1};
// variable cpheat (Basic var)
static const int IVIA_V31[4] = {708, -1, 1, 1};
// variable ratio (Basic var)
static const int IVIA_V32[4] = {709, -1, 1, 1};
// variable condmfr (Basic var)
static const int IVIA_V33[4] = {710, -1, 1, 1};
// variable refvol (Basic var)
static const int IVIA_V34[4] = {711, -1, 1, 1};
// variable massInt (Basic var)
static const int IVIA_V35[4] = {712, -1, 1, 1};
// variable masstot (Basic var)
static const int IVIA_V36[4] = {713, -1, 1, 1};
// Submodel ACUCPF0 . 1
// variable areaf (Basic var)
static const int IVIA_V37[4] = {911, -1, 1, 1};
// variable arear (Basic var)
static const int IVIA_V38[4] = {912, -1, 1, 1};
// variable extarea (Basic var)
static const int IVIA_V39[4] = {913, -1, 1, 1};
// variable totpow (Basic var)
static const int IVIA_V40[4] = {914, -1, 1, 1};
// variable cpheat (Basic var)
static const int IVIA_V41[4] = {915, -1, 1, 1};
// variable ratio (Basic var)
static const int IVIA_V42[4] = {916, -1, 1, 1};
// variable condmfr (Basic var)
static const int IVIA_V43[4] = {917, -1, 1, 1};
// variable refvol (Basic var)
static const int IVIA_V44[4] = {918, -1, 1, 1};
// variable massInt (Basic var)
static const int IVIA_V45[4] = {919, -1, 1, 1};
// variable masstot (Basic var)
static const int IVIA_V46[4] = {920, -1, 1, 1};
// Submodel CONS00 . 1
// variable k0GEN (Discrete var)
static const int IVIA_V47[4] = {1, -1, 1, 1};
// Submodel CONS00 . 2
// variable k0GEN (Discrete var)
static const int IVIA_V48[4] = {3, -1, 1, 1};
// Submodel THHF0 . 1
// Submodel THHF0 . 2
// Submodel THHF0 . 3
// Submodel THHF0 . 4
// Submodel CONS00 . 3
// variable k0GEN (Discrete var)
static const int IVIA_V49[4] = {103, -1, 1, 1};
// Submodel CONS00 . 4
// variable k0GEN (Discrete var)
static const int IVIA_V50[4] = {105, -1, 1, 1};
// Submodel CONS00 . 5
// variable k0GEN (Discrete var)
static const int IVIA_V51[4] = {107, -1, 1, 1};
// Submodel ACMAS0000 . 1
// variable ah (Multiline shared var)
static const int IVIA_V52[4] = {113, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V53[4] = {114, -1, 1, 1};
// Submodel CONS00 . 6
// variable k0GEN (Discrete var)
static const int IVIA_V54[4] = {128, -1, 1, 1};
// Submodel CONS00 . 7
// variable k0GEN (Discrete var)
static const int IVIA_V55[4] = {130, -1, 1, 1};
// Submodel CONS00 . 8
// variable k0GEN (Discrete var)
static const int IVIA_V56[4] = {132, -1, 1, 1};
// Submodel CONS00 . 9
// variable k0GEN (Discrete var)
static const int IVIA_V57[4] = {134, -1, 1, 1};
// Submodel TPFGS010 . 1
// variable v (Multiline shared var)
static const int IVIA_V58[4] = {198, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V59[4] = {199, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V60[4] = {200, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V61[4] = {201, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V62[4] = {202, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V63[4] = {203, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V64[4] = {204, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V65[4] = {205, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V66[4] = {206, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V67[4] = {207, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V68[4] = {208, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V69[4] = {209, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V70[4] = {210, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V71[4] = {211, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V72[4] = {212, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V73[4] = {213, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V74[4] = {214, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V75[4] = {215, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V76[4] = {216, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V77[4] = {217, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V78[4] = {218, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V79[4] = {219, -1, 1, 1};
// Submodel TPFGS010 . 2
// variable v (Multiline shared var)
static const int IVIA_V80[4] = {228, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V81[4] = {229, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V82[4] = {230, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V83[4] = {231, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V84[4] = {232, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V85[4] = {233, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V86[4] = {234, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V87[4] = {235, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V88[4] = {236, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V89[4] = {237, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V90[4] = {238, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V91[4] = {239, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V92[4] = {240, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V93[4] = {241, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V94[4] = {242, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V95[4] = {243, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V96[4] = {244, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V97[4] = {245, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V98[4] = {246, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V99[4] = {247, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V100[4] = {248, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V101[4] = {249, -1, 1, 1};
// Submodel TPFGS010 . 3
// variable v (Multiline shared var)
static const int IVIA_V102[4] = {277, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V103[4] = {278, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V104[4] = {279, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V105[4] = {280, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V106[4] = {281, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V107[4] = {282, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V108[4] = {283, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V109[4] = {284, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V110[4] = {285, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V111[4] = {286, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V112[4] = {287, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V113[4] = {288, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V114[4] = {289, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V115[4] = {290, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V116[4] = {291, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V117[4] = {292, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V118[4] = {293, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V119[4] = {294, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V120[4] = {295, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V121[4] = {296, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V122[4] = {297, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V123[4] = {298, -1, 1, 1};
// Submodel TPFGS010 . 4
// variable v (Multiline shared var)
static const int IVIA_V124[4] = {306, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V125[4] = {307, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V126[4] = {308, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V127[4] = {309, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V128[4] = {310, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V129[4] = {311, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V130[4] = {312, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V131[4] = {313, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V132[4] = {314, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V133[4] = {315, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V134[4] = {316, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V135[4] = {317, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V136[4] = {318, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V137[4] = {319, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V138[4] = {320, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V139[4] = {321, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V140[4] = {322, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V141[4] = {323, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V142[4] = {324, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V143[4] = {325, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V144[4] = {326, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V145[4] = {327, -1, 1, 1};
// Submodel THHS0 . 1
// Submodel GA00 . 1
// variable k0GEN (Discrete var)
static const int IVIA_V146[4] = {404, -1, 1, 1};
// Submodel THMAGS00 . 4
// variable ah3 (Basic var)
static const int IVIA_V147[4] = {413, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V148[4] = {414, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V149[4] = {415, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V150[4] = {416, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V151[4] = {417, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V152[4] = {418, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V153[4] = {419, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V154[4] = {420, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V155[4] = {421, -1, 1, 1};
// Submodel GA00 . 3
// variable k0GEN (Discrete var)
static const int IVIA_V156[4] = {423, -1, 1, 1};
// Submodel THHF0 . 5
// Submodel THHF0 . 6
// Submodel THHF0 . 7
// Submodel THHF0 . 8
// Submodel TPFGS010 . 5
// variable v (Multiline shared var)
static const int IVIA_V157[4] = {481, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V158[4] = {482, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V159[4] = {483, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V160[4] = {484, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V161[4] = {485, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V162[4] = {486, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V163[4] = {487, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V164[4] = {488, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V165[4] = {489, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V166[4] = {490, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V167[4] = {491, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V168[4] = {492, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V169[4] = {493, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V170[4] = {494, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V171[4] = {495, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V172[4] = {496, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V173[4] = {497, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V174[4] = {498, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V175[4] = {499, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V176[4] = {500, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V177[4] = {501, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V178[4] = {502, -1, 1, 1};
// Submodel THHF0 . 9
// Submodel THHF0 . 10
// Submodel THHF0 . 11
// Submodel THHF0 . 12
// Submodel ACMCTFREF1 . 1
// variable massInt (Basic var)
static const int IVIA_V179[4] = {829, -1, 1, 1};
// variable pstate (Explicit state)
static const int IVIA_V180[4] = {830, 51, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V181[4] = {832, 53, 2, 1};
// variable pint (Basic var)
static const int IVIA_V182[4] = {834, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V183[4] = {837, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V184[4] = {840, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V185[4] = {843, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V186[4] = {846, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V187[4] = {849, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V188[4] = {852, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V189[4] = {855, 55, 3, 1};
// variable hfref (Basic var)
static const int IVIA_V190[4] = {858, -1, 3, 1};
// variable hfah (Basic var)
static const int IVIA_V191[4] = {861, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V192[4] = {864, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V193[4] = {867, -1, 3, 1};
// Submodel ACMCTFINT1 . 1
// variable massInt (Basic var)
static const int IVIA_V194[4] = {870, -1, 1, 1};
// variable pstate (Explicit state)
static const int IVIA_V195[4] = {871, 58, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V196[4] = {873, 60, 2, 1};
// variable pint (Basic var)
static const int IVIA_V197[4] = {875, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V198[4] = {878, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V199[4] = {881, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V200[4] = {884, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V201[4] = {887, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V202[4] = {890, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V203[4] = {893, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V204[4] = {896, 62, 3, 1};
// variable hfref (Basic var)
static const int IVIA_V205[4] = {899, -1, 3, 1};
// variable hfah (Basic var)
static const int IVIA_V206[4] = {902, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V207[4] = {905, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V208[4] = {908, -1, 3, 1};
// Submodel TPFGS010 . 6
// variable v (Multiline shared var)
static const int IVIA_V209[4] = {1050, -1, 1, 1};
// variable temp (Multiline shared var)
static const int IVIA_V210[4] = {1051, -1, 1, 1};
// variable uspe (Multiline shared var)
static const int IVIA_V211[4] = {1052, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V212[4] = {1053, -1, 1, 1};
// variable sspe (Multiline shared var)
static const int IVIA_V213[4] = {1054, -1, 1, 1};
// variable fspe (Multiline shared var)
static const int IVIA_V214[4] = {1055, -1, 1, 1};
// variable gspe (Multiline shared var)
static const int IVIA_V215[4] = {1056, -1, 1, 1};
// variable cp (Multiline shared var)
static const int IVIA_V216[4] = {1057, -1, 1, 1};
// variable cv (Multiline shared var)
static const int IVIA_V217[4] = {1058, -1, 1, 1};
// variable xx (Multiline shared var)
static const int IVIA_V218[4] = {1059, -1, 1, 1};
// variable alpha (Multiline shared var)
static const int IVIA_V219[4] = {1060, -1, 1, 1};
// variable shsc (Multiline shared var)
static const int IVIA_V220[4] = {1061, -1, 1, 1};
// variable dpc (Multiline shared var)
static const int IVIA_V221[4] = {1062, -1, 1, 1};
// variable mu (Multiline shared var)
static const int IVIA_V222[4] = {1063, -1, 1, 1};
// variable nu (Multiline shared var)
static const int IVIA_V223[4] = {1064, -1, 1, 1};
// variable lambda (Multiline shared var)
static const int IVIA_V224[4] = {1065, -1, 1, 1};
// variable pr (Multiline shared var)
static const int IVIA_V225[4] = {1066, -1, 1, 1};
// variable sigma (Multiline shared var)
static const int IVIA_V226[4] = {1067, -1, 1, 1};
// variable region (Multiline shared var)
static const int IVIA_V227[4] = {1068, -1, 1, 1};
// variable wOil (Multiline shared var)
static const int IVIA_V228[4] = {1069, -1, 1, 1};
// variable bmod (Multiline shared var)
static const int IVIA_V229[4] = {1070, -1, 1, 1};
// variable svel (Multiline shared var)
static const int IVIA_V230[4] = {1071, -1, 1, 1};
// Submodel ACUCPFINT1 . 1
// variable massInt (Basic var)
static const int IVIA_V231[4] = {1072, -1, 1, 1};
// variable pstate (Explicit state)
static const int IVIA_V232[4] = {1073, 83, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V233[4] = {1075, 85, 2, 1};
// variable pint (Basic var)
static const int IVIA_V234[4] = {1077, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V235[4] = {1080, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V236[4] = {1083, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V237[4] = {1086, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V238[4] = {1089, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V239[4] = {1092, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V240[4] = {1095, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V241[4] = {1098, 87, 3, 1};
// variable dhint (Basic var)
static const int IVIA_V242[4] = {1101, -1, 3, 1};
// variable dhext (Basic var)
static const int IVIA_V243[4] = {1104, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V244[4] = {1107, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V245[4] = {1110, -1, 3, 1};
// Submodel ACMAS0000 . 2
// variable ah (Multiline shared var)
static const int IVIA_V246[4] = {1123, -1, 1, 1};
// variable hspe (Multiline shared var)
static const int IVIA_V247[4] = {1124, -1, 1, 1};
// Submodel CONS00 . 10
// variable k0GEN (Discrete var)
static const int IVIA_V248[4] = {1126, -1, 1, 1};
// Submodel SAT0 . 2
// variable xmax0GEN (Discrete var)
static const int IVIA_V249[4] = {1127, -1, 1, 1};
// variable xmin0GEN (Discrete var)
static const int IVIA_V250[4] = {1128, -1, 1, 1};
// Submodel OMEGC0 . 1
// Submodel MUL00 . 1
// Submodel ACMCTFINT2 . 1
// variable massInt (Basic var)
static const int IVIA_V251[4] = {736, -1, 1, 1};
// variable pstate (Explicit state)
static const int IVIA_V252[4] = {737, 37, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V253[4] = {739, 39, 2, 1};
// variable pint (Basic var)
static const int IVIA_V254[4] = {741, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V255[4] = {744, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V256[4] = {747, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V257[4] = {750, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V258[4] = {753, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V259[4] = {756, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V260[4] = {759, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V261[4] = {762, 41, 3, 1};
// variable hfref (Basic var)
static const int IVIA_V262[4] = {765, -1, 3, 1};
// variable hfah (Basic var)
static const int IVIA_V263[4] = {768, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V264[4] = {771, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V265[4] = {774, -1, 3, 1};
// Submodel ACMCTFTOP2 . 1
// variable pstate (Explicit state)
static const int IVIA_V266[4] = {777, 44, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V267[4] = {779, 46, 2, 1};
// variable tint4 (Basic var)
static const int IVIA_V268[4] = {781, -1, 1, 1};
// variable x4 (Basic var)
static const int IVIA_V269[4] = {782, -1, 1, 1};
// variable alpha4 (Basic var)
static const int IVIA_V270[4] = {783, -1, 1, 1};
// variable shsc4 (Basic var)
static const int IVIA_V271[4] = {784, -1, 1, 1};
// variable condl (Basic var)
static const int IVIA_V272[4] = {785, -1, 1, 1};
// variable massInt (Basic var)
static const int IVIA_V273[4] = {786, -1, 1, 1};
// variable pint (Basic var)
static const int IVIA_V274[4] = {787, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V275[4] = {790, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V276[4] = {793, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V277[4] = {796, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V278[4] = {799, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V279[4] = {802, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V280[4] = {805, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V281[4] = {808, 48, 3, 1};
// variable hfref (Basic var)
static const int IVIA_V282[4] = {811, -1, 3, 1};
// variable hfah (Basic var)
static const int IVIA_V283[4] = {814, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V284[4] = {817, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V285[4] = {820, -1, 3, 1};
// Submodel ACUCPFREF1 . 1
// variable massInt (Basic var)
static const int IVIA_V286[4] = {993, -1, 1, 1};
// variable pstate (Explicit state)
static const int IVIA_V287[4] = {994, 76, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V288[4] = {996, 78, 2, 1};
// variable pint (Basic var)
static const int IVIA_V289[4] = {998, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V290[4] = {1001, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V291[4] = {1004, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V292[4] = {1007, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V293[4] = {1010, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V294[4] = {1013, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V295[4] = {1016, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V296[4] = {1019, 80, 3, 1};
// variable dhint (Basic var)
static const int IVIA_V297[4] = {1022, -1, 3, 1};
// variable dhext (Basic var)
static const int IVIA_V298[4] = {1025, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V299[4] = {1028, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V300[4] = {1031, -1, 3, 1};
// Submodel GA00 . 2
// variable k0GEN (Discrete var)
static const int IVIA_V301[4] = {407, -1, 1, 1};
// Submodel SAT0 . 1
// variable xmax0GEN (Discrete var)
static const int IVIA_V302[4] = {424, -1, 1, 1};
// variable xmin0GEN (Discrete var)
static const int IVIA_V303[4] = {425, -1, 1, 1};
// Submodel ACUCPFEND1 . 1
// variable pstate (Explicit state)
static const int IVIA_V304[4] = {932, 67, 2, 1};
// variable rhostate (Explicit state)
static const int IVIA_V305[4] = {934, 69, 2, 1};
// variable tint4 (Basic var)
static const int IVIA_V306[4] = {936, -1, 1, 1};
// variable xint4 (Basic var)
static const int IVIA_V307[4] = {937, -1, 1, 1};
// variable alpha4 (Basic var)
static const int IVIA_V308[4] = {938, -1, 1, 1};
// variable shsc4 (Basic var)
static const int IVIA_V309[4] = {939, -1, 1, 1};
// variable eval (Basic var)
static const int IVIA_V310[4] = {940, -1, 1, 1};
// variable massInt (Basic var)
static const int IVIA_V311[4] = {941, -1, 1, 1};
// variable pint (Basic var)
static const int IVIA_V312[4] = {942, -1, 3, 1};
// variable rhoint (Basic var)
static const int IVIA_V313[4] = {945, -1, 3, 1};
// variable tint (Basic var)
static const int IVIA_V314[4] = {948, -1, 3, 1};
// variable xint (Basic var)
static const int IVIA_V315[4] = {951, -1, 3, 1};
// variable alphaInt (Basic var)
static const int IVIA_V316[4] = {954, -1, 3, 1};
// variable shscint (Basic var)
static const int IVIA_V317[4] = {957, -1, 3, 1};
// variable dmint (Basic var)
static const int IVIA_V318[4] = {960, -1, 3, 1};
// variable twall (Explicit state)
static const int IVIA_V319[4] = {963, 71, 3, 1};
// variable dhint (Basic var)
static const int IVIA_V320[4] = {966, -1, 3, 1};
// variable dhext (Basic var)
static const int IVIA_V321[4] = {969, -1, 3, 1};
// variable hint (Basic var)
static const int IVIA_V322[4] = {972, -1, 3, 1};
// variable region (Basic var)
static const int IVIA_V323[4] = {975, -1, 3, 1};
// Submodel TPFP002 . 1
// variable t1 (Basic var)
static const int IVIA_V324[4] = {72, -1, 1, 1};
// variable x1 (Basic var)
static const int IVIA_V325[4] = {73, -1, 1, 1};
// variable alpha1 (Basic var)
static const int IVIA_V326[4] = {74, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V327[4] = {75, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V328[4] = {76, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V329[4] = {77, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V330[4] = {78, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V331[4] = {79, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V332[4] = {80, -1, 1, 1};
// variable slipRatio (Multiline shared var)
static const int IVIA_V333[4] = {81, -1, 1, 1};
// variable xflow (Multiline shared var)
static const int IVIA_V334[4] = {82, -1, 1, 1};
// Submodel TPFP000 . 1
// variable temp (Basic var)
static const int IVIA_V335[4] = {120, -1, 1, 1};
// variable enth (Basic var)
static const int IVIA_V336[4] = {121, -1, 1, 1};
// variable xx (Basic var)
static const int IVIA_V337[4] = {122, -1, 1, 1};
// variable alpha (Basic var)
static const int IVIA_V338[4] = {123, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V339[4] = {124, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V340[4] = {125, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V341[4] = {126, -1, 1, 1};
// Submodel TPFP001 . 1
// variable t2 (Basic var)
static const int IVIA_V342[4] = {147, -1, 1, 1};
// variable x2 (Basic var)
static const int IVIA_V343[4] = {148, -1, 1, 1};
// variable alpha2 (Basic var)
static const int IVIA_V344[4] = {149, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V345[4] = {150, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V346[4] = {151, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V347[4] = {152, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V348[4] = {153, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V349[4] = {154, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V350[4] = {155, -1, 1, 1};
// variable slipRatio (Multiline shared var)
static const int IVIA_V351[4] = {156, -1, 1, 1};
// variable xflow (Multiline shared var)
static const int IVIA_V352[4] = {157, -1, 1, 1};
// Submodel SSINK . 1
// Submodel SSINK . 2
// Submodel SSINK . 5
// Submodel TPFP002 . 2
// variable t1 (Basic var)
static const int IVIA_V353[4] = {340, -1, 1, 1};
// variable x1 (Basic var)
static const int IVIA_V354[4] = {341, -1, 1, 1};
// variable alpha1 (Basic var)
static const int IVIA_V355[4] = {342, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V356[4] = {343, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V357[4] = {344, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V358[4] = {345, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V359[4] = {346, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V360[4] = {347, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V361[4] = {348, -1, 1, 1};
// variable slipRatio (Multiline shared var)
static const int IVIA_V362[4] = {349, -1, 1, 1};
// variable xflow (Multiline shared var)
static const int IVIA_V363[4] = {350, -1, 1, 1};
// Submodel TPFSCH00 . 1
// variable rho (Explicit state)
static const int IVIA_V364[4] = {363, 17, 1, 1};
// variable tau (Basic var)
static const int IVIA_V365[4] = {364, -1, 1, 1};
// variable load (Basic var)
static const int IVIA_V366[4] = {365, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V367[4] = {366, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V368[4] = {367, -1, 1, 1};
// Submodel TPFRFL000 . 1
// variable rey (Basic var)
static const int IVIA_V369[4] = {373, -1, 1, 1};
// variable vel (Basic var)
static const int IVIA_V370[4] = {374, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V371[4] = {375, -1, 1, 1};
// variable slipRatio (Basic var)
static const int IVIA_V372[4] = {376, -1, 1, 1};
// variable xflow (Basic var)
static const int IVIA_V373[4] = {377, -1, 1, 1};
// Submodel ACTEVSB02 . 1
// variable xPort4 (Basic var)
static const int IVIA_V374[4] = {397, -1, 1, 1};
// variable xPort1 (Basic var)
static const int IVIA_V375[4] = {398, -1, 1, 1};
// variable subcoolingPort4 (Basic var)
static const int IVIA_V376[4] = {399, -1, 1, 1};
// variable lift (Basic var)
static const int IVIA_V377[4] = {400, -1, 1, 1};
// variable superheatValveOpening (Basic var)
static const int IVIA_V378[4] = {401, -1, 1, 1};
// variable superheatFullyOpen (Basic var)
static const int IVIA_V379[4] = {402, -1, 1, 1};
// variable tempBulb (Explicit state)
static const int IVIA_V380[4] = {403, 22, 1, 1};
// Submodel TPFPHE0001 . 1
// variable t3 (Multiline var)
static const int IVIA_V381[4] = {443, -1, 1, 1};
// variable t1 (Basic var)
static const int IVIA_V382[4] = {444, -1, 1, 1};
// variable x1 (Basic var)
static const int IVIA_V383[4] = {445, -1, 1, 1};
// variable alpha1 (Basic var)
static const int IVIA_V384[4] = {446, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V385[4] = {447, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V386[4] = {448, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V387[4] = {449, -1, 1, 1};
// variable h (Basic var)
static const int IVIA_V388[4] = {450, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V389[4] = {451, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V390[4] = {452, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V391[4] = {453, -1, 1, 1};
// variable slipRatio (Multiline shared var)
static const int IVIA_V392[4] = {454, -1, 1, 1};
// variable xflow (Multiline shared var)
static const int IVIA_V393[4] = {455, -1, 1, 1};
// Submodel TPFPHE0001 . 2
// variable t3 (Multiline var)
static const int IVIA_V394[4] = {458, -1, 1, 1};
// variable t1 (Basic var)
static const int IVIA_V395[4] = {459, -1, 1, 1};
// variable x1 (Basic var)
static const int IVIA_V396[4] = {460, -1, 1, 1};
// variable alpha1 (Basic var)
static const int IVIA_V397[4] = {461, -1, 1, 1};
// variable shsc (Basic var)
static const int IVIA_V398[4] = {462, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V399[4] = {463, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V400[4] = {464, -1, 1, 1};
// variable h (Basic var)
static const int IVIA_V401[4] = {465, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V402[4] = {466, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V403[4] = {467, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V404[4] = {468, -1, 1, 1};
// variable slipRatio (Multiline shared var)
static const int IVIA_V405[4] = {469, -1, 1, 1};
// variable xflow (Multiline shared var)
static const int IVIA_V406[4] = {470, -1, 1, 1};
// Submodel TPFCVINT01 . 1
// variable t3 (Basic var)
static const int IVIA_V407[4] = {512, -1, 1, 1};
// variable x3 (Basic var)
static const int IVIA_V408[4] = {513, -1, 1, 1};
// variable alpha3 (Basic var)
static const int IVIA_V409[4] = {514, -1, 1, 1};
// variable shsc3 (Basic var)
static const int IVIA_V410[4] = {515, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V411[4] = {516, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V412[4] = {517, -1, 1, 1};
// variable h2 (Basic var)
static const int IVIA_V413[4] = {518, -1, 1, 1};
// variable h4 (Basic var)
static const int IVIA_V414[4] = {519, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V415[4] = {520, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V416[4] = {521, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V417[4] = {522, -1, 1, 1};
// variable t1 (Multiline var)
static const int IVIA_V418[4] = {523, -1, 1, 1};
// Submodel TPFCVINT01 . 2
// variable t3 (Basic var)
static const int IVIA_V419[4] = {528, -1, 1, 1};
// variable x3 (Basic var)
static const int IVIA_V420[4] = {529, -1, 1, 1};
// variable alpha3 (Basic var)
static const int IVIA_V421[4] = {530, -1, 1, 1};
// variable shsc3 (Basic var)
static const int IVIA_V422[4] = {531, -1, 1, 1};
// variable rey (Multiline shared var)
static const int IVIA_V423[4] = {532, -1, 1, 1};
// variable vel (Multiline shared var)
static const int IVIA_V424[4] = {533, -1, 1, 1};
// variable h2 (Basic var)
static const int IVIA_V425[4] = {534, -1, 1, 1};
// variable h4 (Basic var)
static const int IVIA_V426[4] = {535, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V427[4] = {536, -1, 1, 1};
// variable mtot (Basic var)
static const int IVIA_V428[4] = {537, -1, 1, 1};
// variable region (Basic var)
static const int IVIA_V429[4] = {538, -1, 1, 1};
// variable t1 (Multiline var)
static const int IVIA_V430[4] = {539, -1, 1, 1};
// Submodel THC000 . 1
// variable se (Basic var)
static const int IVIA_V431[4] = {1034, -1, 1, 1};
// variable actCmass (Explicit state)
static const int IVIA_V432[4] = {-1, -1, 1, 0};
// variable powerCmass (Activity var)
static const int IVIA_V433[4] = {1035, -1, 1, 1};
// variable energyCmass (Explicit state)
static const int IVIA_V434[4] = {-1, -1, 1, 0};
// variable calcmass (Basic var)
static const int IVIA_V435[4] = {1036, -1, 1, 1};
// variable x (Basic var)
static const int IVIA_V436[4] = {1037, -1, 1, 1};
// Submodel THC000 . 2
// variable se (Basic var)
static const int IVIA_V437[4] = {1038, -1, 1, 1};
// variable actCmass (Explicit state)
static const int IVIA_V438[4] = {-1, -1, 1, 0};
// variable powerCmass (Activity var)
static const int IVIA_V439[4] = {1039, -1, 1, 1};
// variable energyCmass (Explicit state)
static const int IVIA_V440[4] = {-1, -1, 1, 0};
// variable calcmass (Basic var)
static const int IVIA_V441[4] = {1040, -1, 1, 1};
// variable x (Basic var)
static const int IVIA_V442[4] = {1041, -1, 1, 1};
// Submodel THC000 . 3
// variable se (Basic var)
static const int IVIA_V443[4] = {1042, -1, 1, 1};
// variable actCmass (Explicit state)
static const int IVIA_V444[4] = {-1, -1, 1, 0};
// variable powerCmass (Activity var)
static const int IVIA_V445[4] = {1043, -1, 1, 1};
// variable energyCmass (Explicit state)
static const int IVIA_V446[4] = {-1, -1, 1, 0};
// variable calcmass (Basic var)
static const int IVIA_V447[4] = {1044, -1, 1, 1};
// variable x (Basic var)
static const int IVIA_V448[4] = {1045, -1, 1, 1};
// Submodel THC000 . 4
// variable se (Basic var)
static const int IVIA_V449[4] = {1046, -1, 1, 1};
// variable actCmass (Explicit state)
static const int IVIA_V450[4] = {-1, -1, 1, 0};
// variable powerCmass (Activity var)
static const int IVIA_V451[4] = {1047, -1, 1, 1};
// variable energyCmass (Explicit state)
static const int IVIA_V452[4] = {-1, -1, 1, 0};
// variable calcmass (Basic var)
static const int IVIA_V453[4] = {1048, -1, 1, 1};
// variable x (Basic var)
static const int IVIA_V454[4] = {1049, -1, 1, 1};
// Submodel TPFPUCOMPVD0000 . 1
// variable dmhcomp (Basic var)
static const int IVIA_V455[4] = {1114, -1, 1, 1};
// variable tau1 (Basic var)
static const int IVIA_V456[4] = {1115, -1, 1, 1};
// variable dmeff (Basic var)
static const int IVIA_V457[4] = {1116, -1, 1, 1};
// variable dmheff (Basic var)
static const int IVIA_V458[4] = {1117, -1, 1, 1};
// variable mecheff (Basic var)
static const int IVIA_V459[4] = {1118, -1, 1, 1};
// variable disp (Basic var)
static const int IVIA_V460[4] = {1119, -1, 1, 1};
// variable xm (Basic var)
static const int IVIA_V461[4] = {1120, -1, 1, 1};
// variable xn (Basic var)
static const int IVIA_V462[4] = {1121, -1, 1, 1};
// variable xh (Basic var)
static const int IVIA_V463[4] = {1122, -1, 1, 1};
// Submodel TPFPIN00 . 1
// variable re (Basic var)
static const int IVIA_V464[4] = {98, -1, 1, 1};
// variable vel (Basic var)
static const int IVIA_V465[4] = {99, -1, 1, 1};
// variable dp (Basic var)
static const int IVIA_V466[4] = {100, -1, 1, 1};
// variable ff (Basic var)
static const int IVIA_V467[4] = {101, -1, 1, 1};
// Submodel SSINK . 3
// Submodel THGCV00 . 1
// variable Re (Basic var)
static const int IVIA_V468[4] = {550, -1, 1, 1};
// variable Pr (Basic var)
static const int IVIA_V469[4] = {551, -1, 1, 1};
// variable Gr (Basic var)
static const int IVIA_V470[4] = {552, -1, 1, 1};
// variable NuFree (Basic var)
static const int IVIA_V471[4] = {553, -1, 1, 1};
// variable NuForced (Basic var)
static const int IVIA_V472[4] = {554, -1, 1, 1};
// variable hconv (Basic var)
static const int IVIA_V473[4] = {555, -1, 1, 1};
// Submodel THGCV00 . 2
// variable Re (Basic var)
static const int IVIA_V474[4] = {558, -1, 1, 1};
// variable Pr (Basic var)
static const int IVIA_V475[4] = {559, -1, 1, 1};
// variable Gr (Basic var)
static const int IVIA_V476[4] = {560, -1, 1, 1};
// variable NuFree (Basic var)
static const int IVIA_V477[4] = {561, -1, 1, 1};
// variable NuForced (Basic var)
static const int IVIA_V478[4] = {562, -1, 1, 1};
// variable hconv (Basic var)
static const int IVIA_V479[4] = {563, -1, 1, 1};
// Submodel SSINK . 4
// Submodel SSINK . 6
// Submodel THMAMX000 . 1
// variable ah (Basic var)
static const int IVIA_V480[4] = {576, -1, 3, 1};
// variable hspe (Basic var)
static const int IVIA_V481[4] = {579, -1, 3, 1};
// Submodel THMAGS00 . 5
// variable ah3 (Basic var)
static const int IVIA_V482[4] = {587, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V483[4] = {588, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V484[4] = {589, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V485[4] = {590, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V486[4] = {591, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V487[4] = {592, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V488[4] = {593, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V489[4] = {594, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V490[4] = {595, -1, 1, 1};
// Submodel SSINK . 7
// Submodel THMAMX000 . 3
// variable ah (Basic var)
static const int IVIA_V491[4] = {632, -1, 3, 1};
// variable hspe (Basic var)
static const int IVIA_V492[4] = {635, -1, 3, 1};
// Submodel THMAGS00 . 7
// variable ah3 (Basic var)
static const int IVIA_V493[4] = {643, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V494[4] = {644, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V495[4] = {645, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V496[4] = {646, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V497[4] = {647, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V498[4] = {648, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V499[4] = {649, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V500[4] = {650, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V501[4] = {651, -1, 1, 1};
// Submodel SSINK . 9
// Submodel THMAMX000 . 4
// variable ah (Basic var)
static const int IVIA_V502[4] = {660, -1, 3, 1};
// variable hspe (Basic var)
static const int IVIA_V503[4] = {663, -1, 3, 1};
// Submodel THMAGS00 . 8
// variable ah3 (Basic var)
static const int IVIA_V504[4] = {671, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V505[4] = {672, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V506[4] = {673, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V507[4] = {674, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V508[4] = {675, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V509[4] = {676, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V510[4] = {677, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V511[4] = {678, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V512[4] = {679, -1, 1, 1};
// Submodel SSINK . 10
// Submodel THMAMX000 . 5
// variable ah (Basic var)
static const int IVIA_V513[4] = {688, -1, 3, 1};
// variable hspe (Basic var)
static const int IVIA_V514[4] = {691, -1, 3, 1};
// Submodel THMAGS00 . 9
// variable ah3 (Basic var)
static const int IVIA_V515[4] = {695, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V516[4] = {696, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V517[4] = {697, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V518[4] = {698, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V519[4] = {699, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V520[4] = {700, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V521[4] = {701, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V522[4] = {702, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V523[4] = {703, -1, 1, 1};
// Submodel SSINK . 11
// Submodel THMASINK00 . 2
// Submodel THMAMX000 . 2
// variable ah (Basic var)
static const int IVIA_V524[4] = {604, -1, 3, 1};
// variable hspe (Basic var)
static const int IVIA_V525[4] = {607, -1, 3, 1};
// Submodel THMAGS00 . 6
// variable ah3 (Basic var)
static const int IVIA_V526[4] = {611, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V527[4] = {612, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V528[4] = {613, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V529[4] = {614, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V530[4] = {615, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V531[4] = {616, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V532[4] = {617, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V533[4] = {618, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V534[4] = {619, -1, 1, 1};
// Submodel SSINK . 8
// Submodel THMAFS00 . 1
// variable dmd3 (Basic var)
static const int IVIA_V535[4] = {59, -1, 1, 1};
// Submodel THMAGS00 . 1
// variable ah3 (Basic var)
static const int IVIA_V536[4] = {14, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V537[4] = {15, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V538[4] = {16, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V539[4] = {17, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V540[4] = {18, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V541[4] = {19, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V542[4] = {20, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V543[4] = {21, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V544[4] = {22, -1, 1, 1};
// Submodel THMAGS00 . 2
// variable ah3 (Basic var)
static const int IVIA_V545[4] = {29, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V546[4] = {30, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V547[4] = {31, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V548[4] = {32, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V549[4] = {33, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V550[4] = {34, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V551[4] = {35, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V552[4] = {36, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V553[4] = {37, -1, 1, 1};
// Submodel THMAGS00 . 3
// variable ah3 (Basic var)
static const int IVIA_V554[4] = {44, -1, 1, 1};
// variable hspe3 (Basic var)
static const int IVIA_V555[4] = {45, -1, 1, 1};
// variable rho3 (Basic var)
static const int IVIA_V556[4] = {46, -1, 1, 1};
// variable mu3 (Basic var)
static const int IVIA_V557[4] = {47, -1, 1, 1};
// variable cp3 (Basic var)
static const int IVIA_V558[4] = {48, -1, 1, 1};
// variable lam3 (Basic var)
static const int IVIA_V559[4] = {49, -1, 1, 1};
// variable ahsat3 (Basic var)
static const int IVIA_V560[4] = {50, -1, 1, 1};
// variable tempBulbC (Basic var)
static const int IVIA_V561[4] = {51, -1, 1, 1};
// variable tempDewC (Basic var)
static const int IVIA_V562[4] = {52, -1, 1, 1};
// Submodel THMASINK00 . 1
static const int* IVIA[563] = {
     IVIA_V0, IVIA_V1, IVIA_V2, IVIA_V3, IVIA_V4, IVIA_V5, IVIA_V6, IVIA_V7, IVIA_V8, IVIA_V9
   , IVIA_V10, IVIA_V11, IVIA_V12, IVIA_V13, IVIA_V14, IVIA_V15, IVIA_V16, IVIA_V17, IVIA_V18, IVIA_V19
   , IVIA_V20, IVIA_V21, IVIA_V22, IVIA_V23, IVIA_V24, IVIA_V25, IVIA_V26, IVIA_V27, IVIA_V28, IVIA_V29
   , IVIA_V30, IVIA_V31, IVIA_V32, IVIA_V33, IVIA_V34, IVIA_V35, IVIA_V36, IVIA_V37, IVIA_V38, IVIA_V39
   , IVIA_V40, IVIA_V41, IVIA_V42, IVIA_V43, IVIA_V44, IVIA_V45, IVIA_V46, IVIA_V47, IVIA_V48, IVIA_V49
   , IVIA_V50, IVIA_V51, IVIA_V52, IVIA_V53, IVIA_V54, IVIA_V55, IVIA_V56, IVIA_V57, IVIA_V58, IVIA_V59
   , IVIA_V60, IVIA_V61, IVIA_V62, IVIA_V63, IVIA_V64, IVIA_V65, IVIA_V66, IVIA_V67, IVIA_V68, IVIA_V69
   , IVIA_V70, IVIA_V71, IVIA_V72, IVIA_V73, IVIA_V74, IVIA_V75, IVIA_V76, IVIA_V77, IVIA_V78, IVIA_V79
   , IVIA_V80, IVIA_V81, IVIA_V82, IVIA_V83, IVIA_V84, IVIA_V85, IVIA_V86, IVIA_V87, IVIA_V88, IVIA_V89
   , IVIA_V90, IVIA_V91, IVIA_V92, IVIA_V93, IVIA_V94, IVIA_V95, IVIA_V96, IVIA_V97, IVIA_V98, IVIA_V99
   , IVIA_V100, IVIA_V101, IVIA_V102, IVIA_V103, IVIA_V104, IVIA_V105, IVIA_V106, IVIA_V107, IVIA_V108, IVIA_V109
   , IVIA_V110, IVIA_V111, IVIA_V112, IVIA_V113, IVIA_V114, IVIA_V115, IVIA_V116, IVIA_V117, IVIA_V118, IVIA_V119
   , IVIA_V120, IVIA_V121, IVIA_V122, IVIA_V123, IVIA_V124, IVIA_V125, IVIA_V126, IVIA_V127, IVIA_V128, IVIA_V129
   , IVIA_V130, IVIA_V131, IVIA_V132, IVIA_V133, IVIA_V134, IVIA_V135, IVIA_V136, IVIA_V137, IVIA_V138, IVIA_V139
   , IVIA_V140, IVIA_V141, IVIA_V142, IVIA_V143, IVIA_V144, IVIA_V145, IVIA_V146, IVIA_V147, IVIA_V148, IVIA_V149
   , IVIA_V150, IVIA_V151, IVIA_V152, IVIA_V153, IVIA_V154, IVIA_V155, IVIA_V156, IVIA_V157, IVIA_V158, IVIA_V159
   , IVIA_V160, IVIA_V161, IVIA_V162, IVIA_V163, IVIA_V164, IVIA_V165, IVIA_V166, IVIA_V167, IVIA_V168, IVIA_V169
   , IVIA_V170, IVIA_V171, IVIA_V172, IVIA_V173, IVIA_V174, IVIA_V175, IVIA_V176, IVIA_V177, IVIA_V178, IVIA_V179
   , IVIA_V180, IVIA_V181, IVIA_V182, IVIA_V183, IVIA_V184, IVIA_V185, IVIA_V186, IVIA_V187, IVIA_V188, IVIA_V189
   , IVIA_V190, IVIA_V191, IVIA_V192, IVIA_V193, IVIA_V194, IVIA_V195, IVIA_V196, IVIA_V197, IVIA_V198, IVIA_V199
   , IVIA_V200, IVIA_V201, IVIA_V202, IVIA_V203, IVIA_V204, IVIA_V205, IVIA_V206, IVIA_V207, IVIA_V208, IVIA_V209
   , IVIA_V210, IVIA_V211, IVIA_V212, IVIA_V213, IVIA_V214, IVIA_V215, IVIA_V216, IVIA_V217, IVIA_V218, IVIA_V219
   , IVIA_V220, IVIA_V221, IVIA_V222, IVIA_V223, IVIA_V224, IVIA_V225, IVIA_V226, IVIA_V227, IVIA_V228, IVIA_V229
   , IVIA_V230, IVIA_V231, IVIA_V232, IVIA_V233, IVIA_V234, IVIA_V235, IVIA_V236, IVIA_V237, IVIA_V238, IVIA_V239
   , IVIA_V240, IVIA_V241, IVIA_V242, IVIA_V243, IVIA_V244, IVIA_V245, IVIA_V246, IVIA_V247, IVIA_V248, IVIA_V249
   , IVIA_V250, IVIA_V251, IVIA_V252, IVIA_V253, IVIA_V254, IVIA_V255, IVIA_V256, IVIA_V257, IVIA_V258, IVIA_V259
   , IVIA_V260, IVIA_V261, IVIA_V262, IVIA_V263, IVIA_V264, IVIA_V265, IVIA_V266, IVIA_V267, IVIA_V268, IVIA_V269
   , IVIA_V270, IVIA_V271, IVIA_V272, IVIA_V273, IVIA_V274, IVIA_V275, IVIA_V276, IVIA_V277, IVIA_V278, IVIA_V279
   , IVIA_V280, IVIA_V281, IVIA_V282, IVIA_V283, IVIA_V284, IVIA_V285, IVIA_V286, IVIA_V287, IVIA_V288, IVIA_V289
   , IVIA_V290, IVIA_V291, IVIA_V292, IVIA_V293, IVIA_V294, IVIA_V295, IVIA_V296, IVIA_V297, IVIA_V298, IVIA_V299
   , IVIA_V300, IVIA_V301, IVIA_V302, IVIA_V303, IVIA_V304, IVIA_V305, IVIA_V306, IVIA_V307, IVIA_V308, IVIA_V309
   , IVIA_V310, IVIA_V311, IVIA_V312, IVIA_V313, IVIA_V314, IVIA_V315, IVIA_V316, IVIA_V317, IVIA_V318, IVIA_V319
   , IVIA_V320, IVIA_V321, IVIA_V322, IVIA_V323, IVIA_V324, IVIA_V325, IVIA_V326, IVIA_V327, IVIA_V328, IVIA_V329
   , IVIA_V330, IVIA_V331, IVIA_V332, IVIA_V333, IVIA_V334, IVIA_V335, IVIA_V336, IVIA_V337, IVIA_V338, IVIA_V339
   , IVIA_V340, IVIA_V341, IVIA_V342, IVIA_V343, IVIA_V344, IVIA_V345, IVIA_V346, IVIA_V347, IVIA_V348, IVIA_V349
   , IVIA_V350, IVIA_V351, IVIA_V352, IVIA_V353, IVIA_V354, IVIA_V355, IVIA_V356, IVIA_V357, IVIA_V358, IVIA_V359
   , IVIA_V360, IVIA_V361, IVIA_V362, IVIA_V363, IVIA_V364, IVIA_V365, IVIA_V366, IVIA_V367, IVIA_V368, IVIA_V369
   , IVIA_V370, IVIA_V371, IVIA_V372, IVIA_V373, IVIA_V374, IVIA_V375, IVIA_V376, IVIA_V377, IVIA_V378, IVIA_V379
   , IVIA_V380, IVIA_V381, IVIA_V382, IVIA_V383, IVIA_V384, IVIA_V385, IVIA_V386, IVIA_V387, IVIA_V388, IVIA_V389
   , IVIA_V390, IVIA_V391, IVIA_V392, IVIA_V393, IVIA_V394, IVIA_V395, IVIA_V396, IVIA_V397, IVIA_V398, IVIA_V399
   , IVIA_V400, IVIA_V401, IVIA_V402, IVIA_V403, IVIA_V404, IVIA_V405, IVIA_V406, IVIA_V407, IVIA_V408, IVIA_V409
   , IVIA_V410, IVIA_V411, IVIA_V412, IVIA_V413, IVIA_V414, IVIA_V415, IVIA_V416, IVIA_V417, IVIA_V418, IVIA_V419
   , IVIA_V420, IVIA_V421, IVIA_V422, IVIA_V423, IVIA_V424, IVIA_V425, IVIA_V426, IVIA_V427, IVIA_V428, IVIA_V429
   , IVIA_V430, IVIA_V431, IVIA_V432, IVIA_V433, IVIA_V434, IVIA_V435, IVIA_V436, IVIA_V437, IVIA_V438, IVIA_V439
   , IVIA_V440, IVIA_V441, IVIA_V442, IVIA_V443, IVIA_V444, IVIA_V445, IVIA_V446, IVIA_V447, IVIA_V448, IVIA_V449
   , IVIA_V450, IVIA_V451, IVIA_V452, IVIA_V453, IVIA_V454, IVIA_V455, IVIA_V456, IVIA_V457, IVIA_V458, IVIA_V459
   , IVIA_V460, IVIA_V461, IVIA_V462, IVIA_V463, IVIA_V464, IVIA_V465, IVIA_V466, IVIA_V467, IVIA_V468, IVIA_V469
   , IVIA_V470, IVIA_V471, IVIA_V472, IVIA_V473, IVIA_V474, IVIA_V475, IVIA_V476, IVIA_V477, IVIA_V478, IVIA_V479
   , IVIA_V480, IVIA_V481, IVIA_V482, IVIA_V483, IVIA_V484, IVIA_V485, IVIA_V486, IVIA_V487, IVIA_V488, IVIA_V489
   , IVIA_V490, IVIA_V491, IVIA_V492, IVIA_V493, IVIA_V494, IVIA_V495, IVIA_V496, IVIA_V497, IVIA_V498, IVIA_V499
   , IVIA_V500, IVIA_V501, IVIA_V502, IVIA_V503, IVIA_V504, IVIA_V505, IVIA_V506, IVIA_V507, IVIA_V508, IVIA_V509
   , IVIA_V510, IVIA_V511, IVIA_V512, IVIA_V513, IVIA_V514, IVIA_V515, IVIA_V516, IVIA_V517, IVIA_V518, IVIA_V519
   , IVIA_V520, IVIA_V521, IVIA_V522, IVIA_V523, IVIA_V524, IVIA_V525, IVIA_V526, IVIA_V527, IVIA_V528, IVIA_V529
   , IVIA_V530, IVIA_V531, IVIA_V532, IVIA_V533, IVIA_V534, IVIA_V535, IVIA_V536, IVIA_V537, IVIA_V538, IVIA_V539
   , IVIA_V540, IVIA_V541, IVIA_V542, IVIA_V543, IVIA_V544, IVIA_V545, IVIA_V546, IVIA_V547, IVIA_V548, IVIA_V549
   , IVIA_V550, IVIA_V551, IVIA_V552, IVIA_V553, IVIA_V554, IVIA_V555, IVIA_V556, IVIA_V557, IVIA_V558, IVIA_V559
   , IVIA_V560, IVIA_V561, IVIA_V562
};

static const int PVIA[711] = {
     0, 2, 42, 27, 8, 54, 102, 104, 106, 102
   , 104, 106, 108, 109, 110, 111, 112, 127, 129, 131
   , 133, 65, 66, 67, 68, 69, 70, 71, 190, 194
   , 195, 196, 197, 191, 192, 193, 86, 87, 88, 89
   , 90, 91, 92, 220, 224, 225, 226, 227, 221, 222
   , 223, 266, 267, 268, 262, 263, 264, 265, 269, 273
   , 274, 275, 276, 270, 271, 272, 135, 136, 137, 138
   , 139, 140, 141, 251, 302, 303, 304, 305, 299, 300
   , 301, 356, 83, 0, 408, 409, 410, 411, 412, 109
   , 110, 111, 112, 422, 2, 431, 433, 435, 472, 390
   , 391, 392, 393, 394, 395, 396, 473, 477, 478, 479
   , 480, 474, 475, 476, 541, 543, 545, 547, 408, 409
   , 410, 411, 620, 621, 622, 623, 351, 352, 353, 354
   , 355, 823, 824, 825, 826, 827, 828, 221, 8, 222
   , 9, 223, 224, 225, 823, 824, 825, 826, 827, 828
   , 368, 18, 369, 19, 370, 371, 372, 628, 629, 630
   , 631, 719, 720, 721, 722, 723, 724, 714, 715, 716
   , 717, 718, 378, 379, 380, 381, 382, 383, 384, 250
   , 328, 329, 330, 331, 332, 333, 334, 988, 74, 989
   , 75, 990, 991, 992, 982, 983, 984, 985, 986, 987
   , 564, 565, 566, 567, 926, 927, 928, 929, 930, 931
   , 921, 922, 923, 924, 925, 131, 129, 133, 127, 978
   , 979, 980, 981, 1125, 1113, 1125, 83, 85, 412, 406
   , 422, 716, 33, 717, 34, 718, 714, 715, 719, 720
   , 721, 722, 723, 724, 656, 657, 658, 659, 728, 729
   , 725, 726, 727, 730, 731, 732, 733, 734, 735, 730
   , 731, 732, 733, 734, 735, 725, 35, 726, 36, 727
   , 728, 729, 684, 685, 686, 687, 191, 6, 192, 7
   , 193, 194, 195, 978, 979, 980, 981, 335, 14, 336
   , 15, 337, 338, 339, 572, 573, 574, 575, 982, 983
   , 984, 985, 986, 987, 991, 992, 988, 989, 990, 405
   , 406, 108, 405, 923, 65, 924, 66, 925, 921, 922
   , 926, 927, 928, 929, 930, 931, 596, 597, 598, 599
   , 270, 10, 271, 11, 272, 273, 274, 62, 0, 63
   , 1, 64, 60, 61, 68, 69, 65, 66, 67, 117
   , 2, 118, 3, 119, 115, 116, 93, 94, 95, 96
   , 97, 138, 139, 135, 136, 137, 144, 4, 145, 5
   , 146, 142, 143, 190, 220, 269, 332, 12, 333, 13
   , 334, 328, 329, 338, 339, 335, 336, 337, 353, 16
   , 354, 355, 351, 352, 357, 356, 360, 361, 362, 358
   , 359, 358, 359, 360, 361, 362, 371, 372, 368, 369
   , 370, 381, 382, 378, 379, 380, 388, 389, 385, 386
   , 387, 299, 300, 301, 302, 303, 393, 394, 390, 391
   , 392, 438, 23, 439, 24, 440, 436, 437, 442, 441
   , 262, 263, 266, 267, 268, 385, 20, 386, 21, 387
   , 388, 389, 457, 456, 436, 437, 438, 439, 440, 115
   , 116, 117, 118, 119, 504, 503, 507, 29, 508, 30
   , 509, 505, 506, 511, 510, 505, 506, 507, 508, 509
   , 525, 524, 474, 27, 475, 28, 476, 477, 478, 527
   , 526, 510, 31, 511, 542, 543, 548, 549, 544, 545
   , 526, 32, 527, 546, 547, 556, 557, 540, 541, 441
   , 25, 442, 471, 472, 524, 525, 430, 431, 456, 26
   , 457, 432, 433, 503, 504, 434, 435, 142, 143, 144
   , 145, 146, 1113, 60, 61, 62, 63, 64, 84, 85
   , 89, 90, 86, 87, 88, 96, 97, 93, 94, 95
   , 250, 549, 548, 557, 556, 251, 473, 564, 565, 566
   , 567, 568, 569, 570, 571, 572, 573, 574, 575, 582
   , 583, 584, 585, 586, 568, 569, 570, 571, 586, 620
   , 621, 622, 623, 624, 625, 626, 627, 628, 629, 630
   , 631, 638, 639, 640, 641, 642, 624, 625, 626, 627
   , 642, 638, 639, 640, 641, 652, 653, 654, 655, 656
   , 657, 658, 659, 666, 667, 668, 669, 670, 652, 653
   , 654, 655, 670, 666, 667, 668, 669, 680, 681, 682
   , 683, 684, 685, 686, 687, 258, 259, 260, 261, 694
   , 680, 681, 682, 683, 694, 258, 259, 260, 261, 596
   , 597, 598, 599, 600, 601, 602, 603, 582, 583, 584
   , 585, 55, 56, 57, 58, 610, 600, 601, 602, 603
   , 610, 10, 11, 12, 13, 53, 55, 56, 57, 58
   , 4, 5, 6, 7, 9, 10, 11, 12, 13, 23
   , 24, 25, 26, 28, 4, 5, 6, 7, 38, 39
   , 40, 41, 43, 23, 24, 25, 26, 38, 39, 40
   , 41
};

// Submodel RSTAT . 1
// Submodel TPF_FP01 . 1
static const int RPARAM_0[2] = {0, 1};
static const int RPARAM_1[2] = {1, 1};
static const int RPARAM_2[2] = {2, 1};
static const int RPARAM_3[2] = {3, 1};
static const int RPARAM_4[2] = {4, 1};
static const int RPARAM_5[2] = {5, 1};
static const int RPARAM_6[2] = {6, 1};
static const int RPARAM_7[2] = {7, 1};
static const int RPARAM_8[2] = {8, 1};
static const int RPARAM_9[2] = {9, 1};
static const int IPARAM_10[2] = {0, 1};
static const int IPARAM_11[2] = {1, 1};
static const int IPARAM_12[2] = {2, 1};
static const int IPARAM_13[2] = {3, 1};
static const int IPARAM_14[2] = {4, 1};
static const int IPARAM_15[2] = {5, 1};
static const int IPARAM_16[2] = {6, 1};
static const int IPARAM_17[2] = {7, 1};
static const int IPARAM_18[2] = {8, 1};
static const int IPARAM_19[2] = {9, 1};
static const int IPARAM_20[2] = {10, 1};
static const int IPARAM_21[2] = {11, 1};
static const int IPARAM_22[2] = {12, 1};
static const int IPARAM_23[2] = {13, 1};
static const int IPARAM_24[2] = {14, 1};
static const int IPARAM_25[2] = {15, 1};
static const int TPARAM_26[2] = {0, 1};
// Submodel THSD00 . 1
static const int RPARAM_27[2] = {0, 1};
static const int RPARAM_28[2] = {1, 1};
static const int RPARAM_29[2] = {2, 1};
static const int RPARAM_30[2] = {3, 1};
static const int RPARAM_31[2] = {4, 1};
static const int RPARAM_32[2] = {5, 1};
static const int RPARAM_33[2] = {6, 1};
static const int RPARAM_34[2] = {7, 1};
static const int RPARAM_35[2] = {8, 1};
static const int RPARAM_36[2] = {9, 1};
static const int RPARAM_37[2] = {10, 1};
static const int IPARAM_38[2] = {0, 1};
static const int IPARAM_39[2] = {1, 1};
static const int IPARAM_40[2] = {2, 1};
static const int IPARAM_41[2] = {3, 1};
static const int IPARAM_42[2] = {4, 1};
static const int IPARAM_43[2] = {5, 1};
static const int IPARAM_44[2] = {6, 1};
static const int TPARAM_45[2] = {0, 1};
static const int TPARAM_46[2] = {1, 1};
static const int TPARAM_47[2] = {2, 1};
static const int TPARAM_48[2] = {3, 1};
static const int TPARAM_49[2] = {4, 1};
static const int TPARAM_50[2] = {5, 1};
// Submodel THSD00 . 2
static const int RPARAM_51[2] = {0, 1};
static const int RPARAM_52[2] = {1, 1};
static const int RPARAM_53[2] = {2, 1};
static const int RPARAM_54[2] = {3, 1};
static const int RPARAM_55[2] = {4, 1};
static const int RPARAM_56[2] = {5, 1};
static const int RPARAM_57[2] = {6, 1};
static const int RPARAM_58[2] = {7, 1};
static const int RPARAM_59[2] = {8, 1};
static const int RPARAM_60[2] = {9, 1};
static const int RPARAM_61[2] = {10, 1};
static const int IPARAM_62[2] = {0, 1};
static const int IPARAM_63[2] = {1, 1};
static const int IPARAM_64[2] = {2, 1};
static const int IPARAM_65[2] = {3, 1};
static const int IPARAM_66[2] = {4, 1};
static const int IPARAM_67[2] = {5, 1};
static const int IPARAM_68[2] = {6, 1};
static const int TPARAM_69[2] = {0, 1};
static const int TPARAM_70[2] = {1, 1};
static const int TPARAM_71[2] = {2, 1};
static const int TPARAM_72[2] = {3, 1};
static const int TPARAM_73[2] = {4, 1};
static const int TPARAM_74[2] = {5, 1};
// Submodel ACMCTF0 . 1
static const int RPARAM_75[2] = {0, 1};
static const int RPARAM_76[2] = {1, 1};
static const int RPARAM_77[2] = {2, 1};
static const int RPARAM_78[2] = {3, 1};
static const int RPARAM_79[2] = {4, 1};
static const int RPARAM_80[2] = {5, 1};
static const int RPARAM_81[2] = {6, 1};
static const int RPARAM_82[2] = {7, 1};
static const int RPARAM_83[2] = {8, 1};
static const int RPARAM_84[2] = {9, 1};
static const int RPARAM_85[2] = {10, 1};
static const int RPARAM_86[2] = {11, 1};
static const int RPARAM_87[2] = {12, 1};
static const int RPARAM_88[2] = {13, 1};
static const int RPARAM_89[2] = {14, 1};
static const int IPARAM_90[2] = {0, 1};
static const int IPARAM_91[2] = {1, 1};
static const int IPARAM_92[2] = {2, 1};
static const int IPARAM_93[2] = {3, 1};
static const int IPARAM_94[2] = {4, 1};
static const int IPARAM_95[2] = {5, 1};
static const int IPARAM_96[2] = {6, 1};
static const int IPARAM_97[2] = {7, 1};
static const int IPARAM_98[2] = {8, 1};
static const int IPARAM_99[2] = {9, 1};
static const int IPARAM_100[2] = {10, 1};
static const int TPARAM_101[2] = {0, 1};
static const int TPARAM_102[2] = {1, 1};
static const int TPARAM_103[2] = {2, 1};
static const int TPARAM_104[2] = {3, 1};
static const int TPARAM_105[2] = {4, 1};
static const int TPARAM_106[2] = {5, 1};
static const int TPARAM_107[2] = {6, 1};
static const int TPARAM_108[2] = {7, 1};
static const int TPARAM_109[2] = {8, 1};
// Submodel ACUCPF0 . 1
static const int RPARAM_110[2] = {0, 1};
static const int RPARAM_111[2] = {1, 1};
static const int RPARAM_112[2] = {2, 1};
static const int RPARAM_113[2] = {3, 1};
static const int RPARAM_114[2] = {4, 1};
static const int RPARAM_115[2] = {5, 1};
static const int RPARAM_116[2] = {6, 1};
static const int RPARAM_117[2] = {7, 1};
static const int RPARAM_118[2] = {8, 1};
static const int RPARAM_119[2] = {9, 1};
static const int RPARAM_120[2] = {10, 1};
static const int RPARAM_121[2] = {11, 1};
static const int RPARAM_122[2] = {12, 1};
static const int RPARAM_123[2] = {13, 1};
static const int RPARAM_124[2] = {14, 1};
static const int IPARAM_125[2] = {0, 1};
static const int IPARAM_126[2] = {1, 1};
static const int IPARAM_127[2] = {2, 1};
static const int IPARAM_128[2] = {3, 1};
static const int IPARAM_129[2] = {4, 1};
static const int IPARAM_130[2] = {5, 1};
static const int IPARAM_131[2] = {6, 1};
static const int IPARAM_132[2] = {7, 1};
static const int IPARAM_133[2] = {8, 1};
static const int IPARAM_134[2] = {9, 1};
static const int IPARAM_135[2] = {10, 1};
static const int TPARAM_136[2] = {0, 1};
static const int TPARAM_137[2] = {1, 1};
static const int TPARAM_138[2] = {2, 1};
static const int TPARAM_139[2] = {3, 1};
static const int TPARAM_140[2] = {4, 1};
static const int TPARAM_141[2] = {5, 1};
static const int TPARAM_142[2] = {6, 1};
static const int TPARAM_143[2] = {7, 1};
static const int TPARAM_144[2] = {8, 1};
// Submodel CONS00 . 1
static const int RPARAM_145[2] = {0, 1};
// Submodel CONS00 . 2
static const int RPARAM_146[2] = {0, 1};
// Submodel THHF0 . 1
// Submodel THHF0 . 2
// Submodel THHF0 . 3
// Submodel THHF0 . 4
// Submodel CONS00 . 3
static const int RPARAM_147[2] = {0, 1};
// Submodel CONS00 . 4
static const int RPARAM_148[2] = {0, 1};
// Submodel CONS00 . 5
static const int RPARAM_149[2] = {0, 1};
// Submodel ACMAS0000 . 1
static const int RPARAM_150[2] = {0, 1};
static const int IPARAM_151[2] = {0, 1};
// Submodel CONS00 . 6
static const int RPARAM_152[2] = {0, 1};
// Submodel CONS00 . 7
static const int RPARAM_153[2] = {0, 1};
// Submodel CONS00 . 8
static const int RPARAM_154[2] = {0, 1};
// Submodel CONS00 . 9
static const int RPARAM_155[2] = {0, 1};
// Submodel TPFGS010 . 1
static const int RPARAM_156[2] = {0, 1};
static const int RPARAM_157[2] = {1, 1};
static const int IPARAM_158[2] = {0, 1};
static const int IPARAM_159[2] = {1, 1};
// Submodel TPFGS010 . 2
static const int RPARAM_160[2] = {0, 1};
static const int RPARAM_161[2] = {1, 1};
static const int IPARAM_162[2] = {0, 1};
static const int IPARAM_163[2] = {1, 1};
// Submodel TPFGS010 . 3
static const int RPARAM_164[2] = {0, 1};
static const int RPARAM_165[2] = {1, 1};
static const int IPARAM_166[2] = {0, 1};
static const int IPARAM_167[2] = {1, 1};
// Submodel TPFGS010 . 4
static const int RPARAM_168[2] = {0, 1};
static const int RPARAM_169[2] = {1, 1};
static const int IPARAM_170[2] = {0, 1};
static const int IPARAM_171[2] = {1, 1};
// Submodel THHS0 . 1
// Submodel GA00 . 1
static const int RPARAM_172[2] = {0, 1};
// Submodel THMAGS00 . 4
static const int RPARAM_173[2] = {0, 1};
static const int RPARAM_174[2] = {1, 1};
static const int IPARAM_175[2] = {0, 1};
// Submodel GA00 . 3
static const int RPARAM_176[2] = {0, 1};
// Submodel THHF0 . 5
// Submodel THHF0 . 6
// Submodel THHF0 . 7
// Submodel THHF0 . 8
// Submodel TPFGS010 . 5
static const int RPARAM_177[2] = {0, 1};
static const int RPARAM_178[2] = {1, 1};
static const int IPARAM_179[2] = {0, 1};
static const int IPARAM_180[2] = {1, 1};
// Submodel THHF0 . 9
// Submodel THHF0 . 10
// Submodel THHF0 . 11
// Submodel THHF0 . 12
// Submodel ACMCTFREF1 . 1
static const int RPARAM_181[2] = {0, 1};
static const int RPARAM_182[2] = {1, 1};
static const int RPARAM_183[2] = {2, 1};
static const int RPARAM_184[2] = {3, 1};
static const int RPARAM_185[2] = {4, 1};
static const int RPARAM_186[2] = {5, 1};
static const int RPARAM_187[2] = {6, 1};
static const int RPARAM_188[2] = {7, 1};
static const int RPARAM_189[2] = {8, 1};
static const int IPARAM_190[2] = {0, 1};
static const int IPARAM_191[2] = {1, 1};
static const int IPARAM_192[2] = {2, 1};
static const int IPARAM_193[2] = {3, 1};
static const int IPARAM_194[2] = {4, 1};
static const int IPARAM_195[2] = {5, 1};
static const int IPARAM_196[2] = {6, 1};
static const int IPARAM_197[2] = {7, 1};
static const int TPARAM_198[2] = {0, 1};
static const int TPARAM_199[2] = {1, 1};
// Submodel ACMCTFINT1 . 1
static const int RPARAM_200[2] = {0, 1};
static const int RPARAM_201[2] = {1, 1};
static const int RPARAM_202[2] = {2, 1};
static const int RPARAM_203[2] = {3, 1};
static const int RPARAM_204[2] = {4, 1};
static const int RPARAM_205[2] = {5, 1};
static const int RPARAM_206[2] = {6, 1};
static const int RPARAM_207[2] = {7, 1};
static const int RPARAM_208[2] = {8, 1};
static const int IPARAM_209[2] = {0, 1};
static const int IPARAM_210[2] = {1, 1};
static const int IPARAM_211[2] = {2, 1};
static const int IPARAM_212[2] = {3, 1};
static const int IPARAM_213[2] = {4, 1};
static const int IPARAM_214[2] = {5, 1};
static const int IPARAM_215[2] = {6, 1};
// Submodel TPFGS010 . 6
static const int RPARAM_216[2] = {0, 1};
static const int RPARAM_217[2] = {1, 1};
static const int IPARAM_218[2] = {0, 1};
static const int IPARAM_219[2] = {1, 1};
// Submodel ACUCPFINT1 . 1
static const int RPARAM_220[2] = {0, 1};
static const int RPARAM_221[2] = {1, 1};
static const int RPARAM_222[2] = {2, 1};
static const int RPARAM_223[2] = {3, 1};
static const int RPARAM_224[2] = {4, 1};
static const int RPARAM_225[2] = {5, 1};
static const int RPARAM_226[2] = {6, 1};
static const int RPARAM_227[2] = {7, 1};
static const int RPARAM_228[2] = {8, 1};
static const int IPARAM_229[2] = {0, 1};
static const int IPARAM_230[2] = {1, 1};
static const int IPARAM_231[2] = {2, 1};
static const int IPARAM_232[2] = {3, 1};
static const int IPARAM_233[2] = {4, 1};
static const int IPARAM_234[2] = {5, 1};
static const int IPARAM_235[2] = {6, 1};
// Submodel ACMAS0000 . 2
static const int RPARAM_236[2] = {0, 1};
static const int IPARAM_237[2] = {0, 1};
// Submodel CONS00 . 10
static const int RPARAM_238[2] = {0, 1};
// Submodel SAT0 . 2
static const int RPARAM_239[2] = {0, 1};
static const int RPARAM_240[2] = {1, 1};
static const int RPARAM_241[2] = {2, 1};
static const int IPARAM_242[2] = {0, 1};
static const int IPARAM_243[2] = {1, 1};
// Submodel OMEGC0 . 1
// Submodel MUL00 . 1
// Submodel ACMCTFINT2 . 1
static const int RPARAM_244[2] = {0, 1};
static const int RPARAM_245[2] = {1, 1};
static const int RPARAM_246[2] = {2, 1};
static const int RPARAM_247[2] = {3, 1};
static const int RPARAM_248[2] = {4, 1};
static const int RPARAM_249[2] = {5, 1};
static const int RPARAM_250[2] = {6, 1};
static const int RPARAM_251[2] = {7, 1};
static const int RPARAM_252[2] = {8, 1};
static const int IPARAM_253[2] = {0, 1};
static const int IPARAM_254[2] = {1, 1};
static const int IPARAM_255[2] = {2, 1};
static const int IPARAM_256[2] = {3, 1};
static const int IPARAM_257[2] = {4, 1};
static const int IPARAM_258[2] = {5, 1};
static const int IPARAM_259[2] = {6, 1};
// Submodel ACMCTFTOP2 . 1
static const int RPARAM_260[2] = {0, 1};
static const int RPARAM_261[2] = {1, 1};
static const int RPARAM_262[2] = {2, 1};
static const int RPARAM_263[2] = {3, 1};
static const int RPARAM_264[2] = {4, 1};
static const int RPARAM_265[2] = {5, 1};
static const int RPARAM_266[2] = {6, 1};
static const int RPARAM_267[2] = {7, 1};
static const int RPARAM_268[2] = {8, 1};
static const int IPARAM_269[2] = {0, 1};
static const int IPARAM_270[2] = {1, 1};
static const int IPARAM_271[2] = {2, 1};
static const int IPARAM_272[2] = {3, 1};
static const int IPARAM_273[2] = {4, 1};
static const int IPARAM_274[2] = {5, 1};
static const int IPARAM_275[2] = {6, 1};
// Submodel ACUCPFREF1 . 1
static const int RPARAM_276[2] = {0, 1};
static const int RPARAM_277[2] = {1, 1};
static const int RPARAM_278[2] = {2, 1};
static const int RPARAM_279[2] = {3, 1};
static const int RPARAM_280[2] = {4, 1};
static const int RPARAM_281[2] = {5, 1};
static const int RPARAM_282[2] = {6, 1};
static const int RPARAM_283[2] = {7, 1};
static const int RPARAM_284[2] = {8, 1};
static const int IPARAM_285[2] = {0, 1};
static const int IPARAM_286[2] = {1, 1};
static const int IPARAM_287[2] = {2, 1};
static const int IPARAM_288[2] = {3, 1};
static const int IPARAM_289[2] = {4, 1};
static const int IPARAM_290[2] = {5, 1};
static const int IPARAM_291[2] = {6, 1};
static const int IPARAM_292[2] = {7, 1};
static const int TPARAM_293[2] = {0, 1};
static const int TPARAM_294[2] = {1, 1};
// Submodel GA00 . 2
static const int RPARAM_295[2] = {0, 1};
// Submodel SAT0 . 1
static const int RPARAM_296[2] = {0, 1};
static const int RPARAM_297[2] = {1, 1};
static const int RPARAM_298[2] = {2, 1};
static const int IPARAM_299[2] = {0, 1};
static const int IPARAM_300[2] = {1, 1};
// Submodel ACUCPFEND1 . 1
static const int RPARAM_301[2] = {0, 1};
static const int RPARAM_302[2] = {1, 1};
static const int RPARAM_303[2] = {2, 1};
static const int RPARAM_304[2] = {3, 1};
static const int RPARAM_305[2] = {4, 1};
static const int RPARAM_306[2] = {5, 1};
static const int RPARAM_307[2] = {6, 1};
static const int RPARAM_308[2] = {7, 1};
static const int RPARAM_309[2] = {8, 1};
static const int IPARAM_310[2] = {0, 1};
static const int IPARAM_311[2] = {1, 1};
static const int IPARAM_312[2] = {2, 1};
static const int IPARAM_313[2] = {3, 1};
static const int IPARAM_314[2] = {4, 1};
static const int IPARAM_315[2] = {5, 1};
static const int IPARAM_316[2] = {6, 1};
// Submodel TPFP002 . 1
static const int RPARAM_317[2] = {0, 1};
static const int RPARAM_318[2] = {1, 1};
static const int RPARAM_319[2] = {2, 1};
static const int RPARAM_320[2] = {3, 1};
static const int RPARAM_321[2] = {4, 1};
static const int RPARAM_322[2] = {5, 1};
static const int RPARAM_323[2] = {6, 1};
static const int RPARAM_324[2] = {7, 1};
static const int RPARAM_325[2] = {8, 1};
static const int RPARAM_326[2] = {9, 1};
static const int IPARAM_327[2] = {0, 1};
static const int IPARAM_328[2] = {1, 1};
static const int IPARAM_329[2] = {2, 1};
static const int IPARAM_330[2] = {3, 1};
static const int IPARAM_331[2] = {4, 1};
static const int TPARAM_332[2] = {0, 1};
// Submodel TPFP000 . 1
static const int RPARAM_333[2] = {0, 1};
static const int RPARAM_334[2] = {1, 1};
static const int RPARAM_335[2] = {2, 1};
static const int RPARAM_336[2] = {3, 1};
static const int RPARAM_337[2] = {4, 1};
static const int RPARAM_338[2] = {5, 1};
static const int RPARAM_339[2] = {6, 1};
static const int IPARAM_340[2] = {0, 1};
static const int IPARAM_341[2] = {1, 1};
// Submodel TPFP001 . 1
static const int RPARAM_342[2] = {0, 1};
static const int RPARAM_343[2] = {1, 1};
static const int RPARAM_344[2] = {2, 1};
static const int RPARAM_345[2] = {3, 1};
static const int RPARAM_346[2] = {4, 1};
static const int RPARAM_347[2] = {5, 1};
static const int RPARAM_348[2] = {6, 1};
static const int RPARAM_349[2] = {7, 1};
static const int RPARAM_350[2] = {8, 1};
static const int RPARAM_351[2] = {9, 1};
static const int IPARAM_352[2] = {0, 1};
static const int IPARAM_353[2] = {1, 1};
static const int IPARAM_354[2] = {2, 1};
static const int IPARAM_355[2] = {3, 1};
static const int IPARAM_356[2] = {4, 1};
static const int TPARAM_357[2] = {0, 1};
// Submodel SSINK . 1
// Submodel SSINK . 2
// Submodel SSINK . 5
// Submodel TPFP002 . 2
static const int RPARAM_358[2] = {0, 1};
static const int RPARAM_359[2] = {1, 1};
static const int RPARAM_360[2] = {2, 1};
static const int RPARAM_361[2] = {3, 1};
static const int RPARAM_362[2] = {4, 1};
static const int RPARAM_363[2] = {5, 1};
static const int RPARAM_364[2] = {6, 1};
static const int RPARAM_365[2] = {7, 1};
static const int RPARAM_366[2] = {8, 1};
static const int RPARAM_367[2] = {9, 1};
static const int IPARAM_368[2] = {0, 1};
static const int IPARAM_369[2] = {1, 1};
static const int IPARAM_370[2] = {2, 1};
static const int IPARAM_371[2] = {3, 1};
static const int IPARAM_372[2] = {4, 1};
static const int TPARAM_373[2] = {0, 1};
// Submodel TPFSCH00 . 1
static const int RPARAM_374[2] = {0, 1};
static const int RPARAM_375[2] = {1, 1};
static const int RPARAM_376[2] = {2, 1};
static const int RPARAM_377[2] = {3, 1};
static const int RPARAM_378[2] = {4, 1};
static const int RPARAM_379[2] = {5, 1};
static const int IPARAM_380[2] = {0, 1};
// Submodel TPFRFL000 . 1
static const int RPARAM_381[2] = {0, 1};
static const int RPARAM_382[2] = {1, 1};
static const int RPARAM_383[2] = {2, 1};
static const int RPARAM_384[2] = {3, 1};
static const int RPARAM_385[2] = {4, 1};
static const int IPARAM_386[2] = {0, 1};
static const int IPARAM_387[2] = {1, 1};
static const int IPARAM_388[2] = {2, 1};
static const int IPARAM_389[2] = {3, 1};
static const int TPARAM_390[2] = {0, 1};
// Submodel ACTEVSB02 . 1
static const int RPARAM_391[2] = {0, 1};
static const int RPARAM_392[2] = {1, 1};
static const int RPARAM_393[2] = {2, 1};
static const int RPARAM_394[2] = {3, 1};
static const int RPARAM_395[2] = {4, 1};
static const int RPARAM_396[2] = {5, 1};
static const int RPARAM_397[2] = {6, 1};
static const int RPARAM_398[2] = {7, 1};
static const int RPARAM_399[2] = {8, 1};
static const int RPARAM_400[2] = {9, 1};
static const int RPARAM_401[2] = {10, 1};
static const int RPARAM_402[2] = {11, 1};
static const int IPARAM_403[2] = {0, 1};
static const int IPARAM_404[2] = {1, 1};
static const int IPARAM_405[2] = {2, 1};
static const int IPARAM_406[2] = {3, 1};
static const int IPARAM_407[2] = {4, 1};
static const int IPARAM_408[2] = {5, 1};
static const int IPARAM_409[2] = {6, 1};
static const int IPARAM_410[2] = {7, 1};
static const int IPARAM_411[2] = {8, 1};
static const int IPARAM_412[2] = {9, 1};
static const int IPARAM_413[2] = {10, 1};
static const int IPARAM_414[2] = {11, 1};
static const int IPARAM_415[2] = {12, 1};
static const int IPARAM_416[2] = {13, 1};
static const int IPARAM_417[2] = {14, 1};
static const int IPARAM_418[2] = {15, 1};
static const int IPARAM_419[2] = {16, 1};
static const int IPARAM_420[2] = {17, 1};
static const int IPARAM_421[2] = {18, 1};
static const int TPARAM_422[2] = {0, 1};
static const int TPARAM_423[2] = {1, 1};
static const int TPARAM_424[2] = {2, 1};
// Submodel TPFPHE0001 . 1
static const int RPARAM_425[2] = {0, 1};
static const int RPARAM_426[2] = {1, 1};
static const int RPARAM_427[2] = {2, 1};
static const int RPARAM_428[2] = {3, 1};
static const int RPARAM_429[2] = {4, 1};
static const int RPARAM_430[2] = {5, 1};
static const int RPARAM_431[2] = {6, 1};
static const int RPARAM_432[2] = {7, 1};
static const int RPARAM_433[2] = {8, 1};
static const int RPARAM_434[2] = {9, 1};
static const int RPARAM_435[2] = {10, 1};
static const int RPARAM_436[2] = {11, 1};
static const int RPARAM_437[2] = {12, 1};
static const int RPARAM_438[2] = {13, 1};
static const int RPARAM_439[2] = {14, 1};
static const int IPARAM_440[2] = {0, 1};
static const int IPARAM_441[2] = {1, 1};
static const int IPARAM_442[2] = {2, 1};
static const int IPARAM_443[2] = {3, 1};
static const int IPARAM_444[2] = {4, 1};
static const int IPARAM_445[2] = {5, 1};
static const int IPARAM_446[2] = {6, 1};
static const int IPARAM_447[2] = {7, 1};
static const int IPARAM_448[2] = {8, 1};
static const int IPARAM_449[2] = {9, 1};
static const int IPARAM_450[2] = {10, 1};
static const int IPARAM_451[2] = {11, 1};
static const int IPARAM_452[2] = {12, 1};
static const int IPARAM_453[2] = {13, 1};
static const int IPARAM_454[2] = {14, 1};
static const int IPARAM_455[2] = {15, 1};
static const int TPARAM_456[2] = {0, 1};
static const int TPARAM_457[2] = {1, 1};
static const int TPARAM_458[2] = {2, 1};
static const int TPARAM_459[2] = {3, 1};
static const int TPARAM_460[2] = {4, 1};
static const int TPARAM_461[2] = {5, 1};
static const int TPARAM_462[2] = {6, 1};
static const int TPARAM_463[2] = {7, 1};
static const int TPARAM_464[2] = {8, 1};
static const int TPARAM_465[2] = {9, 1};
static const int TPARAM_466[2] = {10, 1};
static const int TPARAM_467[2] = {11, 1};
static const int TPARAM_468[2] = {12, 1};
static const int TPARAM_469[2] = {13, 1};
static const int TPARAM_470[2] = {14, 1};
// Submodel TPFPHE0001 . 2
static const int RPARAM_471[2] = {0, 1};
static const int RPARAM_472[2] = {1, 1};
static const int RPARAM_473[2] = {2, 1};
static const int RPARAM_474[2] = {3, 1};
static const int RPARAM_475[2] = {4, 1};
static const int RPARAM_476[2] = {5, 1};
static const int RPARAM_477[2] = {6, 1};
static const int RPARAM_478[2] = {7, 1};
static const int RPARAM_479[2] = {8, 1};
static const int RPARAM_480[2] = {9, 1};
static const int RPARAM_481[2] = {10, 1};
static const int RPARAM_482[2] = {11, 1};
static const int RPARAM_483[2] = {12, 1};
static const int RPARAM_484[2] = {13, 1};
static const int RPARAM_485[2] = {14, 1};
static const int IPARAM_486[2] = {0, 1};
static const int IPARAM_487[2] = {1, 1};
static const int IPARAM_488[2] = {2, 1};
static const int IPARAM_489[2] = {3, 1};
static const int IPARAM_490[2] = {4, 1};
static const int IPARAM_491[2] = {5, 1};
static const int IPARAM_492[2] = {6, 1};
static const int IPARAM_493[2] = {7, 1};
static const int IPARAM_494[2] = {8, 1};
static const int IPARAM_495[2] = {9, 1};
static const int IPARAM_496[2] = {10, 1};
static const int IPARAM_497[2] = {11, 1};
static const int IPARAM_498[2] = {12, 1};
static const int IPARAM_499[2] = {13, 1};
static const int IPARAM_500[2] = {14, 1};
static const int IPARAM_501[2] = {15, 1};
static const int TPARAM_502[2] = {0, 1};
static const int TPARAM_503[2] = {1, 1};
static const int TPARAM_504[2] = {2, 1};
static const int TPARAM_505[2] = {3, 1};
static const int TPARAM_506[2] = {4, 1};
static const int TPARAM_507[2] = {5, 1};
static const int TPARAM_508[2] = {6, 1};
static const int TPARAM_509[2] = {7, 1};
static const int TPARAM_510[2] = {8, 1};
static const int TPARAM_511[2] = {9, 1};
static const int TPARAM_512[2] = {10, 1};
static const int TPARAM_513[2] = {11, 1};
static const int TPARAM_514[2] = {12, 1};
static const int TPARAM_515[2] = {13, 1};
static const int TPARAM_516[2] = {14, 1};
// Submodel TPFCVINT01 . 1
static const int RPARAM_517[2] = {0, 1};
static const int RPARAM_518[2] = {1, 1};
static const int RPARAM_519[2] = {2, 1};
static const int RPARAM_520[2] = {3, 1};
static const int RPARAM_521[2] = {4, 1};
static const int RPARAM_522[2] = {5, 1};
static const int RPARAM_523[2] = {6, 1};
static const int RPARAM_524[2] = {7, 1};
static const int RPARAM_525[2] = {8, 1};
static const int RPARAM_526[2] = {9, 1};
static const int RPARAM_527[2] = {10, 1};
static const int RPARAM_528[2] = {11, 1};
static const int RPARAM_529[2] = {12, 1};
static const int RPARAM_530[2] = {13, 1};
static const int RPARAM_531[2] = {14, 1};
static const int RPARAM_532[2] = {15, 1};
static const int RPARAM_533[2] = {16, 1};
static const int IPARAM_534[2] = {0, 1};
static const int IPARAM_535[2] = {1, 1};
static const int IPARAM_536[2] = {2, 1};
static const int IPARAM_537[2] = {3, 1};
static const int IPARAM_538[2] = {4, 1};
static const int IPARAM_539[2] = {5, 1};
static const int IPARAM_540[2] = {6, 1};
static const int IPARAM_541[2] = {7, 1};
static const int IPARAM_542[2] = {8, 1};
static const int IPARAM_543[2] = {9, 1};
static const int IPARAM_544[2] = {10, 1};
static const int IPARAM_545[2] = {11, 1};
static const int IPARAM_546[2] = {12, 1};
static const int TPARAM_547[2] = {0, 1};
static const int TPARAM_548[2] = {1, 1};
static const int TPARAM_549[2] = {2, 1};
static const int TPARAM_550[2] = {3, 1};
static const int TPARAM_551[2] = {4, 1};
static const int TPARAM_552[2] = {5, 1};
static const int TPARAM_553[2] = {6, 1};
// Submodel TPFCVINT01 . 2
static const int RPARAM_554[2] = {0, 1};
static const int RPARAM_555[2] = {1, 1};
static const int RPARAM_556[2] = {2, 1};
static const int RPARAM_557[2] = {3, 1};
static const int RPARAM_558[2] = {4, 1};
static const int RPARAM_559[2] = {5, 1};
static const int RPARAM_560[2] = {6, 1};
static const int RPARAM_561[2] = {7, 1};
static const int RPARAM_562[2] = {8, 1};
static const int RPARAM_563[2] = {9, 1};
static const int RPARAM_564[2] = {10, 1};
static const int RPARAM_565[2] = {11, 1};
static const int RPARAM_566[2] = {12, 1};
static const int RPARAM_567[2] = {13, 1};
static const int RPARAM_568[2] = {14, 1};
static const int RPARAM_569[2] = {15, 1};
static const int RPARAM_570[2] = {16, 1};
static const int IPARAM_571[2] = {0, 1};
static const int IPARAM_572[2] = {1, 1};
static const int IPARAM_573[2] = {2, 1};
static const int IPARAM_574[2] = {3, 1};
static const int IPARAM_575[2] = {4, 1};
static const int IPARAM_576[2] = {5, 1};
static const int IPARAM_577[2] = {6, 1};
static const int IPARAM_578[2] = {7, 1};
static const int IPARAM_579[2] = {8, 1};
static const int IPARAM_580[2] = {9, 1};
static const int IPARAM_581[2] = {10, 1};
static const int IPARAM_582[2] = {11, 1};
static const int IPARAM_583[2] = {12, 1};
static const int TPARAM_584[2] = {0, 1};
static const int TPARAM_585[2] = {1, 1};
static const int TPARAM_586[2] = {2, 1};
static const int TPARAM_587[2] = {3, 1};
static const int TPARAM_588[2] = {4, 1};
static const int TPARAM_589[2] = {5, 1};
static const int TPARAM_590[2] = {6, 1};
// Submodel THC000 . 1
static const int RPARAM_591[2] = {0, 1};
static const int RPARAM_592[2] = {1, 1};
static const int RPARAM_593[2] = {2, 1};
static const int IPARAM_594[2] = {0, 1};
static const int IPARAM_595[2] = {1, 1};
static const int IPARAM_596[2] = {2, 1};
// Submodel THC000 . 2
static const int RPARAM_597[2] = {0, 1};
static const int RPARAM_598[2] = {1, 1};
static const int RPARAM_599[2] = {2, 1};
static const int IPARAM_600[2] = {0, 1};
static const int IPARAM_601[2] = {1, 1};
static const int IPARAM_602[2] = {2, 1};
// Submodel THC000 . 3
static const int RPARAM_603[2] = {0, 1};
static const int RPARAM_604[2] = {1, 1};
static const int RPARAM_605[2] = {2, 1};
static const int IPARAM_606[2] = {0, 1};
static const int IPARAM_607[2] = {1, 1};
static const int IPARAM_608[2] = {2, 1};
// Submodel THC000 . 4
static const int RPARAM_609[2] = {0, 1};
static const int RPARAM_610[2] = {1, 1};
static const int RPARAM_611[2] = {2, 1};
static const int IPARAM_612[2] = {0, 1};
static const int IPARAM_613[2] = {1, 1};
static const int IPARAM_614[2] = {2, 1};
// Submodel TPFPUCOMPVD0000 . 1
static const int RPARAM_615[2] = {0, 1};
static const int RPARAM_616[2] = {1, 1};
static const int RPARAM_617[2] = {2, 1};
static const int RPARAM_618[2] = {3, 1};
static const int RPARAM_619[2] = {4, 1};
static const int RPARAM_620[2] = {5, 1};
static const int RPARAM_621[2] = {6, 1};
static const int RPARAM_622[2] = {7, 1};
static const int RPARAM_623[2] = {8, 1};
static const int RPARAM_624[2] = {9, 1};
static const int RPARAM_625[2] = {10, 1};
static const int RPARAM_626[2] = {11, 1};
static const int IPARAM_627[2] = {0, 1};
static const int IPARAM_628[2] = {1, 1};
static const int IPARAM_629[2] = {2, 1};
static const int IPARAM_630[2] = {3, 1};
static const int IPARAM_631[2] = {4, 1};
static const int IPARAM_632[2] = {5, 1};
static const int IPARAM_633[2] = {6, 1};
static const int IPARAM_634[2] = {7, 1};
static const int IPARAM_635[2] = {8, 1};
static const int IPARAM_636[2] = {9, 1};
static const int IPARAM_637[2] = {10, 1};
static const int TPARAM_638[2] = {0, 1};
static const int TPARAM_639[2] = {1, 1};
static const int TPARAM_640[2] = {2, 1};
static const int TPARAM_641[2] = {3, 1};
// Submodel TPFPIN00 . 1
static const int RPARAM_642[2] = {0, 1};
static const int RPARAM_643[2] = {1, 1};
static const int RPARAM_644[2] = {2, 1};
static const int RPARAM_645[2] = {3, 1};
static const int RPARAM_646[2] = {4, 1};
static const int RPARAM_647[2] = {5, 1};
static const int IPARAM_648[2] = {0, 1};
// Submodel SSINK . 3
// Submodel THGCV00 . 1
static const int RPARAM_649[2] = {0, 1};
static const int RPARAM_650[2] = {1, 1};
static const int RPARAM_651[2] = {2, 1};
static const int RPARAM_652[2] = {3, 1};
static const int RPARAM_653[2] = {4, 1};
static const int RPARAM_654[2] = {5, 1};
static const int RPARAM_655[2] = {6, 1};
static const int RPARAM_656[2] = {7, 1};
static const int RPARAM_657[2] = {8, 1};
static const int RPARAM_658[2] = {9, 1};
static const int RPARAM_659[2] = {10, 1};
static const int RPARAM_660[2] = {11, 1};
static const int RPARAM_661[2] = {12, 1};
static const int RPARAM_662[2] = {13, 1};
static const int RPARAM_663[2] = {14, 1};
static const int RPARAM_664[2] = {15, 1};
static const int RPARAM_665[2] = {16, 1};
static const int RPARAM_666[2] = {17, 1};
static const int RPARAM_667[2] = {18, 1};
static const int RPARAM_668[2] = {19, 1};
static const int RPARAM_669[2] = {20, 1};
static const int RPARAM_670[2] = {21, 1};
static const int RPARAM_671[2] = {22, 1};
static const int IPARAM_672[2] = {0, 1};
static const int IPARAM_673[2] = {1, 1};
static const int IPARAM_674[2] = {2, 1};
static const int IPARAM_675[2] = {3, 1};
static const int TPARAM_676[2] = {0, 1};
static const int TPARAM_677[2] = {1, 1};
static const int TPARAM_678[2] = {2, 1};
static const int TPARAM_679[2] = {3, 1};
// Submodel THGCV00 . 2
static const int RPARAM_680[2] = {0, 1};
static const int RPARAM_681[2] = {1, 1};
static const int RPARAM_682[2] = {2, 1};
static const int RPARAM_683[2] = {3, 1};
static const int RPARAM_684[2] = {4, 1};
static const int RPARAM_685[2] = {5, 1};
static const int RPARAM_686[2] = {6, 1};
static const int RPARAM_687[2] = {7, 1};
static const int RPARAM_688[2] = {8, 1};
static const int RPARAM_689[2] = {9, 1};
static const int RPARAM_690[2] = {10, 1};
static const int RPARAM_691[2] = {11, 1};
static const int RPARAM_692[2] = {12, 1};
static const int RPARAM_693[2] = {13, 1};
static const int RPARAM_694[2] = {14, 1};
static const int RPARAM_695[2] = {15, 1};
static const int RPARAM_696[2] = {16, 1};
static const int RPARAM_697[2] = {17, 1};
static const int RPARAM_698[2] = {18, 1};
static const int RPARAM_699[2] = {19, 1};
static const int RPARAM_700[2] = {20, 1};
static const int RPARAM_701[2] = {21, 1};
static const int RPARAM_702[2] = {22, 1};
static const int IPARAM_703[2] = {0, 1};
static const int IPARAM_704[2] = {1, 1};
static const int IPARAM_705[2] = {2, 1};
static const int IPARAM_706[2] = {3, 1};
static const int TPARAM_707[2] = {0, 1};
static const int TPARAM_708[2] = {1, 1};
static const int TPARAM_709[2] = {2, 1};
static const int TPARAM_710[2] = {3, 1};
// Submodel SSINK . 4
// Submodel SSINK . 6
// Submodel THMAMX000 . 1
// Submodel THMAGS00 . 5
static const int RPARAM_711[2] = {0, 1};
static const int RPARAM_712[2] = {1, 1};
static const int IPARAM_713[2] = {0, 1};
// Submodel SSINK . 7
// Submodel THMAMX000 . 3
// Submodel THMAGS00 . 7
static const int RPARAM_714[2] = {0, 1};
static const int RPARAM_715[2] = {1, 1};
static const int IPARAM_716[2] = {0, 1};
// Submodel SSINK . 9
// Submodel THMAMX000 . 4
// Submodel THMAGS00 . 8
static const int RPARAM_717[2] = {0, 1};
static const int RPARAM_718[2] = {1, 1};
static const int IPARAM_719[2] = {0, 1};
// Submodel SSINK . 10
// Submodel THMAMX000 . 5
// Submodel THMAGS00 . 9
static const int RPARAM_720[2] = {0, 1};
static const int RPARAM_721[2] = {1, 1};
static const int IPARAM_722[2] = {0, 1};
// Submodel SSINK . 11
// Submodel THMASINK00 . 2
// Submodel THMAMX000 . 2
// Submodel THMAGS00 . 6
static const int RPARAM_723[2] = {0, 1};
static const int RPARAM_724[2] = {1, 1};
static const int IPARAM_725[2] = {0, 1};
// Submodel SSINK . 8
// Submodel THMAFS00 . 1
static const int RPARAM_726[2] = {0, 1};
static const int RPARAM_727[2] = {1, 1};
static const int IPARAM_728[2] = {0, 1};
// Submodel THMAGS00 . 1
static const int RPARAM_729[2] = {0, 1};
static const int RPARAM_730[2] = {1, 1};
static const int IPARAM_731[2] = {0, 1};
// Submodel THMAGS00 . 2
static const int RPARAM_732[2] = {0, 1};
static const int RPARAM_733[2] = {1, 1};
static const int IPARAM_734[2] = {0, 1};
// Submodel THMAGS00 . 3
static const int RPARAM_735[2] = {0, 1};
static const int RPARAM_736[2] = {1, 1};
static const int IPARAM_737[2] = {0, 1};
// Submodel THMASINK00 . 1
static const int* PIA[738] = {
     RPARAM_0, RPARAM_1, RPARAM_2, RPARAM_3, RPARAM_4, RPARAM_5, RPARAM_6, RPARAM_7, RPARAM_8, RPARAM_9
   , IPARAM_10, IPARAM_11, IPARAM_12, IPARAM_13, IPARAM_14, IPARAM_15, IPARAM_16, IPARAM_17, IPARAM_18, IPARAM_19
   , IPARAM_20, IPARAM_21, IPARAM_22, IPARAM_23, IPARAM_24, IPARAM_25, TPARAM_26, RPARAM_27, RPARAM_28, RPARAM_29
   , RPARAM_30, RPARAM_31, RPARAM_32, RPARAM_33, RPARAM_34, RPARAM_35, RPARAM_36, RPARAM_37, IPARAM_38, IPARAM_39
   , IPARAM_40, IPARAM_41, IPARAM_42, IPARAM_43, IPARAM_44, TPARAM_45, TPARAM_46, TPARAM_47, TPARAM_48, TPARAM_49
   , TPARAM_50, RPARAM_51, RPARAM_52, RPARAM_53, RPARAM_54, RPARAM_55, RPARAM_56, RPARAM_57, RPARAM_58, RPARAM_59
   , RPARAM_60, RPARAM_61, IPARAM_62, IPARAM_63, IPARAM_64, IPARAM_65, IPARAM_66, IPARAM_67, IPARAM_68, TPARAM_69
   , TPARAM_70, TPARAM_71, TPARAM_72, TPARAM_73, TPARAM_74, RPARAM_75, RPARAM_76, RPARAM_77, RPARAM_78, RPARAM_79
   , RPARAM_80, RPARAM_81, RPARAM_82, RPARAM_83, RPARAM_84, RPARAM_85, RPARAM_86, RPARAM_87, RPARAM_88, RPARAM_89
   , IPARAM_90, IPARAM_91, IPARAM_92, IPARAM_93, IPARAM_94, IPARAM_95, IPARAM_96, IPARAM_97, IPARAM_98, IPARAM_99
   , IPARAM_100, TPARAM_101, TPARAM_102, TPARAM_103, TPARAM_104, TPARAM_105, TPARAM_106, TPARAM_107, TPARAM_108, TPARAM_109
   , RPARAM_110, RPARAM_111, RPARAM_112, RPARAM_113, RPARAM_114, RPARAM_115, RPARAM_116, RPARAM_117, RPARAM_118, RPARAM_119
   , RPARAM_120, RPARAM_121, RPARAM_122, RPARAM_123, RPARAM_124, IPARAM_125, IPARAM_126, IPARAM_127, IPARAM_128, IPARAM_129
   , IPARAM_130, IPARAM_131, IPARAM_132, IPARAM_133, IPARAM_134, IPARAM_135, TPARAM_136, TPARAM_137, TPARAM_138, TPARAM_139
   , TPARAM_140, TPARAM_141, TPARAM_142, TPARAM_143, TPARAM_144, RPARAM_145, RPARAM_146, RPARAM_147, RPARAM_148, RPARAM_149
   , RPARAM_150, IPARAM_151, RPARAM_152, RPARAM_153, RPARAM_154, RPARAM_155, RPARAM_156, RPARAM_157, IPARAM_158, IPARAM_159
   , RPARAM_160, RPARAM_161, IPARAM_162, IPARAM_163, RPARAM_164, RPARAM_165, IPARAM_166, IPARAM_167, RPARAM_168, RPARAM_169
   , IPARAM_170, IPARAM_171, RPARAM_172, RPARAM_173, RPARAM_174, IPARAM_175, RPARAM_176, RPARAM_177, RPARAM_178, IPARAM_179
   , IPARAM_180, RPARAM_181, RPARAM_182, RPARAM_183, RPARAM_184, RPARAM_185, RPARAM_186, RPARAM_187, RPARAM_188, RPARAM_189
   , IPARAM_190, IPARAM_191, IPARAM_192, IPARAM_193, IPARAM_194, IPARAM_195, IPARAM_196, IPARAM_197, TPARAM_198, TPARAM_199
   , RPARAM_200, RPARAM_201, RPARAM_202, RPARAM_203, RPARAM_204, RPARAM_205, RPARAM_206, RPARAM_207, RPARAM_208, IPARAM_209
   , IPARAM_210, IPARAM_211, IPARAM_212, IPARAM_213, IPARAM_214, IPARAM_215, RPARAM_216, RPARAM_217, IPARAM_218, IPARAM_219
   , RPARAM_220, RPARAM_221, RPARAM_222, RPARAM_223, RPARAM_224, RPARAM_225, RPARAM_226, RPARAM_227, RPARAM_228, IPARAM_229
   , IPARAM_230, IPARAM_231, IPARAM_232, IPARAM_233, IPARAM_234, IPARAM_235, RPARAM_236, IPARAM_237, RPARAM_238, RPARAM_239
   , RPARAM_240, RPARAM_241, IPARAM_242, IPARAM_243, RPARAM_244, RPARAM_245, RPARAM_246, RPARAM_247, RPARAM_248, RPARAM_249
   , RPARAM_250, RPARAM_251, RPARAM_252, IPARAM_253, IPARAM_254, IPARAM_255, IPARAM_256, IPARAM_257, IPARAM_258, IPARAM_259
   , RPARAM_260, RPARAM_261, RPARAM_262, RPARAM_263, RPARAM_264, RPARAM_265, RPARAM_266, RPARAM_267, RPARAM_268, IPARAM_269
   , IPARAM_270, IPARAM_271, IPARAM_272, IPARAM_273, IPARAM_274, IPARAM_275, RPARAM_276, RPARAM_277, RPARAM_278, RPARAM_279
   , RPARAM_280, RPARAM_281, RPARAM_282, RPARAM_283, RPARAM_284, IPARAM_285, IPARAM_286, IPARAM_287, IPARAM_288, IPARAM_289
   , IPARAM_290, IPARAM_291, IPARAM_292, TPARAM_293, TPARAM_294, RPARAM_295, RPARAM_296, RPARAM_297, RPARAM_298, IPARAM_299
   , IPARAM_300, RPARAM_301, RPARAM_302, RPARAM_303, RPARAM_304, RPARAM_305, RPARAM_306, RPARAM_307, RPARAM_308, RPARAM_309
   , IPARAM_310, IPARAM_311, IPARAM_312, IPARAM_313, IPARAM_314, IPARAM_315, IPARAM_316, RPARAM_317, RPARAM_318, RPARAM_319
   , RPARAM_320, RPARAM_321, RPARAM_322, RPARAM_323, RPARAM_324, RPARAM_325, RPARAM_326, IPARAM_327, IPARAM_328, IPARAM_329
   , IPARAM_330, IPARAM_331, TPARAM_332, RPARAM_333, RPARAM_334, RPARAM_335, RPARAM_336, RPARAM_337, RPARAM_338, RPARAM_339
   , IPARAM_340, IPARAM_341, RPARAM_342, RPARAM_343, RPARAM_344, RPARAM_345, RPARAM_346, RPARAM_347, RPARAM_348, RPARAM_349
   , RPARAM_350, RPARAM_351, IPARAM_352, IPARAM_353, IPARAM_354, IPARAM_355, IPARAM_356, TPARAM_357, RPARAM_358, RPARAM_359
   , RPARAM_360, RPARAM_361, RPARAM_362, RPARAM_363, RPARAM_364, RPARAM_365, RPARAM_366, RPARAM_367, IPARAM_368, IPARAM_369
   , IPARAM_370, IPARAM_371, IPARAM_372, TPARAM_373, RPARAM_374, RPARAM_375, RPARAM_376, RPARAM_377, RPARAM_378, RPARAM_379
   , IPARAM_380, RPARAM_381, RPARAM_382, RPARAM_383, RPARAM_384, RPARAM_385, IPARAM_386, IPARAM_387, IPARAM_388, IPARAM_389
   , TPARAM_390, RPARAM_391, RPARAM_392, RPARAM_393, RPARAM_394, RPARAM_395, RPARAM_396, RPARAM_397, RPARAM_398, RPARAM_399
   , RPARAM_400, RPARAM_401, RPARAM_402, IPARAM_403, IPARAM_404, IPARAM_405, IPARAM_406, IPARAM_407, IPARAM_408, IPARAM_409
   , IPARAM_410, IPARAM_411, IPARAM_412, IPARAM_413, IPARAM_414, IPARAM_415, IPARAM_416, IPARAM_417, IPARAM_418, IPARAM_419
   , IPARAM_420, IPARAM_421, TPARAM_422, TPARAM_423, TPARAM_424, RPARAM_425, RPARAM_426, RPARAM_427, RPARAM_428, RPARAM_429
   , RPARAM_430, RPARAM_431, RPARAM_432, RPARAM_433, RPARAM_434, RPARAM_435, RPARAM_436, RPARAM_437, RPARAM_438, RPARAM_439
   , IPARAM_440, IPARAM_441, IPARAM_442, IPARAM_443, IPARAM_444, IPARAM_445, IPARAM_446, IPARAM_447, IPARAM_448, IPARAM_449
   , IPARAM_450, IPARAM_451, IPARAM_452, IPARAM_453, IPARAM_454, IPARAM_455, TPARAM_456, TPARAM_457, TPARAM_458, TPARAM_459
   , TPARAM_460, TPARAM_461, TPARAM_462, TPARAM_463, TPARAM_464, TPARAM_465, TPARAM_466, TPARAM_467, TPARAM_468, TPARAM_469
   , TPARAM_470, RPARAM_471, RPARAM_472, RPARAM_473, RPARAM_474, RPARAM_475, RPARAM_476, RPARAM_477, RPARAM_478, RPARAM_479
   , RPARAM_480, RPARAM_481, RPARAM_482, RPARAM_483, RPARAM_484, RPARAM_485, IPARAM_486, IPARAM_487, IPARAM_488, IPARAM_489
   , IPARAM_490, IPARAM_491, IPARAM_492, IPARAM_493, IPARAM_494, IPARAM_495, IPARAM_496, IPARAM_497, IPARAM_498, IPARAM_499
   , IPARAM_500, IPARAM_501, TPARAM_502, TPARAM_503, TPARAM_504, TPARAM_505, TPARAM_506, TPARAM_507, TPARAM_508, TPARAM_509
   , TPARAM_510, TPARAM_511, TPARAM_512, TPARAM_513, TPARAM_514, TPARAM_515, TPARAM_516, RPARAM_517, RPARAM_518, RPARAM_519
   , RPARAM_520, RPARAM_521, RPARAM_522, RPARAM_523, RPARAM_524, RPARAM_525, RPARAM_526, RPARAM_527, RPARAM_528, RPARAM_529
   , RPARAM_530, RPARAM_531, RPARAM_532, RPARAM_533, IPARAM_534, IPARAM_535, IPARAM_536, IPARAM_537, IPARAM_538, IPARAM_539
   , IPARAM_540, IPARAM_541, IPARAM_542, IPARAM_543, IPARAM_544, IPARAM_545, IPARAM_546, TPARAM_547, TPARAM_548, TPARAM_549
   , TPARAM_550, TPARAM_551, TPARAM_552, TPARAM_553, RPARAM_554, RPARAM_555, RPARAM_556, RPARAM_557, RPARAM_558, RPARAM_559
   , RPARAM_560, RPARAM_561, RPARAM_562, RPARAM_563, RPARAM_564, RPARAM_565, RPARAM_566, RPARAM_567, RPARAM_568, RPARAM_569
   , RPARAM_570, IPARAM_571, IPARAM_572, IPARAM_573, IPARAM_574, IPARAM_575, IPARAM_576, IPARAM_577, IPARAM_578, IPARAM_579
   , IPARAM_580, IPARAM_581, IPARAM_582, IPARAM_583, TPARAM_584, TPARAM_585, TPARAM_586, TPARAM_587, TPARAM_588, TPARAM_589
   , TPARAM_590, RPARAM_591, RPARAM_592, RPARAM_593, IPARAM_594, IPARAM_595, IPARAM_596, RPARAM_597, RPARAM_598, RPARAM_599
   , IPARAM_600, IPARAM_601, IPARAM_602, RPARAM_603, RPARAM_604, RPARAM_605, IPARAM_606, IPARAM_607, IPARAM_608, RPARAM_609
   , RPARAM_610, RPARAM_611, IPARAM_612, IPARAM_613, IPARAM_614, RPARAM_615, RPARAM_616, RPARAM_617, RPARAM_618, RPARAM_619
   , RPARAM_620, RPARAM_621, RPARAM_622, RPARAM_623, RPARAM_624, RPARAM_625, RPARAM_626, IPARAM_627, IPARAM_628, IPARAM_629
   , IPARAM_630, IPARAM_631, IPARAM_632, IPARAM_633, IPARAM_634, IPARAM_635, IPARAM_636, IPARAM_637, TPARAM_638, TPARAM_639
   , TPARAM_640, TPARAM_641, RPARAM_642, RPARAM_643, RPARAM_644, RPARAM_645, RPARAM_646, RPARAM_647, IPARAM_648, RPARAM_649
   , RPARAM_650, RPARAM_651, RPARAM_652, RPARAM_653, RPARAM_654, RPARAM_655, RPARAM_656, RPARAM_657, RPARAM_658, RPARAM_659
   , RPARAM_660, RPARAM_661, RPARAM_662, RPARAM_663, RPARAM_664, RPARAM_665, RPARAM_666, RPARAM_667, RPARAM_668, RPARAM_669
   , RPARAM_670, RPARAM_671, IPARAM_672, IPARAM_673, IPARAM_674, IPARAM_675, TPARAM_676, TPARAM_677, TPARAM_678, TPARAM_679
   , RPARAM_680, RPARAM_681, RPARAM_682, RPARAM_683, RPARAM_684, RPARAM_685, RPARAM_686, RPARAM_687, RPARAM_688, RPARAM_689
   , RPARAM_690, RPARAM_691, RPARAM_692, RPARAM_693, RPARAM_694, RPARAM_695, RPARAM_696, RPARAM_697, RPARAM_698, RPARAM_699
   , RPARAM_700, RPARAM_701, RPARAM_702, IPARAM_703, IPARAM_704, IPARAM_705, IPARAM_706, TPARAM_707, TPARAM_708, TPARAM_709
   , TPARAM_710, RPARAM_711, RPARAM_712, IPARAM_713, RPARAM_714, RPARAM_715, IPARAM_716, RPARAM_717, RPARAM_718, IPARAM_719
   , RPARAM_720, RPARAM_721, IPARAM_722, RPARAM_723, RPARAM_724, IPARAM_725, RPARAM_726, RPARAM_727, IPARAM_728, RPARAM_729
   , RPARAM_730, IPARAM_731, RPARAM_732, RPARAM_733, IPARAM_734, RPARAM_735, RPARAM_736, IPARAM_737
};


static const int** NGIA = NULL;

static const int* NIA = NULL;

typedef int typeIntTuple3[3];
typedef int typeIntTuple2[2];


static const int SUBSIMU[98][6][2] = {
     {{0, 51}, {0, 18}, {0, 2}, {27, 0}, {0, 1}, {0, 10}}
   , {{10, 55}, {16, 22}, {1, 2}, {1, 27}, {1, 1}, {0, 14}}
   , {{11, 110}, {7, 74}, {6, 8}, {1, 28}, {1, 3}, {0, 25}}
   , {{11, 121}, {7, 81}, {6, 14}, {1, 29}, {1, 4}, {0, 25}}
   , {{15, 254}, {11, 161}, {9, 72}, {0, 30}, {0, 5}, {1, 45}}
   , {{15, 305}, {11, 201}, {9, 83}, {0, 30}, {0, 5}, {1, 58}}
   , {{1, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}
   , {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}
   , {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}
   , {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}
   , {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}
   , {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}
   , {{1, 26}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}
   , {{1, 27}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}
   , {{1, 28}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}
   , {{1, 29}, {1, 10}, {0, 1}, {0, 0}, {0, 1}, {1, 6}}
   , {{1, 37}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}
   , {{1, 38}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}
   , {{1, 39}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}
   , {{1, 40}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}
   , {{2, 51}, {2, 18}, {0, 2}, {0, 27}, {0, 1}, {2, 10}}
   , {{2, 53}, {2, 20}, {0, 2}, {0, 27}, {0, 1}, {2, 12}}
   , {{2, 65}, {2, 38}, {0, 3}, {0, 28}, {0, 2}, {2, 14}}
   , {{2, 67}, {2, 40}, {0, 3}, {0, 28}, {0, 2}, {2, 16}}
   , {{0, 85}, {0, 48}, {0, 4}, {0, 28}, {0, 2}, {0, 21}}
   , {{1, 102}, {0, 71}, {0, 8}, {0, 28}, {0, 2}, {0, 24}}
   , {{2, 104}, {1, 71}, {0, 8}, {0, 28}, {0, 2}, {1, 24}}
   , {{1, 106}, {0, 72}, {0, 8}, {0, 28}, {0, 2}, {0, 25}}
   , {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}
   , {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}
   , {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}
   , {{0, 162}, {0, 120}, {0, 50}, {0, 30}, {0, 5}, {0, 27}}
   , {{2, 162}, {2, 120}, {0, 50}, {0, 30}, {0, 5}, {2, 27}}
   , {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}
   , {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}
   , {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}
   , {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}
   , {{9, 287}, {8, 186}, {2, 81}, {0, 30}, {0, 5}, {3, 52}}
   , {{9, 296}, {7, 194}, {0, 83}, {0, 30}, {0, 5}, {3, 55}}
   , {{2, 350}, {2, 239}, {0, 94}, {0, 30}, {0, 9}, {2, 73}}
   , {{9, 352}, {7, 241}, {0, 94}, {0, 30}, {0, 9}, {3, 75}}
   , {{1, 373}, {1, 259}, {0, 98}, {0, 30}, {0, 9}, {1, 81}}
   , {{1, 374}, {0, 260}, {0, 98}, {0, 30}, {0, 9}, {0, 82}}
   , {{3, 375}, {2, 260}, {0, 98}, {0, 30}, {1, 9}, {0, 82}}
   , {{0, 20}, {0, 9}, {0, 1}, {0, 0}, {0, 1}, {0, 4}}
   , {{0, 106}, {0, 72}, {0, 8}, {0, 28}, {0, 2}, {0, 25}}
   , {{9, 269}, {7, 172}, {0, 81}, {0, 30}, {0, 5}, {3, 46}}
   , {{9, 278}, {7, 179}, {0, 81}, {0, 30}, {0, 5}, {3, 49}}
   , {{9, 329}, {8, 219}, {2, 92}, {0, 30}, {0, 5}, {3, 62}}
   , {{1, 103}, {0, 71}, {0, 8}, {0, 28}, {0, 2}, {0, 24}}
   , {{3, 107}, {2, 72}, {0, 8}, {0, 28}, {1, 2}, {0, 25}}
   , {{9, 320}, {7, 212}, {0, 92}, {0, 30}, {0, 5}, {3, 59}}
   , {{10, 10}, {5, 4}, {1, 0}, {0, 0}, {0, 1}, {1, 3}}
   , {{7, 30}, {2, 11}, {0, 1}, {0, 0}, {0, 1}, {2, 7}}
   , {{10, 41}, {5, 13}, {1, 1}, {0, 0}, {0, 1}, {1, 9}}
   , {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}
   , {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}
   , {{0, 67}, {0, 40}, {0, 3}, {0, 28}, {0, 2}, {0, 16}}
   , {{10, 69}, {5, 42}, {1, 3}, {0, 28}, {0, 2}, {1, 18}}
   , {{6, 79}, {1, 47}, {0, 4}, {0, 28}, {0, 2}, {2, 19}}
   , {{5, 85}, {4, 48}, {1, 4}, {0, 28}, {0, 2}, {1, 21}}
   , {{12, 90}, {19, 52}, {3, 5}, {0, 28}, {0, 2}, {2, 22}}
   , {{15, 132}, {16, 88}, {15, 20}, {0, 30}, {0, 5}, {1, 25}}
   , {{15, 147}, {16, 104}, {15, 35}, {0, 30}, {0, 5}, {1, 26}}
   , {{17, 164}, {13, 122}, {7, 50}, {0, 30}, {0, 5}, {2, 29}}
   , {{17, 181}, {13, 135}, {7, 57}, {0, 30}, {0, 5}, {2, 31}}
   , {{3, 338}, {3, 227}, {0, 94}, {0, 30}, {1, 5}, {2, 65}}
   , {{3, 341}, {3, 230}, {0, 94}, {0, 30}, {1, 6}, {2, 67}}
   , {{3, 344}, {3, 233}, {0, 94}, {0, 30}, {1, 7}, {2, 69}}
   , {{3, 347}, {3, 236}, {0, 94}, {0, 30}, {1, 8}, {2, 71}}
   , {{12, 361}, {11, 248}, {4, 94}, {0, 30}, {0, 9}, {3, 78}}
   , {{6, 20}, {1, 9}, {0, 1}, {0, 0}, {0, 1}, {2, 4}}
   , {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}
   , {{23, 198}, {4, 148}, {4, 64}, {0, 30}, {0, 5}, {1, 33}}
   , {{23, 221}, {4, 152}, {4, 68}, {0, 30}, {0, 5}, {1, 34}}
   , {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}
   , {{0, 164}, {0, 122}, {0, 50}, {0, 30}, {0, 5}, {0, 29}}
   , {{0, 244}, {0, 156}, {0, 72}, {0, 30}, {0, 5}, {1, 35}}
   , {{2, 244}, {1, 156}, {0, 72}, {0, 30}, {0, 5}, {1, 36}}
   , {{0, 246}, {0, 157}, {0, 72}, {0, 30}, {0, 5}, {0, 37}}
   , {{0, 248}, {0, 158}, {0, 72}, {0, 30}, {0, 5}, {1, 39}}
   , {{2, 248}, {1, 158}, {0, 72}, {0, 30}, {0, 5}, {1, 40}}
   , {{0, 250}, {0, 159}, {0, 72}, {0, 30}, {0, 5}, {0, 41}}
   , {{0, 250}, {0, 159}, {0, 72}, {0, 30}, {0, 5}, {1, 41}}
   , {{2, 250}, {1, 159}, {0, 72}, {0, 30}, {0, 5}, {1, 42}}
   , {{0, 252}, {0, 160}, {0, 72}, {0, 30}, {0, 5}, {0, 43}}
   , {{0, 252}, {0, 160}, {0, 72}, {0, 30}, {0, 5}, {1, 43}}
   , {{2, 252}, {1, 160}, {0, 72}, {0, 30}, {0, 5}, {1, 44}}
   , {{0, 254}, {0, 161}, {0, 72}, {0, 30}, {0, 5}, {0, 45}}
   , {{0, 65}, {0, 38}, {0, 3}, {0, 28}, {0, 2}, {0, 14}}
   , {{0, 246}, {0, 157}, {0, 72}, {0, 30}, {0, 5}, {1, 37}}
   , {{2, 246}, {1, 157}, {0, 72}, {0, 30}, {0, 5}, {1, 38}}
   , {{0, 248}, {0, 158}, {0, 72}, {0, 30}, {0, 5}, {0, 39}}
   , {{2, 8}, {1, 3}, {0, 0}, {0, 0}, {1, 0}, {0, 3}}
   , {{2, 2}, {1, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 0}}
   , {{2, 4}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}
   , {{2, 6}, {1, 2}, {0, 0}, {0, 0}, {0, 0}, {1, 2}}
   , {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}
};

typedef struct {
   S_AMESubStructuralInfo STLI;
   int SUBSIMU[6][2];
   const char* name;
   int instance;
   const typeIntTuple2* inDef;
} S_AMEModelSubInfo;

static const S_AMEModelSubInfo SUBSTRUC[AME_NB_SUBMODEL_REF] = {
     { {1, NULL, &IVIA[0], NULL, NULL, NULL, NULL, NULL}, {{0, 51}, {0, 18}, {0, 2}, {27, 0}, {0, 1}, {0, 10}}, "RSTAT", 1, NULL }
   , { {1, NULL, &IVIA[17], NULL, &PIA[0], NULL, NULL, NULL}, {{10, 55}, {16, 22}, {1, 2}, {1, 27}, {1, 1}, {0, 14}}, "TPF_FP01", 1, NULL }
   , { {1, NULL, &IVIA[23], NULL, &PIA[27], NULL, NULL, NULL}, {{11, 110}, {7, 74}, {6, 8}, {1, 28}, {1, 3}, {0, 25}}, "THSD00", 1, NULL }
   , { {2, NULL, &IVIA[25], NULL, &PIA[51], NULL, NULL, NULL}, {{11, 121}, {7, 81}, {6, 14}, {1, 29}, {1, 4}, {0, 25}}, "THSD00", 2, NULL }
   , { {1, NULL, &IVIA[27], NULL, &PIA[75], NULL, NULL, NULL}, {{15, 254}, {11, 161}, {9, 72}, {0, 30}, {0, 5}, {1, 45}}, "ACMCTF0", 1, NULL }
   , { {1, NULL, &IVIA[37], NULL, &PIA[110], NULL, NULL, NULL}, {{15, 305}, {11, 201}, {9, 83}, {0, 30}, {0, 5}, {1, 58}}, "ACUCPF0", 1, NULL }
   , { {1, &EVIA[0], &IVIA[47], PVIA, &PIA[145], NULL, NULL, NULL}, {{1, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}, "CONS00", 1, NULL }
   , { {2, &EVIA[1], &IVIA[48], PVIA, &PIA[146], NULL, NULL, NULL}, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}, "CONS00", 2, NULL }
   , { {1, &EVIA[2], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}, "THHF0", 1, NULL }
   , { {2, &EVIA[3], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}, "THHF0", 2, NULL }
   , { {3, &EVIA[4], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}, "THHF0", 3, NULL }
   , { {4, &EVIA[5], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}, "THHF0", 4, NULL }
   , { {3, &EVIA[6], &IVIA[49], PVIA, &PIA[147], NULL, NULL, NULL}, {{1, 26}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}, "CONS00", 3, NULL }
   , { {4, &EVIA[7], &IVIA[50], PVIA, &PIA[148], NULL, NULL, NULL}, {{1, 27}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}, "CONS00", 4, NULL }
   , { {5, &EVIA[8], &IVIA[51], PVIA, &PIA[149], NULL, NULL, NULL}, {{1, 28}, {0, 10}, {0, 1}, {0, 0}, {0, 1}, {0, 6}}, "CONS00", 5, NULL }
   , { {1, &EVIA[9], &IVIA[52], PVIA, &PIA[150], NULL, NULL, NULL}, {{1, 29}, {1, 10}, {0, 1}, {0, 0}, {0, 1}, {1, 6}}, "ACMAS0000", 1, NULL }
   , { {6, &EVIA[17], &IVIA[54], PVIA, &PIA[152], NULL, NULL, NULL}, {{1, 37}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}, "CONS00", 6, NULL }
   , { {7, &EVIA[18], &IVIA[55], PVIA, &PIA[153], NULL, NULL, NULL}, {{1, 38}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}, "CONS00", 7, NULL }
   , { {8, &EVIA[19], &IVIA[56], PVIA, &PIA[154], NULL, NULL, NULL}, {{1, 39}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}, "CONS00", 8, NULL }
   , { {9, &EVIA[20], &IVIA[57], PVIA, &PIA[155], NULL, NULL, NULL}, {{1, 40}, {0, 13}, {0, 1}, {0, 0}, {0, 1}, {0, 9}}, "CONS00", 9, NULL }
   , { {1, &EVIA[21], &IVIA[58], PVIA, &PIA[156], NULL, NULL, NULL}, {{2, 51}, {2, 18}, {0, 2}, {0, 27}, {0, 1}, {2, 10}}, "TPFGS010", 1, NULL }
   , { {2, &EVIA[36], &IVIA[80], PVIA, &PIA[160], NULL, NULL, NULL}, {{2, 53}, {2, 20}, {0, 2}, {0, 27}, {0, 1}, {2, 12}}, "TPFGS010", 2, NULL }
   , { {3, &EVIA[51], &IVIA[102], PVIA, &PIA[164], NULL, NULL, NULL}, {{2, 65}, {2, 38}, {0, 3}, {0, 28}, {0, 2}, {2, 14}}, "TPFGS010", 3, NULL }
   , { {4, &EVIA[66], &IVIA[124], PVIA, &PIA[168], NULL, NULL, NULL}, {{2, 67}, {2, 40}, {0, 3}, {0, 28}, {0, 2}, {2, 16}}, "TPFGS010", 4, NULL }
   , { {1, &EVIA[81], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 85}, {0, 48}, {0, 4}, {0, 28}, {0, 2}, {0, 21}}, "THHS0", 1, NULL }
   , { {1, &EVIA[82], &IVIA[146], PVIA, &PIA[172], NULL, NULL, NULL}, {{1, 102}, {0, 71}, {0, 8}, {0, 28}, {0, 2}, {0, 24}}, "GA00", 1, NULL }
   , { {4, &EVIA[84], &IVIA[147], PVIA, &PIA[173], NULL, NULL, NULL}, {{2, 104}, {1, 71}, {0, 8}, {0, 28}, {0, 2}, {1, 24}}, "THMAGS00", 4, NULL }
   , { {3, &EVIA[93], &IVIA[156], PVIA, &PIA[176], NULL, NULL, NULL}, {{1, 106}, {0, 72}, {0, 8}, {0, 28}, {0, 2}, {0, 25}}, "GA00", 3, NULL }
   , { {5, &EVIA[95], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}, "THHF0", 5, NULL }
   , { {6, &EVIA[96], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}, "THHF0", 6, NULL }
   , { {7, &EVIA[97], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 132}, {0, 88}, {0, 20}, {0, 30}, {0, 5}, {0, 25}}, "THHF0", 7, NULL }
   , { {8, &EVIA[98], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 162}, {0, 120}, {0, 50}, {0, 30}, {0, 5}, {0, 27}}, "THHF0", 8, NULL }
   , { {5, &EVIA[99], &IVIA[157], PVIA, &PIA[177], NULL, NULL, NULL}, {{2, 162}, {2, 120}, {0, 50}, {0, 30}, {0, 5}, {2, 27}}, "TPFGS010", 5, NULL }
   , { {9, &EVIA[114], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}, "THHF0", 9, NULL }
   , { {10, &EVIA[115], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}, "THHF0", 10, NULL }
   , { {11, &EVIA[116], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}, "THHF0", 11, NULL }
   , { {12, &EVIA[117], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 198}, {0, 148}, {0, 64}, {0, 30}, {0, 5}, {0, 33}}, "THHF0", 12, NULL }
   , { {1, &EVIA[118], &IVIA[179], PVIA, &PIA[181], NULL, NULL, NULL}, {{9, 287}, {8, 186}, {2, 81}, {0, 30}, {0, 5}, {3, 52}}, "ACMCTFREF1", 1, NULL }
   , { {1, &EVIA[142], &IVIA[194], PVIA, &PIA[200], NULL, NULL, NULL}, {{9, 296}, {7, 194}, {0, 83}, {0, 30}, {0, 5}, {3, 55}}, "ACMCTFINT1", 1, NULL }
   , { {6, &EVIA[168], &IVIA[209], PVIA, &PIA[216], NULL, NULL, NULL}, {{2, 350}, {2, 239}, {0, 94}, {0, 30}, {0, 9}, {2, 73}}, "TPFGS010", 6, NULL }
   , { {1, &EVIA[183], &IVIA[231], PVIA, &PIA[220], NULL, NULL, NULL}, {{9, 352}, {7, 241}, {0, 94}, {0, 30}, {0, 9}, {3, 75}}, "ACUCPFINT1", 1, NULL }
   , { {2, &EVIA[209], &IVIA[246], PVIA, &PIA[236], NULL, NULL, NULL}, {{1, 373}, {1, 259}, {0, 98}, {0, 30}, {0, 9}, {1, 81}}, "ACMAS0000", 2, NULL }
   , { {10, &EVIA[217], &IVIA[248], PVIA, &PIA[238], NULL, NULL, NULL}, {{1, 374}, {0, 260}, {0, 98}, {0, 30}, {0, 9}, {0, 82}}, "CONS00", 10, NULL }
   , { {2, &EVIA[218], &IVIA[249], PVIA, &PIA[239], NULL, NULL, NULL}, {{3, 375}, {2, 260}, {0, 98}, {0, 30}, {1, 9}, {0, 82}}, "SAT0", 2, NULL }
   , { {1, &EVIA[220], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 20}, {0, 9}, {0, 1}, {0, 0}, {0, 1}, {0, 4}}, "OMEGC0", 1, NULL }
   , { {1, &EVIA[222], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 106}, {0, 72}, {0, 8}, {0, 28}, {0, 2}, {0, 25}}, "MUL00", 1, NULL }
   , { {1, &EVIA[225], &IVIA[251], PVIA, &PIA[244], NULL, NULL, NULL}, {{9, 269}, {7, 172}, {0, 81}, {0, 30}, {0, 5}, {3, 46}}, "ACMCTFINT2", 1, NULL }
   , { {1, &EVIA[251], &IVIA[266], PVIA, &PIA[260], NULL, NULL, NULL}, {{9, 278}, {7, 179}, {0, 81}, {0, 30}, {0, 5}, {3, 49}}, "ACMCTFTOP2", 1, NULL }
   , { {1, &EVIA[271], &IVIA[286], PVIA, &PIA[276], NULL, NULL, NULL}, {{9, 329}, {8, 219}, {2, 92}, {0, 30}, {0, 5}, {3, 62}}, "ACUCPFREF1", 1, NULL }
   , { {2, &EVIA[295], &IVIA[301], PVIA, &PIA[295], NULL, NULL, NULL}, {{1, 103}, {0, 71}, {0, 8}, {0, 28}, {0, 2}, {0, 24}}, "GA00", 2, NULL }
   , { {1, &EVIA[297], &IVIA[302], PVIA, &PIA[296], NULL, NULL, NULL}, {{3, 107}, {2, 72}, {0, 8}, {0, 28}, {1, 2}, {0, 25}}, "SAT0", 1, NULL }
   , { {1, &EVIA[299], &IVIA[304], PVIA, &PIA[301], NULL, NULL, NULL}, {{9, 320}, {7, 212}, {0, 92}, {0, 30}, {0, 5}, {3, 59}}, "ACUCPFEND1", 1, NULL }
   , { {1, &EVIA[319], &IVIA[324], PVIA, &PIA[317], NULL, NULL, NULL}, {{10, 10}, {5, 4}, {1, 0}, {0, 0}, {0, 1}, {1, 3}}, "TPFP002", 1, NULL }
   , { {1, &EVIA[329], &IVIA[335], PVIA, &PIA[333], NULL, NULL, NULL}, {{7, 30}, {2, 11}, {0, 1}, {0, 0}, {0, 1}, {2, 7}}, "TPFP000", 1, NULL }
   , { {1, &EVIA[339], &IVIA[342], PVIA, &PIA[342], NULL, NULL, NULL}, {{10, 41}, {5, 13}, {1, 1}, {0, 0}, {0, 1}, {1, 9}}, "TPFP001", 1, NULL }
   , { {1, &EVIA[349], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}, "SSINK", 1, NULL }
   , { {2, &EVIA[350], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}, "SSINK", 2, NULL }
   , { {5, &EVIA[351], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 67}, {0, 40}, {0, 3}, {0, 28}, {0, 2}, {0, 16}}, "SSINK", 5, NULL }
   , { {2, &EVIA[352], &IVIA[353], PVIA, &PIA[358], NULL, NULL, NULL}, {{10, 69}, {5, 42}, {1, 3}, {0, 28}, {0, 2}, {1, 18}}, "TPFP002", 2, NULL }
   , { {1, &EVIA[362], &IVIA[364], PVIA, &PIA[374], NULL, NULL, NULL}, {{6, 79}, {1, 47}, {0, 4}, {0, 28}, {0, 2}, {2, 19}}, "TPFSCH00", 1, NULL }
   , { {1, &EVIA[374], &IVIA[369], PVIA, &PIA[381], NULL, NULL, NULL}, {{5, 85}, {4, 48}, {1, 4}, {0, 28}, {0, 2}, {1, 21}}, "TPFRFL000", 1, NULL }
   , { {1, &EVIA[384], &IVIA[374], PVIA, &PIA[391], NULL, NULL, NULL}, {{12, 90}, {19, 52}, {3, 5}, {0, 28}, {0, 2}, {2, 22}}, "ACTEVSB02", 1, NULL }
   , { {1, &EVIA[404], &IVIA[381], PVIA, &PIA[425], NULL, NULL, NULL}, {{15, 132}, {16, 88}, {15, 20}, {0, 30}, {0, 5}, {1, 25}}, "TPFPHE0001", 1, NULL }
   , { {2, &EVIA[416], &IVIA[394], PVIA, &PIA[471], NULL, NULL, NULL}, {{15, 147}, {16, 104}, {15, 35}, {0, 30}, {0, 5}, {1, 26}}, "TPFPHE0001", 2, NULL }
   , { {1, &EVIA[428], &IVIA[407], PVIA, &PIA[517], NULL, NULL, NULL}, {{17, 164}, {13, 122}, {7, 50}, {0, 30}, {0, 5}, {2, 29}}, "TPFCVINT01", 1, NULL }
   , { {2, &EVIA[442], &IVIA[419], PVIA, &PIA[554], NULL, NULL, NULL}, {{17, 181}, {13, 135}, {7, 57}, {0, 30}, {0, 5}, {2, 31}}, "TPFCVINT01", 2, NULL }
   , { {1, &EVIA[456], &IVIA[431], PVIA, &PIA[591], NULL, NULL, NULL}, {{3, 338}, {3, 227}, {0, 94}, {0, 30}, {1, 5}, {2, 65}}, "THC000", 1, NULL }
   , { {2, &EVIA[464], &IVIA[437], PVIA, &PIA[597], NULL, NULL, NULL}, {{3, 341}, {3, 230}, {0, 94}, {0, 30}, {1, 6}, {2, 67}}, "THC000", 2, NULL }
   , { {3, &EVIA[472], &IVIA[443], PVIA, &PIA[603], NULL, NULL, NULL}, {{3, 344}, {3, 233}, {0, 94}, {0, 30}, {1, 7}, {2, 69}}, "THC000", 3, NULL }
   , { {4, &EVIA[480], &IVIA[449], PVIA, &PIA[609], NULL, NULL, NULL}, {{3, 347}, {3, 236}, {0, 94}, {0, 30}, {1, 8}, {2, 71}}, "THC000", 4, NULL }
   , { {1, &EVIA[488], &IVIA[455], PVIA, &PIA[615], NULL, NULL, NULL}, {{12, 361}, {11, 248}, {4, 94}, {0, 30}, {0, 9}, {3, 78}}, "TPFPUCOMPVD0000", 1, NULL }
   , { {1, &EVIA[501], &IVIA[464], PVIA, &PIA[642], NULL, NULL, NULL}, {{6, 20}, {1, 9}, {0, 1}, {0, 0}, {0, 1}, {2, 4}}, "TPFPIN00", 1, NULL }
   , { {3, &EVIA[511], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}, "SSINK", 3, NULL }
   , { {1, &EVIA[512], &IVIA[468], PVIA, &PIA[649], NULL, NULL, NULL}, {{23, 198}, {4, 148}, {4, 64}, {0, 30}, {0, 5}, {1, 33}}, "THGCV00", 1, NULL }
   , { {2, &EVIA[514], &IVIA[474], PVIA, &PIA[680], NULL, NULL, NULL}, {{23, 221}, {4, 152}, {4, 68}, {0, 30}, {0, 5}, {1, 34}}, "THGCV00", 2, NULL }
   , { {4, &EVIA[516], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 55}, {0, 22}, {0, 2}, {0, 27}, {0, 1}, {0, 14}}, "SSINK", 4, NULL }
   , { {6, &EVIA[517], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 164}, {0, 122}, {0, 50}, {0, 30}, {0, 5}, {0, 29}}, "SSINK", 6, NULL }
   , { {1, &EVIA[518], &IVIA[480], PVIA, NULL, NULL, NULL, NULL}, {{0, 244}, {0, 156}, {0, 72}, {0, 30}, {0, 5}, {1, 35}}, "THMAMX000", 1, NULL }
   , { {5, &EVIA[530], &IVIA[482], PVIA, &PIA[711], NULL, NULL, NULL}, {{2, 244}, {1, 156}, {0, 72}, {0, 30}, {0, 5}, {1, 36}}, "THMAGS00", 5, NULL }
   , { {7, &EVIA[539], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 246}, {0, 157}, {0, 72}, {0, 30}, {0, 5}, {0, 37}}, "SSINK", 7, NULL }
   , { {3, &EVIA[540], &IVIA[491], PVIA, NULL, NULL, NULL, NULL}, {{0, 248}, {0, 158}, {0, 72}, {0, 30}, {0, 5}, {1, 39}}, "THMAMX000", 3, NULL }
   , { {7, &EVIA[552], &IVIA[493], PVIA, &PIA[714], NULL, NULL, NULL}, {{2, 248}, {1, 158}, {0, 72}, {0, 30}, {0, 5}, {1, 40}}, "THMAGS00", 7, NULL }
   , { {9, &EVIA[561], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 250}, {0, 159}, {0, 72}, {0, 30}, {0, 5}, {0, 41}}, "SSINK", 9, NULL }
   , { {4, &EVIA[562], &IVIA[502], PVIA, NULL, NULL, NULL, NULL}, {{0, 250}, {0, 159}, {0, 72}, {0, 30}, {0, 5}, {1, 41}}, "THMAMX000", 4, NULL }
   , { {8, &EVIA[574], &IVIA[504], PVIA, &PIA[717], NULL, NULL, NULL}, {{2, 250}, {1, 159}, {0, 72}, {0, 30}, {0, 5}, {1, 42}}, "THMAGS00", 8, NULL }
   , { {10, &EVIA[583], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 252}, {0, 160}, {0, 72}, {0, 30}, {0, 5}, {0, 43}}, "SSINK", 10, NULL }
   , { {5, &EVIA[584], &IVIA[513], PVIA, NULL, NULL, NULL, NULL}, {{0, 252}, {0, 160}, {0, 72}, {0, 30}, {0, 5}, {1, 43}}, "THMAMX000", 5, NULL }
   , { {9, &EVIA[596], &IVIA[515], PVIA, &PIA[720], NULL, NULL, NULL}, {{2, 252}, {1, 160}, {0, 72}, {0, 30}, {0, 5}, {1, 44}}, "THMAGS00", 9, NULL }
   , { {11, &EVIA[605], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 254}, {0, 161}, {0, 72}, {0, 30}, {0, 5}, {0, 45}}, "SSINK", 11, NULL }
   , { {2, &EVIA[606], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 65}, {0, 38}, {0, 3}, {0, 28}, {0, 2}, {0, 14}}, "THMASINK00", 2, NULL }
   , { {2, &EVIA[610], &IVIA[524], PVIA, NULL, NULL, NULL, NULL}, {{0, 246}, {0, 157}, {0, 72}, {0, 30}, {0, 5}, {1, 37}}, "THMAMX000", 2, NULL }
   , { {6, &EVIA[622], &IVIA[526], PVIA, &PIA[723], NULL, NULL, NULL}, {{2, 246}, {1, 157}, {0, 72}, {0, 30}, {0, 5}, {1, 38}}, "THMAGS00", 6, NULL }
   , { {8, &EVIA[631], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 248}, {0, 158}, {0, 72}, {0, 30}, {0, 5}, {0, 39}}, "SSINK", 8, NULL }
   , { {1, &EVIA[632], &IVIA[535], PVIA, &PIA[726], NULL, NULL, NULL}, {{2, 8}, {1, 3}, {0, 0}, {0, 0}, {1, 0}, {0, 3}}, "THMAFS00", 1, NULL }
   , { {1, &EVIA[641], &IVIA[536], PVIA, &PIA[729], NULL, NULL, NULL}, {{2, 2}, {1, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 0}}, "THMAGS00", 1, NULL }
   , { {2, &EVIA[650], &IVIA[545], PVIA, &PIA[732], NULL, NULL, NULL}, {{2, 4}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}, "THMAGS00", 2, NULL }
   , { {3, &EVIA[659], &IVIA[554], PVIA, &PIA[735], NULL, NULL, NULL}, {{2, 6}, {1, 2}, {0, 0}, {0, 0}, {0, 0}, {1, 2}}, "THMAGS00", 3, NULL }
   , { {1, &EVIA[668], NULL, PVIA, NULL, NULL, NULL, NULL}, {{0, 8}, {0, 3}, {0, 0}, {0, 0}, {0, 0}, {0, 3}}, "THMASINK00", 1, NULL }
};

/* *******************  Function prototypes ************ */

extern AMEModelStatus rstat_in(const S_AMESubIntf *sitf);
extern AMEModelStatus rstat_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus rstat_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpf_fp01_prein(const S_AMESubIntf *sitf);
extern AMEModelStatus tpf_fp01_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpf_fp01_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpf_fp01_end(const S_AMESubIntf *sitf);
extern AMEModelStatus thsd00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thsd00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thsd00_end(const S_AMESubIntf *sitf);
extern void acmctf0in_(int *n, double *RP, int *IP, char **TP, void **PS);
extern void acmctf0_(int *n, double *vi0, double *vi1, double *vi2, double *vi3, double *vi4, double *vi5, double *vi6
                   , double *vi7, double *vi8, double *vi9, double *RP, int *IP, char **TP, void **PS);
extern void acmctf0end_(int *n, double *RP, int *IP, char **TP, void **PS);
extern void acucpf0in_(int *n, double *RP, int *IP, char **TP, void **PS);
extern void acucpf0_(int *n, double *vi0, double *vi1, double *vi2, double *vi3, double *vi4, double *vi5, double *vi6
                   , double *vi7, double *vi8, double *vi9, double *RP, int *IP, char **TP, void **PS);
extern void acucpf0end_(int *n, double *RP, int *IP, char **TP, void **PS);
extern AMEModelStatus cons00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus cons00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus cons00_end(const S_AMESubIntf *sitf);
extern AMEModelStatus thhf0_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thhf0_end(const S_AMESubIntf *sitf);
extern double acmas0000_macro2_(int *n, double *m0, double *RP, int *IP, void **PS);
extern double acmas0000_macro3_(int *n, double *m0, double *RP, int *IP, void **PS);
extern AMEModelStatus thhs0_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thhs0_end(const S_AMESubIntf *sitf);
extern AMEModelStatus ga00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus ga00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus ga00_end(const S_AMESubIntf *sitf);
extern double acmctfint1_y4_(int *n, double *m0, double *RP, int *IP, void **PS, int *macindex);
extern double acucpfint1_abs4_(int *n, double *m0, double *RP, int *IP, void **PS, int *macindex);
extern AMEModelStatus sat0_in(const S_AMESubIntf *sitf);
extern AMEModelStatus sat0_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus sat0_end(const S_AMESubIntf *sitf);
extern AMEModelStatus omegc0_in(const S_AMESubIntf *sitf);
extern AMEModelStatus omegc0_end(const S_AMESubIntf *sitf);
extern double acmas0000_macro1_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *RP, int *IP
                              , void **PS);
extern AMEModelStatus thmags00_macro_sig(const S_AMESubIntf *sitf);
extern AMEModelStatus mul00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus mul00_end(const S_AMESubIntf *sitf);
extern double acmctfint2_y5_(int *n, double *m0, double *RP, int *IP, void **PS, int *macindex);
extern double acmas0000_macro0_(int *n, double *m0, double *m1, double *m2, double *m3, double *RP, int *IP, void **PS);
extern AMEModelStatus thmags00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thmags00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thmags00_end(const S_AMESubIntf *sitf);
extern void acmas0000in_(int *n, double *RP, int *IP, void **PS);
extern void acmas0000_(int *n, double *ve0, double *ve1, double *ve2, double *ve3, double *ve4, double *ve5, double *ve6
                     , double *ve7, double *vi8, double *vi9, double *RP, int *IP, void **PS);
extern void acmas0000end_(int *n, double *RP, int *IP, void **PS);
extern AMEModelStatus tpfp002_macro_com1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp000_macro_cnum1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp001_macro_com2(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfgs010_macro_p1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfgs010_macro_sig(const S_AMESubIntf *sitf);
extern AMEModelStatus ssink_in(const S_AMESubIntf *sitf);
extern AMEModelStatus ssink_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp002_macro_dm2(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_macro_rho1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_macro_cnum1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_macro_tempc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_macro_rho3(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_macro_cnum3(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfrfl000_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfrfl000_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfrfl000_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_macro_com1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_macro_dm3(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_macro_t3(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_macro_com3(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_macro_t1(const S_AMESubIntf *sitf);
extern double acmctfint2_dm4_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *m5, double *RP
                            , int *IP, void **PS, int *macindex);
extern double acmctfref1_dm3_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *m5, double *RP
                            , int *IP, char **TP, void **PS, int *macindex);
extern double acmctfint1_dm5_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *m5, double *RP
                            , int *IP, void **PS, int *macindex);
extern double acucpfref1_dm5_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *m5, double *RP
                            , int *IP, char **TP, void **PS, int *macindex);
extern double acucpfint1_dm5_(int *n, double *m0, double *m1, double *m2, double *m3, double *m4, double *m5, double *RP
                            , int *IP, void **PS, int *macindex);
extern AMEModelStatus tpfpucompvd0000_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfpucompvd0000_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfpucompvd0000_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfpin00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfpin00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfpin00_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfsch00_end(const S_AMESubIntf *sitf);
extern AMEModelStatus thgcv00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thgcv00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thgcv00_end(const S_AMESubIntf *sitf);
extern void acmctfref1in_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0, double *y1, double *y2
                        , double *y3, double *y4, double *y5, double *y6, double *y7);
extern void acmctfref1_(int *n, double *port_1_v1, double *port_1_v2, double *port_1_v3, double *port_1_v4, double *port_2_v1, double *port_2_v2, double *port_2_v4
                      , double *port_3_v1, double *port_3_v2, double *port_3_v3, double *port_3_v4, double *port_3_v5, double *port_4_v2, double *port_5_v1, double *port_5_dv1
                      , double *port_5_v2, double *port_5_dv2, double *port_5_v4, double *port_5_v5, double *int_v1, double *int_v2, double *int_dv2, double *int_v3
                      , double *int_dv3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8, double *int_v9, double *int_v10
                      , double *int_v11, double *int_dv11, double *int_v12, double *int_v13, double *int_v14, double *int_v15, double *RP, int *IP
                      , char **TP, void **PS);
extern void acmctfref1end_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0, double *y1, double *y2
                         , double *y3, double *y4, double *y5, double *y6, double *y7);
extern AMEModelStatus tpfgs010_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfgs010_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfgs010_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp001_macro_dm1(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfphe0001_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_macro_dm1(const S_AMESubIntf *sitf);
extern void acmctfint2in_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                        , double *y4, double *y5);
extern void acmctfint2_(int *n, double *port_1_v1, double *port_1_dv1, double *port_1_v2, double *port_1_dv2, double *port_1_v4, double *port_1_v5, double *port_2_v1
                      , double *port_2_v2, double *port_2_v3, double *port_2_v4, double *port_2_v5, double *port_2_v6, double *port_3_v1, double *port_3_v2, double *port_3_v4
                      , double *port_4_v1, double *port_4_v2, double *port_4_v3, double *port_4_v4, double *port_4_v5, double *port_5_v5, double *int_v1, double *int_v2
                      , double *int_dv2, double *int_v3, double *int_dv3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8
                      , double *int_v9, double *int_v10, double *int_v11, double *int_dv11, double *int_v12, double *int_v13, double *int_v14, double *int_v15
                      , double *RP, int *IP, void **PS);
extern void acmctfint2end_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                         , double *y4, double *y5);
extern void acmctftop2in_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                        , double *y4, double *y5, double *y6, double *y7, double *y8);
extern void acmctftop2_(int *n, double *port_1_v1, double *port_1_v2, double *port_1_v3, double *port_1_v4, double *port_1_v5, double *port_1_v6, double *port_2_v1
                      , double *port_2_dv1, double *port_2_v2, double *port_2_dv2, double *port_2_v4, double *port_2_v5, double *port_3_v1, double *port_3_v2, double *port_3_v4
                      , double *port_4_v1, double *port_4_dv1, double *port_4_v2, double *port_4_dv2, double *port_4_v4, double *port_4_v5, double *int_v1, double *int_dv1
                      , double *int_v2, double *int_dv2, double *int_v3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8
                      , double *int_v9, double *int_v10, double *int_v11, double *int_v12, double *int_v13, double *int_v14, double *int_v15, double *int_v16
                      , double *int_dv16, double *int_v17, double *int_v18, double *int_v19, double *int_v20, double *RP, int *IP, void **PS);
extern void acmctftop2end_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                         , double *y4, double *y5, double *y6, double *y7, double *y8);
extern void acmctfint1in_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                        , double *y4, double *y5);
extern void acmctfint1_(int *n, double *port_1_v1, double *port_1_v2, double *port_1_v3, double *port_1_v4, double *port_1_v5, double *port_1_v6, double *port_2_v1
                      , double *port_2_dv1, double *port_2_v2, double *port_2_dv2, double *port_2_v4, double *port_2_v5, double *port_3_v1, double *port_3_v2, double *port_3_v4
                      , double *port_4_v5, double *port_5_v1, double *port_5_v2, double *port_5_v3, double *port_5_v4, double *port_5_v5, double *int_v1, double *int_v2
                      , double *int_dv2, double *int_v3, double *int_dv3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8
                      , double *int_v9, double *int_v10, double *int_v11, double *int_dv11, double *int_v12, double *int_v13, double *int_v14, double *int_v15
                      , double *RP, int *IP, void **PS);
extern void acmctfint1end_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                         , double *y4, double *y5);
extern void acucpfref1in_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0, double *y1, double *y2
                        , double *y3, double *y4, double *y5, double *y6, double *y7);
extern void acucpfref1_(int *n, double *port_1_v1, double *port_1_v2, double *port_1_v3, double *port_1_v4, double *port_2_v1, double *port_2_dv1, double *port_2_v2
                      , double *port_2_dv2, double *port_2_v4, double *port_2_v5, double *port_3_v1, double *port_3_v2, double *port_3_v4, double *port_4_v2, double *port_5_v1
                      , double *port_5_v2, double *port_5_v3, double *port_5_v4, double *port_5_v5, double *int_v1, double *int_v2, double *int_dv2, double *int_v3
                      , double *int_dv3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8, double *int_v9, double *int_v10
                      , double *int_v11, double *int_dv11, double *int_v12, double *int_v13, double *int_v14, double *int_v15, double *RP, int *IP
                      , char **TP, void **PS);
extern void acucpfref1end_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0, double *y1, double *y2
                         , double *y3, double *y4, double *y5, double *y6, double *y7);
extern void acucpfint1in_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                        , double *y4, double *y5);
extern void acucpfint1_(int *n, double *port_1_v1, double *port_1_dv1, double *port_1_v2, double *port_1_dv2, double *port_1_v4, double *port_1_v5, double *port_2_v1
                      , double *port_2_v2, double *port_2_v3, double *port_2_v4, double *port_2_v5, double *port_2_v6, double *port_3_v1, double *port_3_v2, double *port_3_v4
                      , double *port_4_v5, double *port_5_v1, double *port_5_v2, double *port_5_v3, double *port_5_v4, double *port_5_v5, double *int_v1, double *int_v2
                      , double *int_dv2, double *int_v3, double *int_dv3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8
                      , double *int_v9, double *int_v10, double *int_v11, double *int_dv11, double *int_v12, double *int_v13, double *int_v14, double *int_v15
                      , double *RP, int *IP, void **PS);
extern void acucpfint1end_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                         , double *y4, double *y5);
extern AMEModelStatus tpfp002_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp002_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp002_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp000_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp000_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp000_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp001_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp001_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfp001_end(const S_AMESubIntf *sitf);
extern void actevsb02in_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0);
extern void actevsb02_(int *n, double *ve0, double *ve1, double *ve2, double *ve3, double *ve4, double *ve5, double *ve6
                     , double *ve7, double *ve8, double *ve9, double *ve10, double *ve11, double *ve12, double *vi13, double *vi14
                     , double *vi15, double *vi16, double *vi17, double *vi18, double *vi19, double *vidot19, double *RP, int *IP
                     , char **TP, void **PS, int *flag);
extern void actevsb02end_(int *n, double *RP, int *IP, char **TP, void **PS, double *y0);
extern AMEModelStatus thmamx000_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thmamx000_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thmamx000_end(const S_AMESubIntf *sitf);
extern void acucpfend1in_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                        , double *y4, double *y5, double *y6, double *y7, double *y8);
extern void acucpfend1_(int *n, double *port_1_v1, double *port_1_dv1, double *port_1_v2, double *port_1_dv2, double *port_1_v4, double *port_1_v5, double *port_2_v1
                      , double *port_2_v2, double *port_2_v3, double *port_2_v4, double *port_2_v5, double *port_2_v6, double *port_3_v1, double *port_3_v2, double *port_3_v4
                      , double *port_4_v1, double *port_4_dv1, double *port_4_v2, double *port_4_dv2, double *port_4_v4, double *port_4_v5, double *int_v1, double *int_dv1
                      , double *int_v2, double *int_dv2, double *int_v3, double *int_v4, double *int_v5, double *int_v6, double *int_v7, double *int_v8
                      , double *int_v9, double *int_v10, double *int_v11, double *int_v12, double *int_v13, double *int_v14, double *int_v15, double *int_v16
                      , double *int_dv16, double *int_v17, double *int_v18, double *int_v19, double *int_v20, double *RP, int *IP, void **PS
                      , int *flag);
extern void acucpfend1end_(int *n, double *RP, int *IP, void **PS, double *y0, double *y1, double *y2, double *y3
                         , double *y4, double *y5, double *y6, double *y7, double *y8);
extern AMEModelStatus thmasink00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thmasink00_end(const S_AMESubIntf *sitf);
extern AMEModelStatus thmafs00_macro_sig(const S_AMESubIntf *sitf);
extern AMEModelStatus thmafs00_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thmafs00_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thmafs00_end(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_in(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus tpfcvint01_end(const S_AMESubIntf *sitf);
extern AMEModelStatus thc000_in(const S_AMESubIntf *sitf);
extern AMEModelStatus thc000_calc(const S_AMESubIntf *sitf);
extern AMEModelStatus thc000_end(const S_AMESubIntf *sitf);


/* ******************    Here comes the functions ************ */
#if(AME_FUNC_LOOP == 1)

static void PreInitialize(AMESIMSYSTEM *amesys, double *y)
{
   int n = 0;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getstarttime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;

#if (SIZE_INPUT_DEF > 0)
   double saveBuff[SIZE_INPUT_DEF];
#endif


   (void)n;

   /* Assign continuous state variables calculated by the integrator */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

   InitializeUnitsManagerAsDefault();

#if (NB_CALL_prein > 0)
   {
      int idxCall;
      
      for(idxCall = 0; idxCall < NB_CALL_prein; idxCall++) {
         sitf.structuralInfo  = &SUBSTRUC[TabFunc_prein[idxCall].subIdx].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[TabFunc_prein[idxCall].subIdx];

#if (SIZE_INPUT_DEF > 0)
         if(SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef) {
            int iInputDef;
            int pos = 0;
            for(iInputDef = 1; iInputDef < 1 + SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[0][0]; iInputDef++) {
               int i;
               for(i = 0; i < SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][1]; i++) {
                  saveBuff[pos + i] = v[SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][0] + i];
               }
               pos += SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][1];
            }
         }
#endif
      
         status |= (*TabFunc_prein[idxCall].func)(&sitf);
         
#if (SIZE_INPUT_DEF > 0)
         if(SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef) {
            int iInputDef;
            int pos = 0;
            for(iInputDef = 1; iInputDef < 1 + SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[0][0]; iInputDef++) {
               int i;
               for(i = 0; i < SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][1]; i++) {
                  v[SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][0] + i] = saveBuff[pos + i];
               }
               pos += SUBSTRUC[TabFunc_prein[idxCall].subIdx].inDef[iInputDef][1];
            }
         }
#endif
         
         if(status & AME_MODEL_FATAL) goto _amefunc_preinit_end;
      }
   }
#endif

   /* Assign continuous state variables initialized by submodels */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#endif

   /* Assign discrete state initialized by submodels */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         Z[idxState] = v[GdiscStateVarNum[idxState]];
      }
   }
#endif

#if (NB_CALL_prein > 0)
_amefunc_preinit_end:
#endif
   if(status & AME_MODEL_FATAL) AmeExit(1);
}

static void Initialize(AMESIMSYSTEM *amesys, double *y)
{
   int n;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getstarttime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;
   
#if (SIZE_INPUT_DEF > 0)
   double saveBuff[SIZE_INPUT_DEF];
#endif


   (void)n;

   /* Assign continuous state variables */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

#if (NB_CALL_in > 0)
   {
      int idxCall;
      
      for(idxCall = 0; idxCall < NB_CALL_in; idxCall++) {
         sitf.structuralInfo  = &SUBSTRUC[TabFunc_in[idxCall].subIdx].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[TabFunc_in[idxCall].subIdx];
         
#if (SIZE_INPUT_DEF > 0)
         if(SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef) {
            int iInputDef;
            int pos = 0;
            for(iInputDef = 1; iInputDef < 1 + SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[0][0]; iInputDef++) {
               int i;
               for(i = 0; i < SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][1]; i++) {
                  saveBuff[pos + i] = v[SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][0] + i];
               }
               pos += SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][1];
            }
         }
#endif
         
         status |= (*TabFunc_in[idxCall].func)(&sitf);
         
#if (SIZE_INPUT_DEF > 0)
         if(SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef) {
            int iInputDef;
            int pos = 0;
            for(iInputDef = 1; iInputDef < 1 + SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[0][0]; iInputDef++) {
               int i;
               for(i = 0; i < SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][1]; i++) {
                  v[SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][0] + i] = saveBuff[pos + i];
               }
               pos += SUBSTRUC[TabFunc_in[idxCall].subIdx].inDef[iInputDef][1];
            }
         }
#endif
         
         if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
      }
   }
#endif
   /* Assign continuous state variables initialized by submodels */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#endif

   /* Assign discrete state initialized by submodels */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         Z[idxState] = v[GdiscStateVarNum[idxState]];
      }
   }
#endif

#if (NB_CALL_in > 0)
_amefunc_init_end:
#endif
   if(status & AME_MODEL_FATAL) AmeExit(1);
}

static void localFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int *flag)
{
   int sflag, oflag, n, panic, i=0;
   int *oldflag, *newflag;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *dbk_wk = amesys->pModel->dbk_wk;
   AMEModelStatus status = AME_MODEL_OK;

#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, &sflag, v, dot};

#if(AME_HAS_ENABLED_SUBMODEL == 1)
   memset(dot,0,AME_NBOF_SOLVER_STATES*sizeof(double));
#elif (AME_NBOF_EXPLICIT_STATE == 0)
   dot[0] = 0.0;
#endif

#else
   double dot[AME_NBOF_SOLVER_STATES];
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, &sflag, v, dot};

   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_SOLVER_STATES*sizeof(double));
#endif

   SetGlobalSystem(amesys);

   (void)n;

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif

   /* Record old value of flag (oflag) and set
      flag value for use in submodels (sflag).
      Also get addresses of main discontinuity flags. */

   oflag = *flag;
   sflag = *flag;

   if(amesys->first_call)
   {
      GetFlagAddresses(&amesys->oldflag, &amesys->newflag);
   }
   oldflag = amesys->oldflag;
   newflag = amesys->newflag;

   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

   panic = 0;
   getredstep();

   if(isstabrun_())
   {
      simOptGetFixedTime(amesys->simVOptions, &t);
   }
   else if(*flag == 2)
   {
      /* Record current simulation time for message passing. */

      SetSimTime(t);
   }
   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */

      t = getstarttime_();
   }
   sitf.t = t;
   
   /* Assign the state variables y[] calculated by the integrator
      to the appropriate variables v[]. */

   /* Assign continuous state variables calculated by the integrator */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

   /* Assign the interface input variables to the appropriate variable v(). */
#if(AME_NBOF_INPUTS > 0)
   {
      int idxInput;
      for(idxInput = 0; idxInput < AME_NBOF_INPUTS; idxInput++) {
         v[GInputVarNum[idxInput]] = input[idxInput];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
  /* The following call ensures that lsoda does not integrate past
      time amesys->t_end_of_time_slice. This does not matter in a standard AMESim run but is
      very important with cosimulation. */

#ifdef AME_COSIM
   *oldflag = *newflag = sflag;
   discInput(&amesys->t_end_of_time_slice);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag,&sflag,&oflag,&panic,"_TunableParam",1);
#endif

#else
   if(*flag == 5)
   {
      DPerturbIfNecessary(amesys, flag);
   }

#ifdef AME_COSIM
   *oldflag = *newflag = sflag;
   discInput(&amesys->t_end_of_time_slice);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag,&sflag,&oflag,&panic,"_TunableParam",1);
#endif

#endif

   /* Call submodel calculation subroutine in the order
      that ensures the input requirements of each submodel
      are satisfied. */

#if (NB_REAL_TUNABLE_PARAM > 0) || (NB_INT_TUNABLE_PARAM > 0)
   if(*flag == 0)
   {
      int idxParam;
#if (NB_REAL_TUNABLE_PARAM > 0)
      for(idxParam = 0; idxParam < NB_REAL_TUNABLE_PARAM; idxParam++) {
         v[GRealTunableParam[idxParam][1]] = amesys->pModel->realParamArray[GRealTunableParam[idxParam][0]];
      }
#endif
#if(NB_INT_TUNABLE_PARAM > 0)
      for(idxParam = 0; idxParam < NB_INT_TUNABLE_PARAM; idxParam++) {
         v[GIntTunableParam[idxParam][1]] = amesys->pModel->integerParamArray[GIntTunableParam[idxParam][0]];
      }
#endif
   }
#endif

#if (NB_CALL_calc > 0)
   {
      int idxCall;
      for(idxCall = 0; idxCall < NB_CALL_calc; idxCall++) {
      
         if((TabFunc_calc[idxCall].runtime & 0x02) && !isprint_()) {
            // Call only when printing
            continue;
         }
         
         if(TabFunc_calc[idxCall].runtime & 0x04) {
            // Sensed variables
            SetVisibility(amesys);
         }
         
         if(TabFunc_calc[idxCall].runtime & 0x01) { *oldflag = *newflag = sflag; }
         
         // Prepare and call function 
         if(TabFunc_calc[idxCall].runtime & 0x20) {
            // duplicate
            int idxDup;
            for(idxDup=0; idxDup < TabFunc_calc[idxCall].dupVar[2]; idxDup++) 
            {
               v[TabFunc_calc[idxCall].dupVar[1] + idxDup] = v[TabFunc_calc[idxCall].dupVar[0] + idxDup];
            }
         }
         else if(TabFunc_calc[idxCall].runtime & 0x40) {
            // sign reversed duplicate
            int idxDup;
            for(idxDup=0; idxDup < TabFunc_calc[idxCall].dupVar[2]; idxDup++) 
            {
               v[TabFunc_calc[idxCall].dupVar[1] + idxDup] = -v[TabFunc_calc[idxCall].dupVar[0] + idxDup];
            }
         }
         else {
            sitf.structuralInfo = &SUBSTRUC[TabFunc_calc[idxCall].subIdx].STLI;
            sitf.simulationInfo = &amesys->pModel->subArray[TabFunc_calc[idxCall].subIdx];
            status |= (*TabFunc_calc[idxCall].func)(&sitf);
         }
         
         if(TabFunc_calc[idxCall].runtime & 0x04) {
            // Sensed variables
            ClearVisibility(amesys);
         }


#if (AME_NBOF_IMPLICIT_STATE_GENERATED > 0)
         if(TabFunc_calc[idxCall].runtime & 0x10) {
            // Deal with generated implicit
            int idxVarImp;
            for(idxVarImp = 0; idxVarImp < TabFunc_calc[idxCall].stateList[0][0]; idxVarImp++) {
               if(TabFunc_calc[idxCall].stateList[idxVarImp + 1][0] == AME_GENERATED_IMPLICIT_STATE) {
                  int numState = TabFunc_calc[idxCall].stateList[idxVarImp + 1][1];
                  int sizeState = TabFunc_calc[idxCall].stateList[idxVarImp + 1][2];
                  int idxState;
                  for(idxState = numState; idxState < (numState + sizeState); idxState++) {
                     delta[idxState] = v[GcontStateVarNum[idxState]] - y[idxState];
                     v[GcontStateVarNum[idxState]] = y[idxState];
                  }
               }
            }
         }
#endif
         if(TabFunc_calc[idxCall].runtime & 0x01) {
            AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, SUBSTRUC[TabFunc_calc[idxCall].subIdx].name, SUBSTRUC[TabFunc_calc[idxCall].subIdx].instance);
         }
         else {
            AME_POST_SUBMODCALL_NO_DISCON(amesys, flag);
         }

      }         
   }   
#endif // NB_CALL_calc > 0

   /* Set interface outputs here. */

   /* Set interface outputs here. */
#if(AME_NBOF_OUTPUTS > 0)
   {
      int idxOutput;
      for(idxOutput = 0; idxOutput < AME_NBOF_OUTPUTS; idxOutput++) {
         output[idxOutput] = v[GOutputVarNum[idxOutput]];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
   applyStateStatus(dot,AME_NBOF_SOLVER_STATES);
#else
#if( AME_NBOF_EXPLICIT_STATE > 0)
   applyStateStatus(dot,AME_NBOF_EXPLICIT_STATE);

   for(i=0;i<AME_NBOF_EXPLICIT_STATE;i++)
   {
      delta[i] = dot[i] - yprime[i];
   }
#endif
   for(i=AME_NBOF_EXPLICIT_STATE;i<(AME_NBOF_EXPLICIT_STATE + AME_NBOF_IMPLICIT_STATE_DECLARED);i++)
   {
      delta[i] = dot[i];
   }
#endif

   if(*flag == 0)
   {
      /* It is an initialization call and the user
         is permitted to change the state variables
         and discrete variables. */
      updateStatesFromModel(amesys, y, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

#if( AME_NBOF_DISCRETE_STATE > 0)
   if(is_sample_time()) {
      /* Change discrete variables */
      updateStatesFromModel(amesys, y, AME_DISCRETE_STATE);
   }
#endif

   UpFECount(amesys);

   amesys->first_call = 0;
   
   if(status & AME_MODEL_FATAL) {
      AmeExit(1);
   }
}

static void localJFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int col)
{
   int sflag=1; /* Only one flag value is required. */
   int n=1, i=0;
   double *v = amesys->v;
   double *vcopy = amesys->vcopy;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   
#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;
#else
   double dot[AME_NBOF_SOLVER_STATES];
#endif
   
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot};
   AMEModelStatus status = AME_MODEL_OK;

#if(AME_MODEL_ISEXPLICIT == 0)
   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_SOLVER_STATES*sizeof(double));
#endif

#if(AME_MODEL_ISEXPLICIT == 0)
   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif

   if(isstabrun_())
   {
      simOptGetFixedTime(amesys->simVOptions, &t);
   }
#endif

   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */

      t = getstarttime_();
   }
   sitf.t = t;
   
#if ((AME_NBOF_EXPLICIT_STATE > 0) || (AME_NBOF_IMPLICIT_STATE > 0))

   /* Assign the state variables y[] calculated by the integrator
      to the appropriate variables v[] and right calls necessary
      for that state in a case of a switch. */


   // Assign perturbated state in v
   v[GcontStateVarNum[col]] = y[col];
   
   {
      int idxCall;
      for(idxCall = 0; idxCall < TabJFunc_calc[col][0]; idxCall++) {
         int idxFunc = TabJFunc_calc[col][idxCall + 1];

         if((TabFunc_calc[idxFunc].runtime & 0x02) && !isprint_()) {
            // Call only when printing
            continue;
         }
         
         if(TabFunc_calc[idxFunc].runtime & 0x04) {
            // Sensed variables
            SetVisibility(amesys);
         }
         
         // Prepare and call function 
         if(TabFunc_calc[idxFunc].runtime & 0x20) {
            // duplicate
            int idxDup;
            for(idxDup=0; idxDup < TabFunc_calc[idxFunc].dupVar[2]; idxDup++) {
               v[TabFunc_calc[idxFunc].dupVar[1] + idxDup] = v[TabFunc_calc[idxFunc].dupVar[0] + idxDup];
            }
         }
         else if(TabFunc_calc[idxFunc].runtime & 0x40) {
            // sign reversed duplicate
            int idxDup;
            for(idxDup=0; idxDup < TabFunc_calc[idxFunc].dupVar[2]; idxDup++) {
               v[TabFunc_calc[idxFunc].dupVar[1] + idxDup] = -v[TabFunc_calc[idxFunc].dupVar[0] + idxDup];
            }
         }
         else {
            sitf.structuralInfo = &SUBSTRUC[TabFunc_calc[idxFunc].subIdx].STLI;
            sitf.simulationInfo = &amesys->pModel->subArray[TabFunc_calc[idxFunc].subIdx];
            status |= (*TabFunc_calc[idxFunc].func)(&sitf);
         }

         if(TabFunc_calc[idxFunc].runtime & 0x04) {
            // Sensed variables
            ClearVisibility(amesys);
         }
#if(AME_MODEL_ISEXPLICIT == 0)
         if(TabFunc_calc[idxFunc].runtime & 0x18) {
            // Deal with states
            int idxVarImp;
            for(idxVarImp = 0; idxVarImp < TabFunc_calc[idxFunc].stateList[0][0]; idxVarImp++) {
               int idxState;
               int numState = TabFunc_calc[idxFunc].stateList[idxVarImp + 1][1];
               int sizeState = TabFunc_calc[idxFunc].stateList[idxVarImp + 1][2];
               
               if(TabFunc_calc[idxFunc].stateList[idxVarImp + 1][0] == AME_EXPLICIT_STATE) {
                  // Explicit state
                  for(idxState = numState; idxState < (numState + sizeState); idxState++) {
                     delta[idxState] = dot[idxState] - yprime[idxState];
                  }
               }
               else if( (TabFunc_calc[idxFunc].stateList[idxVarImp + 1][0] == AME_DECLARED_IMPLICIT_STATE)
                  || (TabFunc_calc[idxFunc].stateList[idxVarImp + 1][0] == AME_CONSTRAINT_STATE) ) {
                  // Declared implicit state
                  for(idxState = numState; idxState < (numState + sizeState); idxState++) {
                     delta[idxState] = dot[idxState];
                  }
               }
               else if(TabFunc_calc[idxFunc].stateList[idxVarImp + 1][0] == AME_GENERATED_IMPLICIT_STATE) {
                  // Generated implicit state
                  for(idxState = numState; idxState < (numState + sizeState); idxState++) {
                     delta[idxState] = v[GcontStateVarNum[idxState]] - y[idxState];
                     v[GcontStateVarNum[idxState]] = y[idxState];
                  }
               }
            }
         }
#endif
      }
   }         
   

#else

   dot[0] = 0.0; /* Artificial state variable derivative. */

#endif

   UpFECount(amesys);
   
   if(status & AME_MODEL_FATAL) {
      AmeExit(1);
   }  
}

static void EndOfSimulation(AMESIMSYSTEM *amesys)
{
   int n=1;
   double *y = amesys->states;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getfinaltime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;
   

   (void)n;
   (void)status;

#if (NB_CALL_end > 0)
   {
      int idxCall;
      
      for(idxCall = 0; idxCall < NB_CALL_end; idxCall++) {
         sitf.structuralInfo  = &SUBSTRUC[TabFunc_end[idxCall].subIdx].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[TabFunc_end[idxCall].subIdx];
         status |= (*TabFunc_end[idxCall].func)(&sitf);
      }
   }
#endif
}

#else

static void PreInitialize(AMESIMSYSTEM *amesys, double *y)
{
   int n = 0;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getstarttime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;


   (void)n;

   /* Assign continuous state variables calculated by the integrator */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

   InitializeUnitsManagerAsDefault();

   sitf.structuralInfo  = &SUBSTRUC[1].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[1];
   status |= tpf_fp01_prein(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_preinit_end;

   /* Assign continuous state variables initialized by submodels */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#endif

   /* Assign discrete state initialized by submodels */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         Z[idxState] = v[GdiscStateVarNum[idxState]];
      }
   }
#endif

_amefunc_preinit_end:
   if(status & AME_MODEL_FATAL) AmeExit(1);
}

static void Initialize(AMESIMSYSTEM *amesys, double *y)
{
   int n;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getstarttime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;


   (void)n;

   /* Assign continuous state variables */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

   sitf.structuralInfo  = &SUBSTRUC[0].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[0];
   status |= rstat_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[1].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[1];
   status |= tpf_fp01_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[2].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[2];
   status |= thsd00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[3].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[3];
   status |= thsd00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 1;
   acmctf0in_(&n, RP85, IP85, TP85, PS85);
   n = 1;
   acucpf0in_(&n, RP90, IP90, TP90, PS90);
   sitf.structuralInfo  = &SUBSTRUC[6].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[6];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[7].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[7];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[8].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[8];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[9].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[9];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[10].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[10];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[11].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[11];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[12].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[12];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[13].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[13];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[14].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[14];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[16].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[16];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[17].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[17];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[18].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[18];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[19].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[19];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[24].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[24];
   status |= thhs0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[25].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[25];
   status |= ga00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[27].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[27];
   status |= ga00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[28].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[28];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[29].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[29];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[30].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[30];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[31].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[31];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[33].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[33];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[34].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[34];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[35].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[35];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[36].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[36];
   status |= thhf0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[42].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[42];
   status |= cons00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[43].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[43];
   status |= sat0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[44].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[44];
   status |= omegc0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[45].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[45];
   status |= mul00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[49].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[49];
   status |= ga00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[50].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[50];
   status |= sat0_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[26].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[26];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 2;
   acmas0000in_(&n, RP100, IP100, PS100);
   n = 1;
   acmas0000in_(&n, RP17, IP17, PS17);
   sitf.structuralInfo  = &SUBSTRUC[55].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[55];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[56].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[56];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[57].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[57];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[72].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[72];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[73].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[73];
   status |= thgcv00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[74].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[74];
   status |= thgcv00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 1;
   {
      acmctfref1in_(&n, RP88, IP88, TP88, PS88, &v[827], &v[828], &v[221]
                  , &v[222], &v[223], &v[830], &v[832], &v[855]);
   }
   sitf.structuralInfo  = &SUBSTRUC[21].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[21];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[75].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[75];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[20].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[20];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[22].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[22];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[23].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[23];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[76].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[76];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 1;
   {
      acmctfint2in_(&n, RP86, IP86, PS86, &v[716], &v[717], &v[718], &v[737]
                  , &v[739], &v[762]);
   }
   n = 1;
   {
      acmctftop2in_(&n, RP87, IP87, PS87, &v[725], &v[726], &v[727], &v[191]
                  , &v[192], &v[193], &v[777], &v[779], &v[808]);
   }
   n = 1;
   {
      acmctfint1in_(&n, RP89, IP89, PS89, &v[368], &v[369], &v[370], &v[871]
                  , &v[873], &v[896]);
   }
   n = 1;
   {
      acucpfref1in_(&n, RP92, IP92, TP92, PS92, &v[335], &v[336], &v[337]
                  , &v[986], &v[987], &v[994], &v[996], &v[1019]);
   }
   n = 1;
   {
      acucpfint1in_(&n, RP98, IP98, PS98, &v[988], &v[989], &v[990], &v[1073]
                  , &v[1075], &v[1098]);
   }
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 1;
   actevsb02in_(&n, RP40, IP40, TP40, PS40, &v[403]);
   sitf.structuralInfo  = &SUBSTRUC[77].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[77];
   status |= thmamx000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[79].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[79];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[80].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[80];
   status |= thmamx000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[82].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[82];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[83].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[83];
   status |= thmamx000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[85].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[85];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[86].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[86];
   status |= thmamx000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[88].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[88];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   n = 1;
   {
      acucpfend1in_(&n, RP91, IP91, PS91, &v[923], &v[924], &v[925], &v[270]
                  , &v[271], &v[272], &v[932], &v[934], &v[963]);
   }
   sitf.structuralInfo  = &SUBSTRUC[89].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[89];
   status |= thmasink00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[78].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[78];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[90].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[90];
   status |= thmamx000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[92].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[92];
   status |= ssink_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[81].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[81];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[84].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[84];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[87].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[87];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[39].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[39];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[91].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[91];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[97].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[97];
   status |= thmasink00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[93].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[93];
   status |= thmafs00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[94].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[94];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[95].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[95];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[96].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[96];
   status |= thmags00_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[32].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[32];
   status |= tpfgs010_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_in(&sitf);
   if(status & AME_MODEL_FATAL) goto _amefunc_init_end;

   /* Assign continuous state variables initialized by submodels */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         y[idxState] = v[GcontStateVarNum[idxState]];
      }
   }
#endif

   /* Assign discrete state initialized by submodels */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         Z[idxState] = v[GdiscStateVarNum[idxState]];
      }
   }
#endif

_amefunc_init_end:
   if(status & AME_MODEL_FATAL) AmeExit(1);
}

static void localFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int *flag)
{
   int sflag, oflag, n, panic, i=0;
   int *oldflag, *newflag;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *dbk_wk = amesys->pModel->dbk_wk;
   AMEModelStatus status = AME_MODEL_OK;

#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, &sflag, v, dot};

#if(AME_HAS_ENABLED_SUBMODEL == 1)
   memset(dot,0,AME_NBOF_SOLVER_STATES*sizeof(double));
#elif (AME_NBOF_EXPLICIT_STATE == 0)
   dot[0] = 0.0;
#endif

#else
   double dot[AME_NBOF_SOLVER_STATES];
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, &sflag, v, dot};

   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_SOLVER_STATES*sizeof(double));
#endif

   SetGlobalSystem(amesys);

   (void)n;

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif

   /* Record old value of flag (oflag) and set
      flag value for use in submodels (sflag).
      Also get addresses of main discontinuity flags. */

   oflag = *flag;
   sflag = *flag;

   if(amesys->first_call)
   {
      GetFlagAddresses(&amesys->oldflag, &amesys->newflag);
   }
   oldflag = amesys->oldflag;
   newflag = amesys->newflag;

   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

   panic = 0;
   getredstep();

   if(isstabrun_())
   {
      simOptGetFixedTime(amesys->simVOptions, &t);
      sitf.t = t;
   }
   else if(*flag == 2)
   {
      /* Record current simulation time for message passing. */

      SetSimTime(t);
   }
   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */
      t = getstarttime_();
      sitf.t = t;
   }
   /* Assign the state variables y[] calculated by the integrator
      to the appropriate variables v[]. */

   /* Assign continuous state variables calculated by the integrator */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif

   /* Assign the interface input variables to the appropriate variable v(). */
#if(AME_NBOF_INPUTS > 0)
   {
      int idxInput;
      for(idxInput = 0; idxInput < AME_NBOF_INPUTS; idxInput++) {
         v[GInputVarNum[idxInput]] = input[idxInput];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
  /* The following call ensures that lsoda does not integrate past
      time amesys->t_end_of_time_slice. This does not matter in a standard AMESim run but is
      very important with cosimulation. */

#ifdef AME_COSIM
   *oldflag = *newflag = sflag;
   discInput(&amesys->t_end_of_time_slice);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag,&sflag,&oflag,&panic,"_TunableParam",1);
#endif

#else
   if(*flag == 5)
   {
      DPerturbIfNecessary(amesys, flag);
   }

#ifdef AME_COSIM
   *oldflag = *newflag = sflag;
   discInput(&amesys->t_end_of_time_slice);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag,&sflag,&oflag,&panic,"_TunableParam",1);
#endif

#endif

   /* Call submodel calculation subroutine in the order
      that ensures the input requirements of each submodel
      are satisfied. */

#if (NB_REAL_TUNABLE_PARAM > 0) || (NB_INT_TUNABLE_PARAM > 0)
   if(*flag == 0)
   {
      int idxParam;
#if (NB_REAL_TUNABLE_PARAM > 0)
      for(idxParam = 0; idxParam < NB_REAL_TUNABLE_PARAM; idxParam++) {
         v[GRealTunableParam[idxParam][1]] = amesys->pModel->realParamArray[GRealTunableParam[idxParam][0]];
      }
#endif
#if(NB_INT_TUNABLE_PARAM > 0)
      for(idxParam = 0; idxParam < NB_INT_TUNABLE_PARAM; idxParam++) {
         v[GIntTunableParam[idxParam][1]] = amesys->pModel->integerParamArray[GIntTunableParam[idxParam][0]];
      }
#endif
   }
#endif


   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[0].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[0];
      status |= rstat_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "RSTAT", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[1].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[1];
      status |= tpf_fp01_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPF_FP01", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[2].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[2];
      status |= thsd00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THSD00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[3].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[3];
      status |= thsd00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THSD00", 2);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   acmctf0_(&n, &v[704], &v[705], &v[706], &v[707], &v[708], &v[709], &v[710]
          , &v[711], &v[712], &v[713], RP85, IP85, TP85, PS85);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMCTF0",1);
   n = 1;
   *oldflag = *newflag = sflag;
   acucpf0_(&n, &v[911], &v[912], &v[913], &v[914], &v[915], &v[916], &v[917]
          , &v[918], &v[919], &v[920], RP90, IP90, TP90, PS90);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACUCPF0",1);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[6].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[6];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[7].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[7];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[12].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[12];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 3);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[13].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[13];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 4);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[14].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[14];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 5);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   v[111] = acmas0000_macro2_(&n, &v[104], RP17, IP17, PS17);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 1);
   n = 1;
   *oldflag = *newflag = sflag;
   v[112] = acmas0000_macro3_(&n, &v[102], RP17, IP17, PS17);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 1);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[16].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[16];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 6);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[17].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[17];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 7);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[18].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[18];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 8);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[19].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[19];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 9);
   }
   {
      v[196] = v[70];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[197] = v[71];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[226] = v[91];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[227] = v[92];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[275] = v[264];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[276] = v[265];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[304] = v[140];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[305] = v[141];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[25].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[25];
      status |= ga00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "GA00", 1);
   }
   {
      v[410] = v[111];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[411] = v[112];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[27].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[27];
      status |= ga00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "GA00", 3);
   }
   {
      v[479] = v[395];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[480] = v[396];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   v[622] = v[410] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[825] = v[410] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[826] = v[411] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[630] = v[825] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[721] = v[825] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[722] = v[826] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[723] = acmctfint1_y4_(&n, &v[827], RP89, IP89, PS89, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMCTFINT1", 1);
   v[724] = v[828] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      v[330] = v[383];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[331] = v[384];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[930] = acucpfint1_abs4_(&n, &v[986], RP98, IP98, PS98, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACUCPFINT1", 1);
   v[931] = v[987] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   n = 2;
   *oldflag = *newflag = sflag;
   v[980] = acmas0000_macro2_(&n, &v[129], RP100, IP100, PS100);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 2);
   n = 2;
   *oldflag = *newflag = sflag;
   v[981] = acmas0000_macro3_(&n, &v[131], RP100, IP100, PS100);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 2);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[42].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[42];
      status |= cons00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "CONS00", 10);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[43].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[43];
      status |= sat0_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "SAT0", 2);
   }
   {
      v[85] = v[83];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   v[110] = acmas0000_macro1_(&n, &v[106], &v[111], &v[112], &v[113], &v[114], RP17, IP17
                            , PS17);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 1);
   {
      v[409] = v[110];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[26].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[26];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 4);
   }
   {
      v[406] = v[412]*v[422];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   v[658] = v[721] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[732] = v[721] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[733] = v[722] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[734] = acmctfint2_y5_(&n, &v[723], RP86, IP86, PS86, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMCTFINT2", 1);
   v[735] = v[724] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[686] = v[732] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[574] = v[980] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[984] = v[980] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[985] = v[981] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[566] = v[984] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[928] = v[984] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[929] = v[985] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   n = 2;
   *oldflag = *newflag = sflag;
   v[979] = acmas0000_macro1_(&n, &v[133], &v[980], &v[981], &v[1123], &v[1124], RP100, IP100
                            , PS100);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 2);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[49].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[49];
      status |= ga00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "GA00", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[50].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[50];
      status |= sat0_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "SAT0", 1);
   }
   v[598] = v[928] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   n = 2;
   *oldflag = *newflag = sflag;
   v[978] = acmas0000_macro0_(&n, &v[131], &v[129], &v[127], &v[1123], RP100, IP100, PS100);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 2);
   n = 1;
   *oldflag = *newflag = sflag;
   v[109] = acmas0000_macro0_(&n, &v[102], &v[104], &v[108], &v[113], RP17, IP17, PS17);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMAS0000", 1);
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[26].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[26];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 4);
      }
   }
   {
      v[408] = v[109];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   v[823] = v[408] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[719] = v[823] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[982] = v[978] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[926] = v[982] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   if(isvisible_())
   {
      n = 2;
      *oldflag = *newflag = sflag;
      acmas0000_(&n, &v[131], &v[129], &v[133], &v[127], &v[978], &v[979], &v[980]
               , &v[981], &v[1123], &v[1124], RP100, IP100, PS100);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMAS0000",2);
   }
   if(isvisible_())
   {
      n = 1;
      *oldflag = *newflag = sflag;
      acmas0000_(&n, &v[102], &v[104], &v[106], &v[108], &v[109], &v[110], &v[111]
               , &v[112], &v[113], &v[114], RP17, IP17, PS17);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMAS0000",1);
   }
   v[730] = v[719] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[52].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[52];
      status |= tpfp002_macro_com1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[53].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[53];
      status |= tpfp000_macro_cnum1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP000", 1);
   }
   {
      v[93] = v[117];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[94] = v[118];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[95] = v[119];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[54].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[54];
      status |= tpfp001_macro_com2(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[20].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[20];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[20].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[20];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[21].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[21];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[21].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[21];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[22].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[22];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 3);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[22].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[22];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 3);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[58].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[58];
      status |= tpfp002_macro_com1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[58].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[58];
      status |= tpfp002_macro_dm2(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_macro_rho1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_macro_cnum1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_macro_tempc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   {
      v[360] = v[353];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_macro_rho3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_macro_cnum3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[60].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[60];
      status |= tpfrfl000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFRFL000", 1);
   }
   {
      v[371] = -v[358];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[372] = -v[359];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   v[299] = v[385] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[300] = v[386] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[62].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[62];
      status |= tpfphe0001_macro_com1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[62].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[62];
      status |= tpfphe0001_macro_dm3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[62].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[62];
      status |= tpfphe0001_macro_t3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[63].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[63];
      status |= tpfphe0001_macro_com1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[63].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[63];
      status |= tpfphe0001_macro_dm3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[63].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[63];
      status |= tpfphe0001_macro_t3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[64].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[64];
      status |= tpfcvint01_macro_com3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[64].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[64];
      status |= tpfcvint01_macro_t1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[65].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[65];
      status |= tpfcvint01_macro_com3(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[65].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[65];
      status |= tpfcvint01_macro_t1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 2);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[729] = acmctfint2_dm4_(&n, &v[728], &v[725], &v[726], &v[727], &v[737], &v[739], RP86
                             , IP86, PS86, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMCTFINT2", 1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[352] = acmctfref1_dm3_(&n, &v[351], &v[353], &v[354], &v[355], &v[830], &v[832], RP88
                             , IP88, TP88, PS88, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMCTFREF1", 1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[715] = acmctfint1_dm5_(&n, &v[714], &v[716], &v[717], &v[718], &v[871], &v[873], RP89
                             , IP89, PS89, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACMCTFINT1", 1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[992] = acucpfref1_dm5_(&n, &v[991], &v[988], &v[989], &v[990], &v[994], &v[996], RP92
                             , IP92, TP92, PS92, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACUCPFREF1", 1);
   {
      v[542] = v[510];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[548] = v[510];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[544] = v[510];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[546] = v[526];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[556] = v[526];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[540] = v[526];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[471] = v[441];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[524] = v[441];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[430] = v[441];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[432] = v[456];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[503] = v[456];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[434] = v[456];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[39].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[39];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 6);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[39].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[39];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 6);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      int izero = 0;
      v[922] = acucpfint1_dm5_(&n, &v[921], &v[923], &v[924], &v[925], &v[1073], &v[1075], RP98
                             , IP98, PS98, &izero);
   }  /* DBK macro end. */
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "ACUCPFINT1", 1);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[70].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[70];
      status |= tpfpucompvd0000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPUCOMPVD0000", 1);
   }
   {
      v[143] = -v[61];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[71].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[71];
      status |= tpfpin00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPIN00", 1);
   }
   {
      v[89] = -v[96];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[90] = -v[97];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[224] = v[89];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[225] = v[90];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[273] = v[262];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[274] = v[263];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[59].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[59];
      status |= tpfsch00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFSCH00", 1);
   }
   v[301] = v[387] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[73].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[73];
      status |= thgcv00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THGCV00", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[74].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[74];
      status |= thgcv00_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THGCV00", 2);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMCTFREF1",1);
   v[720] = v[824] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[21].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[21];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[23].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[23];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 4);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[23].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[23];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 4);
   }
   v[731] = v[720] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[52].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[52];
      status |= tpfp002_macro_dm2(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[54].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[54];
      status |= tpfp001_macro_dm1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[20].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[20];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 1);
   }
   {
      v[194] = v[68];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[195] = v[69];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[22].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[22];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 3);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[23].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[23];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 4);
   }
   {
      v[302] = v[138];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[303] = v[139];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   v[388] = v[302] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[389] = v[303] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[62].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[62];
      status |= tpfphe0001_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[63].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[63];
      status |= tpfphe0001_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFPHE0001", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[32].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[32];
      status |= tpfgs010_macro_p1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 5);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[32].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[32];
      status |= tpfgs010_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 5);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[64].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[64];
      status |= tpfcvint01_macro_dm1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[65].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[65];
      status |= tpfcvint01_macro_dm1(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 2);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMCTFINT2",1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMCTFTOP2",1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACMCTFINT1",1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACUCPFREF1",1);
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACUCPFINT1",1);
   v[927] = v[983] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[52].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[52];
      status |= tpfp002_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[53].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[53];
      status |= tpfp000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP000", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[54].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[54];
      status |= tpfp001_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP001", 1);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACTEVSB02",1);
   v[393] = -v[381] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   v[394] = -v[382] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   {
      v[477] = v[393];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[478] = v[394];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[77].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[77];
      status |= thmamx000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAMX000", 1);
   }
   {
      v[582] = v[568];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[583] = v[569];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[584] = v[570];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[585] = v[571];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[78].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[78];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 5);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[80].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[80];
      status |= thmamx000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAMX000", 3);
   }
   {
      v[638] = v[624];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[639] = v[625];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[640] = v[626];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[641] = v[627];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[81].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[81];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 7);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[83].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[83];
      status |= thmamx000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAMX000", 4);
   }
   {
      v[666] = v[652];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[667] = v[653];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[668] = v[654];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[669] = v[655];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[84].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[84];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 8);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[86].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[86];
      status |= thmamx000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAMX000", 5);
   }
   {
      v[258] = v[680];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[259] = v[681];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[260] = v[682];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[261] = v[683];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[87].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[87];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 9);
   }
   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"ACUCPFEND1",1);
   {
      v[328] = v[381];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[329] = v[382];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[58].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[58];
      status |= tpfp002_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFP002", 2);
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[78].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[78];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 5);
      }
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[90].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[90];
      status |= thmamx000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAMX000", 2);
   }
   {
      v[55] = v[600];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[56] = v[601];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[57] = v[602];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[58] = v[603];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[91].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[91];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 6);
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[81].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[81];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 7);
      }
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[84].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[84];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 8);
      }
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[87].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[87];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 9);
      }
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[39].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[39];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 6);
   }
   {
      v[10] = v[55];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[11] = v[56];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[12] = v[57];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[13] = v[58];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[93].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[93];
      status |= thmafs00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAFS00", 1);
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[91].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[91];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 6);
      }
   }
   {
      v[4] = v[10];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[5] = v[11];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[6] = v[12];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[7] = v[13];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[94].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[94];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 1);
   }
   {
      v[23] = v[4];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[24] = v[5];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[25] = v[6];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[26] = v[7];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[95].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[95];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 2);
   }
   {
      v[38] = v[23];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[39] = v[24];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[40] = v[25];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      v[41] = v[26];
      AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[96].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[96];
      status |= thmags00_macro_sig(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 3);
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[93].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[93];
         status |= thmafs00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAFS00", 1);
      }
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[94].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[94];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 1);
      }
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[95].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[95];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 2);
      }
   }
   {
      if(isvisible_())
      {
         *oldflag = *newflag = sflag;
         sitf.structuralInfo  = &SUBSTRUC[96].STLI;
         sitf.simulationInfo = &amesys->pModel->subArray[96];
         status |= thmags00_calc(&sitf);
         AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THMAGS00", 3);
      }
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[32].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[32];
      status |= tpfgs010_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFGS010", 5);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[64].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[64];
      status |= tpfcvint01_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[65].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[65];
      status |= tpfcvint01_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "TPFCVINT01", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[66].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[66];
      status |= thc000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THC000", 1);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[67].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[67];
      status |= thc000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THC000", 2);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[68].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[68];
      status |= thc000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THC000", 3);
   }
   {
      *oldflag = *newflag = sflag;
      sitf.structuralInfo  = &SUBSTRUC[69].STLI;
      sitf.simulationInfo = &amesys->pModel->subArray[69];
      status |= thc000_calc(&sitf);
      AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag, &sflag, &oflag, &panic, "THC000", 4);
   }


   /* Set interface outputs here. */
#if(AME_NBOF_OUTPUTS > 0)
   {
      int idxOutput;
      for(idxOutput = 0; idxOutput < AME_NBOF_OUTPUTS; idxOutput++) {
         output[idxOutput] = v[GOutputVarNum[idxOutput]];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
   applyStateStatus(dot,AME_NBOF_SOLVER_STATES);
#else
#if( AME_NBOF_EXPLICIT_STATE > 0)
   applyStateStatus(dot,AME_NBOF_EXPLICIT_STATE);

   for(i=0;i<AME_NBOF_EXPLICIT_STATE;i++)
   {
      delta[i] = dot[i] - yprime[i];
   }
#endif
   for(i=AME_NBOF_EXPLICIT_STATE;i<(AME_NBOF_EXPLICIT_STATE + AME_NBOF_IMPLICIT_STATE_DECLARED);i++)
   {
      delta[i] = dot[i];
   }
#endif

   if(*flag == 0)
   {
      /* It is an initialization call and the user
         is permitted to change the state variables
         and discrete variables. */
      updateStatesFromModel(amesys, y, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

#if( AME_NBOF_DISCRETE_STATE > 0)
   if(is_sample_time()) {
      /* Change discrete variables */
      updateStatesFromModel(amesys, y, AME_DISCRETE_STATE);
   }
#endif

   UpFECount(amesys);

   amesys->first_call = 0;
   
   if(status & AME_MODEL_FATAL) {
      AmeExit(1);
   }
}

static AMEModelStatus localJFuncEval_0(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[62] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_calc(&sitf);
   v[143] = -v[61];
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_dm2(&sitf);
   v[194] = v[68];
   v[195] = v[69];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_1(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[63] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_calc(&sitf);
   v[143] = -v[61];
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_dm2(&sitf);
   v[194] = v[68];
   v[195] = v[69];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_2(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[117] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_macro_cnum1(&sitf);
   v[93] = v[117];
   v[95] = v[119];
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_t1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_calc(&sitf);
   v[89] = -v[96];
   v[90] = -v[97];
   v[224] = v[89];
   v[225] = v[90];
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_dm1(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_3(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[118] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_macro_cnum1(&sitf);
   v[94] = v[118];
   v[95] = v[119];
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_t1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_calc(&sitf);
   v[89] = -v[96];
   v[90] = -v[97];
   v[224] = v[89];
   v[225] = v[90];
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_dm1(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_4(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[144] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_com2(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_calc(&sitf);
   v[143] = -v[61];
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_dm1(&sitf);
   v[302] = v[138];
   v[303] = v[139];
   v[388] = v[302] /* Duplicate variable. */;
   v[389] = v[303] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_5(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[145] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_com2(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_calc(&sitf);
   v[143] = -v[61];
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_dm1(&sitf);
   v[302] = v[138];
   v[303] = v[139];
   v[388] = v[302] /* Duplicate variable. */;
   v[389] = v[303] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_6(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[191] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[20].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[20];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_dm2(&sitf);
   v[194] = v[68];
   v[195] = v[69];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_7(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[192] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[20].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[20];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_macro_dm2(&sitf);
   v[194] = v[68];
   v[195] = v[69];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_8(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[221] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[21].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[21];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_calc(&sitf);
   v[89] = -v[96];
   v[90] = -v[97];
   v[224] = v[89];
   v[225] = v[90];
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_9(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[222] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[21].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[21];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_calc(&sitf);
   v[89] = -v[96];
   v[90] = -v[97];
   v[224] = v[89];
   v[225] = v[90];
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_10(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[270] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[22].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[22];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_t3(&sitf);
   v[273] = v[262];
   v[274] = v[263];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_11(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[271] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[22].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[22];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_t3(&sitf);
   v[273] = v[262];
   v[274] = v[263];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_12(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[332] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_dm2(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[39].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[39];
   status |= tpfgs010_macro_p1(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_13(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[333] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_dm2(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[39].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[39];
   status |= tpfgs010_macro_p1(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_14(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[335] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_dm2(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_15(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[336] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_macro_dm2(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_16(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[353] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_rho1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_cnum1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_tempc(&sitf);
   v[360] = v[353];
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_rho3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_cnum3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_calc(&sitf);
   v[371] = -v[358];
   v[372] = -v[359];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[352] = acmctfref1_dm3_(&n, &v[351], &v[353], &v[354], &v[355], &v[830], &v[832], RP88
                             , IP88, TP88, PS88, &izero);
   }  /* DBK macro end. */
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_17(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[363] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_rho1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_cnum1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_tempc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_rho3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_macro_cnum3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_calc(&sitf);
   v[371] = -v[358];
   v[372] = -v[359];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[352] = acmctfref1_dm3_(&n, &v[351], &v[353], &v[354], &v[355], &v[830], &v[832], RP88
                             , IP88, TP88, PS88, &izero);
   }  /* DBK macro end. */
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_18(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[368] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_calc(&sitf);
   v[371] = -v[358];
   v[372] = -v[359];
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_19(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[369] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_calc(&sitf);
   v[371] = -v[358];
   v[372] = -v[359];
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_20(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[385] = y[col];
   v[299] = v[385] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_dm3(&sitf);
   v[301] = v[387] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[23].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[23];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_dm1(&sitf);
   v[302] = v[138];
   v[303] = v[139];
   v[388] = v[302] /* Duplicate variable. */;
   v[389] = v[303] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_21(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[386] = y[col];
   v[300] = v[386] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_dm3(&sitf);
   v[301] = v[387] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[23].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[23];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_macro_dm1(&sitf);
   v[302] = v[138];
   v[303] = v[139];
   v[388] = v[302] /* Duplicate variable. */;
   v[389] = v[303] /* Duplicate variable. */;
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_calc(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_22(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[403] = y[col];
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_23(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[438] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_t3(&sitf);
   v[273] = v[262];
   v[274] = v[263];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_24(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[439] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_com1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_dm3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_macro_t3(&sitf);
   v[273] = v[262];
   v[274] = v[263];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_25(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[441] = y[col];
   v[524] = v[441];
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_26(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[456] = y[col];
   v[503] = v[456];
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_27(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[474] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_com3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[32].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[32];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_dm1(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_28(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[475] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_com3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[32].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[32];
   status |= tpfgs010_macro_p1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_dm1(&sitf);
   n = 1;
   actevsb02_(&n, &v[381], &v[382], &v[378], &v[379], &v[380], &v[385], &v[386]
            , &v[387], &v[302], &v[303], &v[390], &v[391], &v[392], &v[397], &v[398]
            , &v[399], &v[400], &v[401], &v[402], &v[403], &dot[22], RP40, IP40
            , TP40, PS40, &sflag);
   v[393] = -v[381] /* Duplicate variable. */;
   v[394] = -v[382] /* Duplicate variable. */;
   v[477] = v[393];
   v[478] = v[394];
   v[328] = v[381];
   v[329] = v[382];
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_29(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[507] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_com3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_t1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_dm1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_dm1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_30(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[508] = y[col];
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_com3(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_t1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_macro_dm1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_macro_dm1(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_31(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[510] = y[col];
   v[548] = v[510];
   sitf.structuralInfo  = &SUBSTRUC[73].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[73];
   status |= thgcv00_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_32(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[526] = y[col];
   v[556] = v[526];
   sitf.structuralInfo  = &SUBSTRUC[74].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[74];
   status |= thgcv00_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_calc(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_calc(&sitf);
   return status;
}


static AMEModelStatus localJFuncEval_33(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[716] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[715] = acmctfint1_dm5_(&n, &v[714], &v[716], &v[717], &v[718], &v[871], &v[873], RP89
                             , IP89, PS89, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_34(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[717] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[715] = acmctfint1_dm5_(&n, &v[714], &v[716], &v[717], &v[718], &v[871], &v[873], RP89
                             , IP89, PS89, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_35(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[725] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[729] = acmctfint2_dm4_(&n, &v[728], &v[725], &v[726], &v[727], &v[737], &v[739], RP86
                             , IP86, PS86, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_36(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[726] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[729] = acmctfint2_dm4_(&n, &v[728], &v[725], &v[726], &v[727], &v[737], &v[739], RP86
                             , IP86, PS86, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_37(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[737 + col - 37] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[729] = acmctfint2_dm4_(&n, &v[728], &v[725], &v[726], &v[727], &v[737], &v[739], RP86
                             , IP86, PS86, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_39(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[739 + col - 39] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[729] = acmctfint2_dm4_(&n, &v[728], &v[725], &v[726], &v[727], &v[737], &v[739], RP86
                             , IP86, PS86, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_41(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[762 + col - 41] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   return status;
}


static AMEModelStatus localJFuncEval_44(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[777 + col - 44] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_46(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[779 + col - 46] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_48(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[808 + col - 48] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   return status;
}


static AMEModelStatus localJFuncEval_51(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[830 + col - 51] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[352] = acmctfref1_dm3_(&n, &v[351], &v[353], &v[354], &v[355], &v[830], &v[832], RP88
                             , IP88, TP88, PS88, &izero);
   }  /* DBK macro end. */
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_53(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[832 + col - 53] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[352] = acmctfref1_dm3_(&n, &v[351], &v[353], &v[354], &v[355], &v[830], &v[832], RP88
                             , IP88, TP88, PS88, &izero);
   }  /* DBK macro end. */
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_calc(&sitf);
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_55(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[855 + col - 55] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctfref1_(&n, &v[408], &v[409], &v[410], &v[411], &v[620], &v[621], &v[623]
                , &v[351], &v[352], &v[353], &v[354], &v[355], &v[824], &v[221], &dot[8]
                , &v[222], &dot[9], &v[224], &v[225], &v[829], &v[830], &dot[51], &v[832]
                , &dot[53], &v[834], &v[837], &v[840], &v[843], &v[846], &v[849], &v[852]
                , &v[855], &dot[55], &v[858], &v[861], &v[864], &v[867], RP88, IP88
                , TP88, PS88);
   }
   v[720] = v[824] /* Duplicate variable. */;
   v[731] = v[720] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctftop2_(&n, &v[730], &v[731], &v[732], &v[733], &v[734], &v[735], &v[725]
                , &dot[35], &v[726], &dot[36], &v[728], &v[729], &v[684], &v[685], &v[687]
                , &v[191], &dot[6], &v[192], &dot[7], &v[194], &v[195], &v[777], &dot[44]
                , &v[779], &dot[46], &v[781], &v[782], &v[783], &v[784], &v[785], &v[786]
                , &v[787], &v[790], &v[793], &v[796], &v[799], &v[802], &v[805], &v[808]
                , &dot[48], &v[811], &v[814], &v[817], &v[820], RP87, IP87, PS87);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_58(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[871 + col - 58] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[715] = acmctfint1_dm5_(&n, &v[714], &v[716], &v[717], &v[718], &v[871], &v[873], RP89
                             , IP89, PS89, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_60(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[873 + col - 60] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[715] = acmctfint1_dm5_(&n, &v[714], &v[716], &v[717], &v[718], &v[871], &v[873], RP89
                             , IP89, PS89, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acmctfint2_(&n, &v[716], &dot[33], &v[717], &dot[34], &v[714], &v[715], &v[719]
                , &v[720], &v[721], &v[722], &v[723], &v[724], &v[656], &v[657], &v[659]
                , &v[728], &v[729], &v[725], &v[726], &v[727], &v[734], &v[736], &v[737]
                , &dot[37], &v[739], &dot[39], &v[741], &v[744], &v[747], &v[750], &v[753]
                , &v[756], &v[759], &v[762], &dot[41], &v[765], &v[768], &v[771], &v[774]
                , RP86, IP86, PS86);
   }
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_62(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[896 + col - 62] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acmctfint1_(&n, &v[823], &v[824], &v[825], &v[826], &v[827], &v[828], &v[368]
                , &dot[18], &v[369], &dot[19], &v[371], &v[372], &v[628], &v[629], &v[631]
                , &v[723], &v[714], &v[715], &v[716], &v[717], &v[718], &v[870], &v[871]
                , &dot[58], &v[873], &dot[60], &v[875], &v[878], &v[881], &v[884], &v[887]
                , &v[890], &v[893], &v[896], &dot[62], &v[899], &v[902], &v[905], &v[908]
                , RP89, IP89, PS89);
   }
   return status;
}


static AMEModelStatus localJFuncEval_65(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[923] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[922] = acucpfint1_dm5_(&n, &v[921], &v[923], &v[924], &v[925], &v[1073], &v[1075], RP98
                             , IP98, PS98, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_66(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[924] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[922] = acucpfint1_dm5_(&n, &v[921], &v[923], &v[924], &v[925], &v[1073], &v[1075], RP98
                             , IP98, PS98, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_67(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[932 + col - 67] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_69(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[934 + col - 69] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_71(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[963 + col - 71] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_74(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[988] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[992] = acucpfref1_dm5_(&n, &v[991], &v[988], &v[989], &v[990], &v[994], &v[996], RP92
                             , IP92, TP92, PS92, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_75(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[989] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[992] = acucpfref1_dm5_(&n, &v[991], &v[988], &v[989], &v[990], &v[994], &v[996], RP92
                             , IP92, TP92, PS92, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_76(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[994 + col - 76] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[992] = acucpfref1_dm5_(&n, &v[991], &v[988], &v[989], &v[990], &v[994], &v[996], RP92
                             , IP92, TP92, PS92, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_78(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[996 + col - 78] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[992] = acucpfref1_dm5_(&n, &v[991], &v[988], &v[989], &v[990], &v[994], &v[996], RP92
                             , IP92, TP92, PS92, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_80(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[1019 + col - 80] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acucpfref1_(&n, &v[978], &v[979], &v[980], &v[981], &v[335], &dot[14], &v[336]
                , &dot[15], &v[338], &v[339], &v[572], &v[573], &v[575], &v[983], &v[991]
                , &v[992], &v[988], &v[989], &v[990], &v[993], &v[994], &dot[76], &v[996]
                , &dot[78], &v[998], &v[1001], &v[1004], &v[1007], &v[1010], &v[1013], &v[1016]
                , &v[1019], &dot[80], &v[1022], &v[1025], &v[1028], &v[1031], RP92, IP92
                , TP92, PS92);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   v[927] = v[983] /* Duplicate variable. */;
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_83(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[1073 + col - 83] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[922] = acucpfint1_dm5_(&n, &v[921], &v[923], &v[924], &v[925], &v[1073], &v[1075], RP98
                             , IP98, PS98, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_85(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[1075 + col - 85] = y[col];
   n = 1;
   {  /* DBK specific start. */
      int izero = 0;
      v[922] = acucpfint1_dm5_(&n, &v[921], &v[923], &v[924], &v[925], &v[1073], &v[1075], RP98
                             , IP98, PS98, &izero);
   }  /* DBK macro end. */
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   n = 1;
   {  /* DBK specific start. */
      acucpfend1_(&n, &v[923], &dot[65], &v[924], &dot[66], &v[921], &v[922], &v[926]
                , &v[927], &v[928], &v[929], &v[930], &v[931], &v[596], &v[597], &v[599]
                , &v[270], &dot[10], &v[271], &dot[11], &v[273], &v[274], &v[932], &dot[67]
                , &v[934], &dot[69], &v[936], &v[937], &v[938], &v[939], &v[940], &v[941]
                , &v[942], &v[945], &v[948], &v[951], &v[954], &v[957], &v[960], &v[963]
                , &dot[71], &v[966], &v[969], &v[972], &v[975], RP91, IP91, PS91
                , &sflag);
   }
   return status;
}


static AMEModelStatus localJFuncEval_87(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;
   S_AMESubIntf sitf = { amesys, NULL, NULL, t, &sflag, v, dot };
   AMEModelStatus status = AME_MODEL_OK;

   (void)n;

   v[1098 + col - 87] = y[col];
   n = 1;
   {  /* DBK specific start. */
      acucpfint1_(&n, &v[988], &dot[74], &v[989], &dot[75], &v[991], &v[992], &v[982]
                , &v[983], &v[984], &v[985], &v[986], &v[987], &v[564], &v[565], &v[567]
                , &v[930], &v[921], &v[922], &v[923], &v[924], &v[925], &v[1072], &v[1073]
                , &dot[83], &v[1075], &dot[85], &v[1077], &v[1080], &v[1083], &v[1086], &v[1089]
                , &v[1092], &v[1095], &v[1098], &dot[87], &v[1101], &v[1104], &v[1107], &v[1110]
                , RP98, IP98, PS98);
   }
   return status;
}


static AMEModelStatus (*jfunc_table[])(AMESIMSYSTEM *, double, double *, double *, double *, double *, double *, int) = {
      localJFuncEval_0, localJFuncEval_1, localJFuncEval_2, localJFuncEval_3, localJFuncEval_4, localJFuncEval_5
      , localJFuncEval_6, localJFuncEval_7, localJFuncEval_8, localJFuncEval_9, localJFuncEval_10, localJFuncEval_11
      , localJFuncEval_12, localJFuncEval_13, localJFuncEval_14, localJFuncEval_15, localJFuncEval_16, localJFuncEval_17
      , localJFuncEval_18, localJFuncEval_19, localJFuncEval_20, localJFuncEval_21, localJFuncEval_22, localJFuncEval_23
      , localJFuncEval_24, localJFuncEval_25, localJFuncEval_26, localJFuncEval_27, localJFuncEval_28, localJFuncEval_29
      , localJFuncEval_30, localJFuncEval_31, localJFuncEval_32, localJFuncEval_33, localJFuncEval_34, localJFuncEval_35
      , localJFuncEval_36, localJFuncEval_37, localJFuncEval_37, localJFuncEval_39, localJFuncEval_39, localJFuncEval_41
      , localJFuncEval_41, localJFuncEval_41, localJFuncEval_44, localJFuncEval_44, localJFuncEval_46, localJFuncEval_46
      , localJFuncEval_48, localJFuncEval_48, localJFuncEval_48, localJFuncEval_51, localJFuncEval_51, localJFuncEval_53
      , localJFuncEval_53, localJFuncEval_55, localJFuncEval_55, localJFuncEval_55, localJFuncEval_58, localJFuncEval_58
      , localJFuncEval_60, localJFuncEval_60, localJFuncEval_62, localJFuncEval_62, localJFuncEval_62, localJFuncEval_65
      , localJFuncEval_66, localJFuncEval_67, localJFuncEval_67, localJFuncEval_69, localJFuncEval_69, localJFuncEval_71
      , localJFuncEval_71, localJFuncEval_71, localJFuncEval_74, localJFuncEval_75, localJFuncEval_76, localJFuncEval_76
      , localJFuncEval_78, localJFuncEval_78, localJFuncEval_80, localJFuncEval_80, localJFuncEval_80, localJFuncEval_83
      , localJFuncEval_83, localJFuncEval_85, localJFuncEval_85, localJFuncEval_87, localJFuncEval_87, localJFuncEval_87
};

static void localJFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int col)
{
   int sflag=1; /* Only one flag value is required. */
   int n=1, i=0;
   double *v = amesys->v;
   double *vcopy = amesys->vcopy;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   AMEModelStatus status = AME_MODEL_OK;
   
#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;

#else
   double dot[AME_NBOF_SOLVER_STATES];

   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_SOLVER_STATES*sizeof(double));
#endif

#if(AME_MODEL_ISEXPLICIT == 0)
   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif

   if(isstabrun_())
   {
      simOptGetFixedTime(amesys->simVOptions, &t);
   }
#endif

   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */

      t = getstarttime_();
   }

   /* Assign the state variables y[] calculated by the integrator
      to the appropriate variables v[] and right calls necessary
      for that state in a case of a switch. */


   status |= (*jfunc_table[col])(amesys, t, y, dot, v, yprime, delta, col);


   UpFECount(amesys);
   
   if(status & AME_MODEL_FATAL) {
      AmeExit(1);
   }
}

static void EndOfSimulation(AMESIMSYSTEM *amesys)
{
   int n=1;
   double *y = amesys->states;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   const double t = getfinaltime_();
   S_AMESubIntf sitf = {amesys, NULL, NULL, t, NULL, v, NULL};
   AMEModelStatus status = AME_MODEL_OK;
   

   (void)n;
   (void)status;

   sitf.structuralInfo  = &SUBSTRUC[69].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[69];
   status |= thc000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[68].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[68];
   status |= thc000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[67].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[67];
   status |= thc000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[66].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[66];
   status |= thc000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[65].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[65];
   status |= tpfcvint01_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[64].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[64];
   status |= tpfcvint01_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[32].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[32];
   status |= tpfgs010_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[96].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[96];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[95].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[95];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[94].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[94];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[93].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[93];
   status |= thmafs00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[97].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[97];
   status |= thmasink00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[91].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[91];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[39].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[39];
   status |= tpfgs010_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[87].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[87];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[84].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[84];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[81].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[81];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[92].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[92];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[90].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[90];
   status |= thmamx000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[78].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[78];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[58].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[58];
   status |= tpfp002_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[89].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[89];
   status |= thmasink00_end(&sitf);
   n = 1;
   {
      acucpfend1end_(&n, RP91, IP91, PS91, &v[923], &v[924], &v[925], &v[270]
                   , &v[271], &v[272], &v[932], &v[934], &v[963]);
   }
   sitf.structuralInfo  = &SUBSTRUC[88].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[88];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[86].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[86];
   status |= thmamx000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[85].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[85];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[83].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[83];
   status |= thmamx000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[82].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[82];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[80].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[80];
   status |= thmamx000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[79].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[79];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[77].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[77];
   status |= thmamx000_end(&sitf);
   n = 1;
   actevsb02end_(&n, RP40, IP40, TP40, PS40, &v[403]);
   sitf.structuralInfo  = &SUBSTRUC[54].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[54];
   status |= tpfp001_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[53].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[53];
   status |= tpfp000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[52].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[52];
   status |= tpfp002_end(&sitf);
   n = 1;
   {
      acucpfint1end_(&n, RP98, IP98, PS98, &v[988], &v[989], &v[990], &v[1073]
                   , &v[1075], &v[1098]);
   }
   n = 1;
   {
      acucpfref1end_(&n, RP92, IP92, TP92, PS92, &v[335], &v[336], &v[337]
                   , &v[986], &v[987], &v[994], &v[996], &v[1019]);
   }
   n = 1;
   {
      acmctfint1end_(&n, RP89, IP89, PS89, &v[368], &v[369], &v[370], &v[871]
                   , &v[873], &v[896]);
   }
   n = 1;
   {
      acmctftop2end_(&n, RP87, IP87, PS87, &v[725], &v[726], &v[727], &v[191]
                   , &v[192], &v[193], &v[777], &v[779], &v[808]);
   }
   n = 1;
   {
      acmctfint2end_(&n, RP86, IP86, PS86, &v[716], &v[717], &v[718], &v[737]
                   , &v[739], &v[762]);
   }
   sitf.structuralInfo  = &SUBSTRUC[76].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[76];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[63].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[63];
   status |= tpfphe0001_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[62].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[62];
   status |= tpfphe0001_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[23].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[23];
   status |= tpfgs010_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[22].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[22];
   status |= tpfgs010_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[20].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[20];
   status |= tpfgs010_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[75].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[75];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[21].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[21];
   status |= tpfgs010_end(&sitf);
   n = 1;
   {
      acmctfref1end_(&n, RP88, IP88, TP88, PS88, &v[827], &v[828], &v[221]
                   , &v[222], &v[223], &v[830], &v[832], &v[855]);
   }
   sitf.structuralInfo  = &SUBSTRUC[74].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[74];
   status |= thgcv00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[73].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[73];
   status |= thgcv00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[59].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[59];
   status |= tpfsch00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[72].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[72];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[71].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[71];
   status |= tpfpin00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[70].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[70];
   status |= tpfpucompvd0000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[60].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[60];
   status |= tpfrfl000_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[57].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[57];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[56].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[56];
   status |= ssink_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[55].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[55];
   status |= ssink_end(&sitf);
   n = 1;
   acmas0000end_(&n, RP17, IP17, PS17);
   n = 2;
   acmas0000end_(&n, RP100, IP100, PS100);
   sitf.structuralInfo  = &SUBSTRUC[26].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[26];
   status |= thmags00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[50].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[50];
   status |= sat0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[49].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[49];
   status |= ga00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[45].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[45];
   status |= mul00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[44].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[44];
   status |= omegc0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[43].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[43];
   status |= sat0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[42].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[42];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[36].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[36];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[35].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[35];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[34].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[34];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[33].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[33];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[31].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[31];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[30].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[30];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[29].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[29];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[28].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[28];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[27].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[27];
   status |= ga00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[25].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[25];
   status |= ga00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[24].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[24];
   status |= thhs0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[19].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[19];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[18].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[18];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[17].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[17];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[16].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[16];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[14].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[14];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[13].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[13];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[12].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[12];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[11].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[11];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[10].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[10];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[9].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[9];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[8].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[8];
   status |= thhf0_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[7].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[7];
   status |= cons00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[6].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[6];
   status |= cons00_end(&sitf);
   n = 1;
   acucpf0end_(&n, RP90, IP90, TP90, PS90);
   n = 1;
   acmctf0end_(&n, RP85, IP85, TP85, PS85);
   sitf.structuralInfo  = &SUBSTRUC[3].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[3];
   status |= thsd00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[2].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[2];
   status |= thsd00_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[1].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[1];
   status |= tpf_fp01_end(&sitf);
   sitf.structuralInfo  = &SUBSTRUC[0].STLI;
   sitf.simulationInfo = &amesys->pModel->subArray[0];
   status |= rstat_end(&sitf);
}

#endif /* (AME_FUNC_LOOP == 1) */


static void ameTerminate(AMESIMSYSTEM *amesys)
{
#ifdef AME_WRITE_RUNSTAT
   if(amesys->simOptions ) {
      bool statistics;
      SimOptIsStatisticsEnabled(amesys->simOptions, &statistics);
      if(statistics)
      {
         WriteRunStats(amesys);
      }
   }
#endif
#ifdef AME_PROCESS_TIME
   ProcessTime(2);
#endif

   /* Save state count, discontinuities and finalize the Performance Analyzer */
#ifdef AME_PERFORMANCE_ANALYZER
   if(!isfixedstepsolver_()){
      PerfAnalyzer_SaveStateCount (amesys);
      PerfAnalyzer_SaveDiscontinuities(amesys);
      PerfAnalyzer_Close(amesys);
   }
#endif

#ifdef AME_RESULT_FILE
   amesys->CloseResultFile(amesys);
#endif

   EndOfSimulation(amesys);
   AmeCallAtEnd(amesys->ameExitStatus);
   modelCleanStore(amesys->pModel);
}

#ifdef AME_EXPOSE_JACOBIAN
static int getPartialDerivatives(double *A, double *B, double *C, double *D)
{
   int res;
   AMESIMSYSTEM  *amesys = GetGlobalSystem();

   SPARSE_MATRIX *Amat, *Bmat, *Cmat, *Dmat;

#if(AME_MODEL_ISEXPLICIT == 1)
   if (amesys->tlast > TLAST_MIN)
      res = LDoLinearAnalysisOnDemand(amesys, amesys->numstates,
                                       amesys->tlast, amesys->states,
                                       &Amat, &Bmat, &Cmat, &Dmat);
#else
   if (amesys->tlast > TLAST_MIN)
      res = DDoLinearAnalysisOnDemand(amesys, amesys->neq,
                                       amesys->tlast,
                                       amesys->states, amesys->dotstates,
                                       &Amat, &Bmat, &Cmat, &Dmat);
#endif
   else
      res = 0;  /* failed: system probably not initialized */

   if(res != 0) {
      if(Amat) {
         GetMatAsDense(Amat,A);
      }
      if(Bmat) {
         GetMatAsDense(Bmat,B);
      }
      if(Cmat) {
         GetMatAsDense(Cmat,C);
      }
      if(Dmat) {
         GetMatAsDense(Dmat,D);
      }
      FreeSparseMatrix(Amat);
      FreeSparseMatrix(Bmat);
      FreeSparseMatrix(Cmat);
      FreeSparseMatrix(Dmat);
   }

   return res;
} /* getPartialDerivatives */

static int setLASettingsFromIO(int num_input_index, int num_output_index,
                              int *input_index, int *output_index, int *nbState)
{
   *nbState = AME_NBOF_EXPLICIT_STATE + AME_NBOF_IMPLICIT_STATE;

   return SetLADetailsFromIO(AME_NBOF_EXPLICIT_STATE, AME_NBOF_IMPLICIT_STATE,
                              AME_NBOF_INPUTS, AME_NBOF_OUTPUTS,
                              num_input_index, num_output_index, input_index, output_index,
                              GInputVarNum, GOutputVarNum, 0.0, 1.0, 1.0, 0.1);
}
#endif

/* ============================================================== */

static void ModelAmeExit(AMESIMSYSTEM *amesys, int status)
{
   /* Will be catch by the state machine */
   amesys->ameExitStatus = status;
   longjmp(amesys->jump_env, status);
}

/**************************************************************
*                                                             *
* Function load_subdata_tables reads data for lookuptables    *
* mostly/only used for realtime                               *
*                                                             *
* 0106429                                                     *
* Move the include outside of function. The include now       *
* contains one function per table and a function that calls   *
* them all. This reduces the risk that a compiler crashes due *
* to a huge function.                                         *
**************************************************************/
#ifdef AME_TABLES_IN_MEMORY
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.subdata.h"
#endif

static void load_subdata_tables(void)
{
#ifdef AME_TABLES_IN_MEMORY
   add_all_tables_to_memory();
#endif
}

/***********************************************************
   Purpose  :  Return Simcenter Amesim version used to generate the model C code
               It allows the client to update interface management for
               backward compatibility.
   Author	:  J.Andre
   Creation :  2016 - 09 - 05
   Inputs   :  None
   Outputs  :  Simcenter Amesim version
   Revision :
************************************************************/
static unsigned int AmesysGetVersion()
{
	/* Returned number indicates 10000* main verion + 100* SL version + minor */
   /* Eg. Rev15     (15.0.0)  => 150000 */
   /* Eg. Rev15SL1  (15.1.0)  => 150100 */
   /* Eg. Rev15.0.1 (15.0.1)  => 150001 */

   return AMEVERSION;
}

/***********************************************************
   Purpose  :  Return SoldTo ID which Simcenter Amesim model has been generated.
   Author	:  J.Andre
   Creation :  2017 - 02 - 13
   Inputs   :  None
   Outputs  :  SoldToID
   Revision :
************************************************************/
static const char* getSoldToID()
{
   return "For Internal Siemens Use Only";
}

#ifdef AME_INPUT_IN_MEMORY
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.globalparams.h"
#endif

/***********************************************************
   Purpose  : Load and evaluate model parameters from files
   Author   : J.Andre
   Created  : 2016 - 09 - 08
   Inputs   :
      amesys  : system
      errmsg  : error message
   Outputs  : Error code
   Revision :
************************************************************/
static AMESystemError loadModelParamFromDisk(AMESIMSYSTEM *amesys, AMESystemError *gpError,  AMESystemError *lpError, char *errmsg)
{
   AMESystemError ret;
   *gpError = AME_NO_ERROR;
   *lpError = AME_NO_ERROR;

   ret = AmeReadGPFile(amesys);

   if(ret == AME_NO_ERROR) {
      *gpError = AmeEvalGlobalParamList(amesys, 1, errmsg);
      *lpError = loadParameterFromFile(amesys->pModel, GetDataFileName(), errmsg);
   }
   return ret;
}

#ifdef AME_INPUT_IN_MEMORY

/***********************************************************
   Purpose    : Load and evaluate model parameters from memory
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  :
      amesys  : system
      errmsg  : error message
   Outputs	  : Parameter error code
   Revision   :
************************************************************/
static AMESystemError loadModelParamFromMemory(AMESIMSYSTEM *amesys, AMESystemError *gpError,  AMESystemError *lpError, char * errmsg)
{
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.data.h"

   ameAddGlobalParamsFromMemory(amesys,errmsg);

   if(amecheckversion(AMESIMRUNTIMEVERSION, __TIME__, __DATE__, NULL)) {
      amefprintf(stderr, "A problem with incompatible versions of the AMESim runtime library has been found.");
   }

   *gpError = AmeEvalGlobalParamList(amesys, 1, errmsg);
   *lpError = loadParameterFromDataTable(amesys->pModel, allparams, errmsg);

   return AME_NO_ERROR;
}

#endif

/***********************************************************
   Purpose    : Load and evaluate model parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  :
      amesys  : system
      errmsg  : error message
   Outputs	  : Parameter error code
   Revision   :
************************************************************/
static AMESystemError loadModelParameters(AMESIMSYSTEM *amesys)
{
   AMESystemError res = AME_PARAMETER_ERROR;
   char errmsg[PATH_MAX+128];
   AMESystemError ret_gp = AME_NO_ERROR;
   AMESystemError ret_lp = AME_NO_ERROR;

   errmsg[0] = '\0';

#ifdef AME_INPUT_IN_MEMORY
#ifdef AME_RT_CAN_READ_FILE
   res = loadModelParamFromDisk(amesys, &ret_gp, &ret_lp, errmsg);

   if (res != AME_NO_ERROR) {
      /* If the file is not there - we say nothing */
      if (res != AME_PARAM_FILE_OPEN_ERROR) {
         amefprintf(stderr,"%s",errmsg);
         amefprintf(stderr,"loadParameterFromFile> %s\n",errmsg);
         ClearGPs();
      }
   }
   else {
      amefprintf(stderr,"Using data from disk (%s)\n",GetDataFileName());
   }
#endif
   if(res != AME_NO_ERROR) {
      /* Read all from memory */
      res = loadModelParamFromMemory(amesys, &ret_gp, &ret_lp, errmsg);
      SetGlobalParamReadFile(0);
   }
#else
   /* Read all from disk */
   res = loadModelParamFromDisk(amesys, &ret_gp, &ret_lp, errmsg);
#endif

   if( (res != AME_NO_ERROR) || (ret_gp != AME_NO_ERROR) || (ret_lp != AME_NO_ERROR) ) {
      amefprintf(stderr,"%s",errmsg);

      if( (res != AME_NO_ERROR) || (ret_lp != AME_NO_ERROR) ) {
         res = AME_GLOBAL_PARAMETER_ERROR;
      }
   }
   return res;
}

static AMESystemError Input(AMESIMSYSTEM *amesys)
{
   int retval;

   /* Load data files for submodels */
   load_subdata_tables();

   /* Load parameters for submodels */
   retval = loadModelParameters(amesys);

   /* Ensure parameters seen by RT is initialized correctly */
#ifdef AME_MEMORY_ACCESS_RT_EXPORT
   RT_Get_Watch_Param(amesys);
#endif

   return retval;
}

static int ameSetOptions(AMESIMSYSTEM *amesys,
                         double tsaveinc,
                         double maxstepsize,
                         double tolerance,
                         int errorcontrol,
                         int writelevel,
                         int extradisconprint,
                         int runstats,
                         int theruntype,
                         int thesolvertype)
{
   SimOptSetVariableErrorType(amesys->simOptions, errorcontrol);
   SimOptSetVariableTol(amesys->simOptions, tolerance);
   SimOptSetDiscontinuityPrintoutEnabled(amesys->simOptions, extradisconprint);
   SimOptSetStatisticsEnabled(amesys->simOptions, runstats);
   SimOptSetCautiousSolverEnabled(amesys->simOptions, thesolvertype);
   simSetSimRunType(amesys->simOptions, theruntype);
   bool enabled = writelevel != 2 ? true : false;
   SimOptSetMonitorTimeEnabled(amesys->simOptions, enabled);
   SimOptSetTInc(amesys->simOptions, tsaveinc);
   SimOptSetVariableHMax(amesys->simOptions, maxstepsize);

   /* Copy sim option to share with libraries before to modify it */
   SimOptCopySimOptions(amesys->sharedSimOptions, amesys->simOptions);
   bool cautious_enabled;
   SimOptIsCautiousSolverEnabled(amesys->simOptions, &cautious_enabled);
   if(cautious_enabled) {
      /* It is the cautious option. The maximum time step
         should not exceed the print interval. */
      double tInc;
      SimOptGetTInc(amesys->simOptions, &tInc);
      setmaxstep_(&tInc);
   }

#if( AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE == 0 )
   if(maxstepsize > tsaveinc) {
      amefprintf(stderr, "Since the model has no state variable,\n");
      amefprintf(stderr, "the maximum time step has been reduced to %gs.\n", tsaveinc);
      double tInc;
      SimOptGetTInc(amesys->simOptions, &tInc);
      setmaxstep_(&tInc);
   }
#endif

   SetInitPrintIntervalFromSimOpts(amesys);

   ValidateRuntype(theruntype);


   return 1;
}

static int ameSetOptionsFixed(AMESIMSYSTEM *amesys,
                              double printinterval,
                              int fixed_type,
                              int fixedOrder,
                              double fixed_h,
                              int run_type)
{

   SimOptSetMonitorTimeEnabled(amesys->simOptions, false);

   ValidateRuntype(run_type);

	/* Ensure that runflag StabilizingRun=0. It might have been set to true */
	/* due to a previous selection for the variable step integrator. */
   ClearStabilizingRun();

   SimOptSetFixedOrder(amesys->simOptions, fixedOrder);
   simOptSetFixedStep(amesys->simVOptions, 1); /* Yes - fixed step */
   SimOptSetFixedH(amesys->simOptions, fixed_h);

   SimOptSetTInc(amesys->simOptions,  printinterval);
   SimOptSetDiscontinuityPrintoutEnabled(amesys->simOptions, false);  /* No discontinuity printout using fixed step solver */

   simOptSetFixedType(amesys->simVOptions, fixed_type);
   SetIsUsingFixedSolver(( fixed_type == 1)*100 +  (fixed_type != 1)*200 + fixedOrder);

   SetFixedTimeStep(fixed_h);

   return 1;
}

static int ameInputs(AMESIMSYSTEM *amesys, int numInputs, const double *inputARG)
{
   if(numInputs != amesys->numinputs)
   {
      char error_message[256];
      sprintf(error_message, "AMEInputs> Expected %d inputs but got %d\n", amesys->numinputs, numInputs);
      DisplayMessage(error_message);
      return 0;
   }
#if (AME_NBOF_INPUTS > 0)
   memcpy(amesys->inputs, inputARG, amesys->numinputs*sizeof(double) );
#endif
   return 1;
}

static void doAssembly(AMESIMSYSTEM *amesys)
{
   if (IsAssemblyNecessary_())
   {
      double time = getstarttime_();
      double tmp[AME_NBOF_SOLVER_STATES];
      int local_flag;

      /* Perform the assembly. */
      amesys->consflag = 1;
      local_flag = 0;
#if(AME_MODEL_ISEXPLICIT == 1)
      amesys->FuncEval(amesys, time, amesys->states, tmp, NULL, &local_flag);
#else
      amesys->res(amesys, time, amesys->states, amesys->dotstates, tmp, &local_flag);
#endif
      amesys->first_call = 1;

      amesys->consflag = 2;
      local_flag = 0;
#if(AME_MODEL_ISEXPLICIT == 1)
      amesys->FuncEval(amesys, time, amesys->states, tmp, NULL, &local_flag);
#else
      amesys->res(amesys, time, amesys->states, amesys->dotstates, tmp, &local_flag);
#endif
      amesys->first_call = 1;
      amesys->consflag = 0;
   }
}

static int ameEvalTstart(AMESIMSYSTEM *amesys, const double *modelInputs, double *modelOutputs)
{
#ifndef AMERT
   double time = getstarttime_();

   ameInputs(amesys, AME_NBOF_INPUTS, modelInputs);

   doAssembly(amesys);

   /* Initialize, maybe perform an initialising run */

   if(isstabrun_())
   {
      simOptSetFixedTime(amesys->simVOptions, time);
   }
   int stabilOption;
   simGetSimStabilOption(amesys->simOptions, &stabilOption);
   bool cautious_enabled;
   SimOptIsCautiousSolverEnabled(amesys->simOptions, &cautious_enabled);
   int cautious = cautious_enabled ? 1 : 0;
   stabilOption += 4*cautious;
   simSetSimStabilOption(amesys->simOptions,stabilOption);

#if(AME_MODEL_ISEXPLICIT == 1)

   if(!IntegrateInit(amesys, time, time))
   {
      return 0;
   }
#else
   bool is_enabled = false;
   amesys->internal_discont = 1;
   double tInc;
   SimOptGetTInc(amesys->simOptions, &tInc);
   double hMax;
   SimOptGetVariableHMax(amesys->simOptions, &hMax);
   int statistics;
   SimOptIsStatisticsEnabled(amesys->simOptions, &is_enabled);
   statistics = is_enabled ? 1 : 0;

   double abstol;
   simOptGetAbsTol(amesys->simOptions, &abstol);   
   double reltol;
   simOptGetRelTol(amesys->simOptions, &reltol);
   int iWrite = 0;

   SimOptIsMonitorTimeEnabled(amesys->simOptions, &is_enabled);
   iWrite = is_enabled ? 0 : 2;
   int minimalDiscont;
   SimOptIsMinDiscHandlingEnabled(amesys->simOptions, &is_enabled);   
   minimalDiscont = is_enabled ? 1 : 0;

   SimOptIsDiscontinuityPrintoutEnabled(amesys->simOptions, &is_enabled);
   int rStrtp = is_enabled ? 1 : 0;
   DIntegrateInit(amesys, AME_NBOF_EXPLICIT_STATE, time, getfinaltime_(), tInc, amesys->states,
                  amesys->dotstates, hMax, AME_NBOF_SOLVER_STATES, amesys->iwork, reltol, abstol, rStrtp, LIW, LRW, statistics, stabilOption, iWrite, minimalDiscont, Gis_constraint);

   if(isstabrun_())
   {
      /* HELP !!!! */
   }
#endif

#if (AME_NBOF_OUTPUTS > 0)
   memcpy(modelOutputs, amesys->outputs, amesys->numoutputs*sizeof(double) );
#endif
   amesys->tlast = time;

   return 1;
#else
   char error_message[256];
   sprintf(error_message, "ameEvalTstart> Should never be called for real-time simulation\n");
   DisplayMessage(error_message);
   return 0;
#endif
}

static int ameSetUpLockedStatus(AMESIMSYSTEM *amesys)
{
#ifdef AME_INPUT_IN_MEMORY
#include "RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_.lock.h"
   if(0 != SetUpLockedStatesFromMemory(amesys, lockedstates_length, lockedstates_array))
   {
      amefprintf(stderr,"Failed to set the locked states status.\n");
   }
#else
   SetUpLockedStates(GetCircuitName());
#endif
   return 0;
}

static int ameInitializeConditions(AMESIMSYSTEM *amesys)
{
#ifdef AME_VSOLVER_ACCEPTED
   double time;
   SimOptGetTStart(amesys->simOptions, &time);

   double tFinal;
   SimOptGetTFinal(amesys->simOptions, &tFinal);

   /* Initialise some static variables */
   setfinaltime_(tFinal);

   amesys->first_call=1;  /* should this be done or not ?*/
   amesys->internal_discont = 1;

   amesys->tlast = TLAST_MIN;

   memset(amesys->ecount,0,amesys->numstates*sizeof(int));
   memset(amesys->dotstates,0,amesys->numstates*sizeof(double));

#if(AME_MODEL_ISEXPLICIT == 0)
   memset(amesys->iwork,0,LIW*sizeof(int));
#endif
   /*  The following statement covers the case where there are
       no state variables y. */
#if( AME_NBOF_EXPLICIT_STATE == 0 )
   amesys->states[0] = 0.0;
#endif

   /* Call Input to read submodel and simulation parameters. */
   if(Input(amesys) != AME_NO_ERROR) return 0;
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);

   /* Register print interval that maybe used bys some submodels */
   SetInitPrintIntervalFromSimOpts(amesys);

   setstarttime_(time);

   /* Call pre-initialize function */

   PreInitialize(amesys,amesys->states);

#ifndef AME_INPUT_IN_MEMORY
   if( NeedReloadInputFiles() != 0 )
   {
      ClearGPs();
      if(Input(amesys) != AME_NO_ERROR) return 0;
      modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
      ClearReloadedFiles();
   }
#endif

   /* Call initialize subroutine to set con and icon array members */

   Initialize(amesys,amesys->states);

   /* At this point, SIMP00 init as been called and we know what Jacobian
   heuristic and Jacobian storage will be used as well as tolerance method.
   Inform the end user of default behavior modification. */
   InformAboutJacHeurJacStorageAndJacPertAndTolMethod(amesys);

   /* Overwriting initial state values with requests emitted by */
   /* submodels that have a more global view (cf. register.c mechanism) */
   /* Can also fire some callbacks to 'fix' float and integer store */
   OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);

   double abstol;
   double reltol;
   double hMax;

   simOptGetAbsTol(amesys->simOptions, &abstol);
   simOptGetRelTol(amesys->simOptions, &reltol);
   SimOptGetVariableHMax(amesys->simOptions, &hMax);

   CheckSimParams(amesys, &abstol, &reltol, &hMax);

   SimOptSetVariableHMax(amesys->simOptions, hMax);


#ifdef AME_RESULT_FILE
   /*  Open file for results. */
   amesys->AmeReadFile(amesys, &time, amesys->states);
#endif

   if(isconrun_() || isusefinval_())
   {
      updateStatesFromModel(amesys, amesys->states, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

   /* Read linear analysis specification. */
#ifndef FMI

   SetLADetails(GetLAFileName(), amesys->numstates, amesys->numvars, time,  reltol, abstol, getfinaltime_()-time);

   /* Remove old err file */

   remove(GetErrorFileName());

   /* Initialize the Performance analyzer */
   if(!isfixedstepsolver_()) {
      PerfAnalyzer_Init(amesys, time, getfinaltime_() );
   }
#endif
   if(isconrun_())
      setstarttime_(time);

   /* Set the locked states info */
   ameSetUpLockedStatus(amesys);

   return 1;
#else
   char error_message[256];
   sprintf(error_message, "AMEInitializeConditions> Should never be called for real-time simulation\n");
   DisplayMessage(error_message);
   return 0;
#endif
}

#if(AME_MODEL_ISEXPLICIT == 1)
static int ameEvalTstartFixed(AMESIMSYSTEM *amesys, const double *modelInputs, double *modelOutputs)
{
   double time = getstarttime_();

   ameInputs(amesys, AME_NBOF_INPUTS, modelInputs);

   doAssembly(amesys);

   amesys->tlast = time;

   /* Evaluation of the model at tStart */
   {
      int local_flag = 0;
      SetIsPrinting(amesys);
      amesys->FuncEval(amesys, time, amesys->states, amesys->yh, NULL, &local_flag);
      ClearIsPrinting(amesys);

#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
      amesys->OutputResults(amesys, amesys->tlast);
      amesys->resultFileStructPtr->lastprinttime = amesys->tlast;
#endif

      /* Now, amesys->first_call == 0 (set at the end of FunctionEval) */
   }

#if (AME_NBOF_OUTPUTS > 0)
   memcpy(modelOutputs, amesys->outputs,amesys->numoutputs*sizeof(double) );
#endif
   amesys->tlast = time;

#ifdef AME_PROCESS_TIME
   /* Initialization of time timers */
   ProcessTime(0);
#endif

   return 1;
}

static int ameInitializeConditionsFixed(AMESIMSYSTEM *amesys)
{
   int using_amesim_solver=1;
   double tStart;
   SimOptGetTStart(amesys->simOptions, &tStart);
   double tFinal;
   SimOptGetTFinal(amesys->simOptions, &tFinal);

   double start_time = tStart;

   assert(amesys);

   amesys->first_call=1;  /* should this be done or not ?*/

   amesys->tlast=TLAST_MIN;

   /* Init solver */
   memset(amesys->yh,0,(AME_NBOF_SOLVER_STATES*13)*sizeof(double));
   
   InitFixedStepIntegrate(amesys, using_amesim_solver );

   setfinaltime_(tFinal);

   /* Call Input to read submodel and simulation parameters. */
   if(Input(amesys) != AME_NO_ERROR) return 0;
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);

   SetInitPrintIntervalFromSimOpts(amesys);

   setstarttime_(start_time);

   /* Call pre-initialize function */

   PreInitialize(amesys,amesys->states);

#ifndef AME_INPUT_IN_MEMORY
   if( NeedReloadInputFiles() != 0 )
   {
      ClearGPs();
      if(Input(amesys) != AME_NO_ERROR) return 0;
      modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
      ClearReloadedFiles();
   }
#endif

   /* Call initialize subroutine to set con and icon array members */

   Initialize(amesys,amesys->states);

   /* Overwriting initial state values with requests emitted by */
   /* submodels that have a more global view (cf. register.c mechanism) */
   /* Can also fire some callbacks to 'fix' float and integer store */
   OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);

#ifdef AME_RESULT_FILE
   /*  Open file for results. */
   amesys->AmeReadFile(amesys, &start_time, amesys->states);
#endif

   if(isconrun_() || isusefinval_())
   {
      updateStatesFromModel(amesys, amesys->states, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

   /* Set the locked states info */
   ameSetUpLockedStatus(amesys);

   if(isconrun_()) {
      setstarttime_(start_time);
   }

   return 1;
}
#endif

/*=============================================================================*/

/*=============================================================================*/

/***********************************************************
   Purpose    : Test request acceptance
   Author	  : J.Andre
   Created on : 2016 - 09 - 05
   Inputs	  :
      event   : entry event
   Outputs	  :
      AME_NO_ERROR : event accepted
      AME_SEQUENCE_ERROR : event refused
   Revision   :
************************************************************/
static AMESystemError AmesysControlRequest(AMESIMSYSTEM *amesys, AMESystemCmd event)
{
   AMESystemError res = AME_NO_ERROR;

   if(!amesys) {
      if(event == AME_CMD_GET_MODEL_INFO) {
         return AME_NO_ERROR;
      }
      return AME_SEQUENCE_ERROR;
   }

   switch(event) {
      case AME_CMD_RELEASE: {
         if( !(amesys->systemState & (AMESTATE_TERMINATED | AMESTATE_FATAL | AMESTATE_INSTANTIATED)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_SETUP: {
         if( !(amesys->systemState & AMESTATE_INSTANTIATED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_INITIALIZE: {
         if(amesys->systemState != AMESTATE_READY) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_TERMINATE: {
         if( !(amesys->systemState & (AMESTATE_RUN | AMESTATE_READY | AMESTATE_ERROR)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_TSTART: {
         if( !(amesys->systemState & AMESTATE_INITIALIZED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_STEP: {
         if( !(amesys->systemState & AMESTATE_RUNNING) ) {
            res = AME_SEQUENCE_ERROR;
         }
         else {
            amesys->systemState |= AMESTATE_STEP_IN_PROGRESS;
         }
      }
      break;
      case AME_CMD_RESTART: {
         /* At this time, it is not still implemented */
         /* Depends of clean-up in terminated state and static variables */
         res = AME_SEQUENCE_ERROR;
      }
      break;
      case AME_CMD_GET_MODEL_INFO: {
         res = AME_NO_ERROR;
      }
      break;
      case AME_CMD_SET_MODEL_PARAM_TUNABLE: {
         if( !(amesys->systemState & (AMESTATE_READY | AMESTATE_RUN)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_SET_MODEL_PARAM:
      case AME_CMD_SET_RUN_PARAM:
      case AME_CMD_SET_SOLVER_PARAM: {
         if(amesys->systemState != AMESTATE_READY) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_GET_MODEL_PARAM:
      case AME_CMD_GET_SOLVER_PARAM:
      case AME_CMD_GET_RUN_PARAM: {
         if( !(amesys->systemState & (AMESTATE_READY | AMESTATE_RUN | AMESTATE_ERROR)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_REQ_RUN_INTERRUPT: {
         if( !(amesys->systemState & (AMESTATE_INSTANTIATED | AMESTATE_READY | AMESTATE_INITIALIZED | AMESTATE_RUNNING)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_SET_ENV: {
         if( !(amesys->systemState & AMESTATE_INSTANTIATED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_FUNCEVAL: {
         if( !(amesys->systemState & AMESTATE_RUNNING) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      default:
         res = AME_SEQUENCE_ERROR;
      break;
   }

   return res;
}

/***********************************************************
   Purpose    : Update state and manage result of request
   Author	  : J.Andre
   Created on : 2016 - 09 - 05
   Inputs	  :
      event   : entry event
      reqResult : result of request achievement
   Outputs	  :
      AME_NO_ERROR : event accepted
      AME_SEQUENCE_ERROR : event refused
   Revision   :
************************************************************/
static AMESystemError AmesysUpdateState(AMESIMSYSTEM *amesys, AMESystemCmd event, AMESystemError reqResult)
{
   unsigned int newState;
   AMESystemError res;

   if(!amesys) {
      return AME_SEQUENCE_ERROR;
   }

   newState = amesys->systemState;   /* Default: no change in state */
   res = reqResult;                  /* Default: no change in result */

   switch(event) {
      case AME_CMD_INSTANTIATE: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_INSTANTIATED;
         }
      }
      break;
      case AME_CMD_SETUP: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_READY;
         }
      }
      break;
      case AME_CMD_INITIALIZE: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_ERROR;
         }
         else {
            newState = AMESTATE_INITIALIZED;
         }
      }
      break;
      case AME_CMD_TERMINATE: {
         if(reqResult != AME_NO_ERROR) {
            amesys->systemState = AMESTATE_TERMINATED; /* Avoid automatic call to ameterminate */
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_TERMINATED;
         }
      }
      break;
      case AME_CMD_TSTART: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_ERROR;
         }
         else {
            newState = AMESTATE_RUNNING;
         }
      }
      break;
      case AME_CMD_STEP: {
         if(reqResult != AME_NO_ERROR) {
            /* test ameExitStatus */
            if(reqResult == AME_EXIT_ERROR) {
               if(amesys->ameExitStatus == 0) {
                  /* Simulation stopped early but normally */
                  amesys->requestinterrupt = 0;
                  newState = AMESTATE_STOPPED_EARLY;
                  res = AME_NO_ERROR;
               }
               else
               {
                  newState = AMESTATE_ERROR;
               }
            }
            else {
               newState = AMESTATE_ERROR;
            }
         }
         else if(amesys->requestinterrupt) {
            amesys->requestinterrupt = 0;
            newState = AMESTATE_STOPPED_END;
         }
         newState &= ~AMESTATE_STEP_IN_PROGRESS;
      }
      break;
      case AME_CMD_REQ_RUN_INTERRUPT:
      break;
      case AME_CMD_FUNCEVAL: {
         if(reqResult != AME_NO_ERROR) {
            /* test ameExitStatus */
            if(reqResult == AME_EXIT_ERROR) {
               if(amesys->ameExitStatus == 0) {
                  /* Simulation stopped early but normally */
                  newState = AMESTATE_STOPPED_EARLY;
                  res = AME_NO_ERROR;
               }
               else
               {
                  newState = AMESTATE_ERROR;
               }
            }
            else {
               newState = AMESTATE_ERROR;
            }
         }
      }
      break;
      default:
      /* No state change, no exception to catch, just pass result */
      break;
   }

   if(amesys->systemState != newState) {
      if(newState == AMESTATE_FATAL) {
         if(amesys->systemState & (AMESTATE_RUN | AMESTATE_READY | AMESTATE_ERROR)) {
            /* Terminating the simulation */
            ameTerminate(amesys);
         }
      }

#if !defined(STANDALONESIMULATOR)
      if(newState & (AMESTATE_FATAL | AMESTATE_ERROR)) {
         if(amesys->systemState & AMESTATE_RUN) {
            amefprintf(stderr, "Simcenter Amesim model: simulation failed.\n");
         }
         else if(amesys->systemState & AMESTATE_IDLE) {
            amefprintf(stderr, "Simcenter Amesim model: instantiation failed.\n");
         }
         else if(amesys->systemState & AMESTATE_READY) {
            amefprintf(stderr, "Simcenter Amesim model: initialization failed.\n");
         }
      }
      else if(newState & AMESTATE_INITIALIZED) {
         amefprintf(stdout, "Simcenter Amesim model: initialization done.\n");
      }
      else if(newState & AMESTATE_TERMINATED) {
         amefprintf(stdout, "Simcenter Amesim model: simulation terminated.\n");
      }
      else if((newState & AMESTATE_RUNNING) && (amesys->systemState & AMESTATE_INITIALIZED)) {
         amefprintf(stdout, "Simcenter Amesim model: simulation started.\n");
      }
#endif

      /* Update state */
      amesys->systemState = newState;
   }

   if(amesys->systemState == AMESTATE_FATAL) {
      /* Greedy error */
      res = AME_FATAL_ERROR;
   }

   return res;
}

/***********************************************************
   Purpose    : Instantiate the system
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : None
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysInstantiate(AMESIMSYSTEM **amesysPtr)
{
   int jump_ret;
   AMESIMSYSTEM *amesys;
   AMESystemError result = AME_FATAL_ERROR;

   S_AME_Model *pModel;

   if(*amesysPtr != NULL) {
      return AME_SEQUENCE_ERROR;
   }

   result = createModel(&pModel, &GmodelDef, GParamInfo, GVarInfo, GsubmodelNameArray,
                        GcontStateVarNum, GdiscStateVarNum, GFixedVarNum);

   if(result == AME_NO_ERROR) {
#if(AME_MODEL_ISEXPLICIT == 1)
      amefprintf(stdout, "Instantiating a system with %d unknowns.\n", AME_NBOF_EXPLICIT_STATE);
#else
      amefprintf(stdout, "Instantiating a system with %d unknowns.\n", AME_NBOF_SOLVER_STATES);
#endif
      if (strcmp(soldToId,"not available") != 0)
         amefprintf(stdout, "Simcenter Amesim version: %s (%s).\n", "2511", soldToId);
      else
         amefprintf(stdout, "Simcenter Amesim version: %s.\n", "2511");
      result = createAMESystem(&amesys, pModel, AME_NBOF_SOLVER_STATES, AMEVERSION);
   }
#if (AME_NB_SUBMODEL_REF>0)
   if(result == AME_NO_ERROR) {
      int idx_sub;
      for(idx_sub = 0; idx_sub < AME_NB_SUBMODEL_REF; idx_sub++) {
         S_AMESubSimuInfo info;
         info.rp = SUBSTRUC[idx_sub].SUBSIMU[0][0] > 0 ? &pModel->realParamArray[SUBSTRUC[idx_sub].SUBSIMU[0][1]] : NULL;
         info.ip = SUBSTRUC[idx_sub].SUBSIMU[1][0] > 0 ? &pModel->integerParamArray[SUBSTRUC[idx_sub].SUBSIMU[1][1]] : NULL;
         info.tp = (const char **)(SUBSTRUC[idx_sub].SUBSIMU[2][0] > 0 ? &pModel->textParamArray[SUBSTRUC[idx_sub].SUBSIMU[2][1]] : NULL);
         info.c = SUBSTRUC[idx_sub].SUBSIMU[3][0] > 0 ? &pModel->realStoreArray[SUBSTRUC[idx_sub].SUBSIMU[3][1]] : NULL;
         info.ic = SUBSTRUC[idx_sub].SUBSIMU[4][0] > 0 ? &pModel->intStoreArray[SUBSTRUC[idx_sub].SUBSIMU[4][1]] : NULL;
         info.ps = SUBSTRUC[idx_sub].SUBSIMU[5][0] > 0 ? &pModel->pointerStoreArray[SUBSTRUC[idx_sub].SUBSIMU[5][1]] : NULL;
         info.na = pModel->ptrNetWorkArray;
         result |= setSubSimuParam(pModel, idx_sub, &info);
      }
   }
#endif

   if(result == AME_NO_ERROR) {
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */
         SetGlobalSystem(amesys);

         amesys->consflag = 0;

#if(AME_MODEL_ISEXPLICIT == 1)
         amesys->FuncEval = localFuncEval;
         amesys->JFuncEval = localJFuncEval;
#else
         amesys->res = localFuncEval;
         amesys->Jres = localJFuncEval;
#endif
         amesys->AmeExit = ModelAmeExit;

         amesys->ameExitStatus = 0;

         /* Set input directory to current directory */
         AmeSetInputDir(amesys,NULL);

         /* Set output directory to current directory */
         AmeSetOutputDir(amesys,NULL);

         /* Set base name of input files, no extension */
         AmeSetModelBaseName(amesys,"RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_", NULL);

         result = AME_NO_ERROR;
      }
      else { /* Catch AmeExit */
         result = AME_EXIT_ERROR;
      }
   }

   if(result == AME_NO_ERROR) {
      /* Update state and result */
      result =  AmesysUpdateState(amesys, AME_CMD_INSTANTIATE, result);
   }

   if(result != AME_NO_ERROR) {
      deleteAMESystem(&amesys);
      SetGlobalSystem(NULL);
   }
   else {
      *amesysPtr = amesys;
   }

   return result;
}

static AMESystemError AmesysTerminate(AMESIMSYSTEM *amesys)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_TERMINATE);
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if(res == AME_NO_ERROR) { /* Request accepted */
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */
         ameTerminate(amesys);
      }
      else { /* Catch AmeExit */
         res = AME_EXIT_ERROR;
      }
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_TERMINATE, res);

   return res;
}

static AMESystemError AmesysRelease(AMESIMSYSTEM **amesysPtr)
{
   AMESystemError res = AME_NO_ERROR;
   if(*amesysPtr) {
      SetGlobalSystem(*amesysPtr);
      res = AmesysControlRequest(*amesysPtr, AME_CMD_RELEASE);

      if(res == AME_NO_ERROR) { /* Request accepted */
         AmeSignalModelUnload();
         res = deleteAMESystem(amesysPtr);
         SetGlobalSystem(NULL);
      }
   }
   return res;
}

/***********************************************************
   Purpose    : Go in Ready state to be able receive external
                initialization of model and simulation
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : loadParam: if true, model parameters are read
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysSetUp(AMESIMSYSTEM *amesys, const int loadParam)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SETUP);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */
      amesys->ameExitStatus = 0;

      /* Construct file names */
      AmeConstructFileName(amesys);

      /* Read sim file */
      {
         SIMOptions *opts = NULL;

         SimOptStatus status;
         status = SimOptCreateSimOptions(&opts);
         SIMVolatileOptions vopts = {0};
#ifndef AME_INPUT_IN_MEMORY
#ifndef AMEHAVENOSTDIO
         char errMsg[PATH_MAX+128];
         SimOptStatus result = SimOptReadSimFile(opts, GetCircuitName(), GetBatchRunNumber());
         if(result != SimOptStatusSuccess)
         {
            amefprintf(stderr, "%s \n", SimOptGetLastErrorMessage());
         }

#else
         amefprintf(stderr,"Error: Invalid file_name in %s: Unable to open file.\n", GetSimFileName());
#endif
#else
         SimOptStatus result = SimOptReadSimFromCharArrays(opts, simparams, simparams_length);
#endif
         if(result == SimOptStatusSuccess) {
            
            simOptSetFixedStepFromSimOptions(&vopts, opts);
            simOptSetFixedTypeFromSimOptions(&vopts, opts);
            /* Initialyze Amesystem SIMOptions */
            SimOptCopySimOptions(amesys->simOptions, opts);
            /* Initialyze Amesystem SIMVolatileOptions */
            *amesys->simVOptions = vopts; // Perform a shallow copy
#ifdef AME_RESULT_FILE
            simOptSetOutOff(amesys->simVOptions, 0);
#else
            simOptSetOutOff(amesys->simVOptions, 1);
#endif

#ifdef AME_PERFORMANCE_ANALYZER
            bool is_enabled = false;
            SimOptIsAutoLAEnabled(opts, &is_enabled);
            int autoLA = is_enabled ? 1 : 0;
            double autoLAstep;
            SimOptGetAutoLAStep(opts, &autoLAstep);
            ALA_Setparam(autoLA, 1, autoLAstep);
            DISCLOG_SetParam(1);
#endif
         }
         else {
            res = AME_SETUP_ERROR;
         }
         SimOptDestroySimOptions(&opts);
      }

      if(loadParam) {
         /* Load parameters */
         loadModelParameters(amesys);
      }

   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_SETUP, res);

   return res;
}

/***********************************************************
   Purpose    : Initialize the model
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : None
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysInitialize(AMESIMSYSTEM *amesys)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_INITIALIZE);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
      bool fixedIntegratorEnabled;
      SimOptIsFixedStepIntegratorEnabled(amesys->simOptions, &fixedIntegratorEnabled);
      if(fixedIntegratorEnabled) {
         /* fixed step initialization */
#if(AME_MODEL_ISEXPLICIT == 1)
         double tInc;
         SimOptGetTInc(amesys->simOptions, &tInc);
         double fixedH;
         SimOptGetFixedH(amesys->simOptions, &fixedH);
         int fixedType;
         simOptGetFixedType(amesys->simVOptions, &fixedType);
         int fixedOrder;
         SimOptGetFixedOrder(amesys->simOptions, &fixedOrder);
         int runType;
         simGetSimRunType(amesys->simOptions, &runType);
         ameSetOptionsFixed(amesys, tInc, fixedType,
            fixedOrder, fixedH, runType);

         if(!ameInitializeConditionsFixed(amesys)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a fixed step solver\nfor implicit systems.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }
      else {
#ifdef AME_VSOLVER_ACCEPTED
         /* variable step initialization */
         double tInc;
         SimOptGetTInc(amesys->simOptions, &tInc);

         bool is_enabled;
         SimOptIsCautiousSolverEnabled(amesys->simOptions, &is_enabled);
         int cautious = is_enabled ? 1 : 0;

         double hMax;
         SimOptGetVariableHMax(amesys->simOptions, &hMax);

         SimOptIsDiscontinuityPrintoutEnabled(amesys->simOptions, &is_enabled);
         int rStrtp = is_enabled ? 1 : 0;
         int iWrite = 0;

         SimOptIsMonitorTimeEnabled(amesys->simOptions, &is_enabled);
         iWrite = is_enabled ? 0 : 2;
         int statistics;
         SimOptIsStatisticsEnabled(amesys->simOptions, &is_enabled);
         statistics = is_enabled ? 1 : 0;

         int runType;
         simGetSimRunType(amesys->simOptions, &runType);
         SimOptErrorType simopt_errorType;
         SimOptGetVariableErrorType(amesys->simOptions, &simopt_errorType);
         int errorType = (int)simopt_errorType;
         double tol;
         SimOptGetVariableTol(amesys->simOptions, &tol);

         ameSetOptions(amesys, tInc, hMax, tol,
            errorType, iWrite, rStrtp,
            statistics, runType, cautious);

         if(!ameInitializeConditions(amesys)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a variable step solver\nfor this interface.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }

#if defined(AME_MEMORY_ACCESS_RT_EXPORT)
#if (NB_WATCH_VAR>0)
         RT_Get_Watch_Var(amesys);
#endif
#endif

   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_INITIALIZE, res);

   return res;
}

#if(AME_MODEL_ISEXPLICIT == 1)
static void doAFixedStep(AMESIMSYSTEM *amesys, double time)
{
   double timerange;
   double actual_timestep;
   int stepratio;
   int stepratio_ceil;
   int stepratio_floor;
   int i=0;
   int zero=0;
   double tinc;
   int isTimeForPrint=0;
   double next_print_time;

   if (amesys->first_call)
   {
      SetIsPrinting(amesys);
      amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
      ClearIsPrinting(amesys);

#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
      amesys->OutputResults(amesys, amesys->tlast);
      amesys->resultFileStructPtr->lastprinttime = amesys->tlast;
#endif
   }

   timerange = time - amesys->tlast;

   if(timerange <= 0.0)
   {
      return;
   }
   double fixedH;
   SimOptGetFixedH(amesys->simOptions, &fixedH);
   if(fixedH > 0.0)
   {
      stepratio = stepratio_ceil = (int)ceil(timerange/fixedH);
      stepratio_floor = (int)floor(timerange/fixedH);

      actual_timestep = timerange/(double)stepratio_ceil;

      if(fabs(actual_timestep-fixedH) > 0.001*fixedH)
      {
         if(stepratio_floor == 0)
         {
#ifdef AMEDEBUG
            amefprintf(stdout,"skipping %14.8e  range= %14.8e  actual_timestep=%14.8e stepratio_ceil=%d   stepratio_floor=%d\n",time, timerange, actual_timestep, stepratio_ceil,stepratio_floor);
#endif
            return;
         }

#ifdef AMEDEBUGw
         amefprintf(stdout,"using floor\n");
         amefprintf(stdout,"timerange=%14.8e\n", timerange);
         amefprintf(stdout,"actual_timestep=%14.8e\n", actual_timestep);
         amefprintf(stdout,"fixedH=%14.8e\n", fixedH);
         amefprintf(stdout,"fabs(actual_timestep-fixedH)=%14.8e\n", fabs(actual_timestep-fixedH));
         amefprintf(stdout,"stepratio_floor=%d\n", stepratio_floor);
         amefprintf(stdout,"stepratio_ceil=%d\n", stepratio_ceil);
#endif
         actual_timestep = timerange/(double)stepratio_floor;
         stepratio = stepratio_floor;
      }

      if(fabs(actual_timestep-fixedH) > 0.001*fixedH)
      {
#ifdef AMEDEBUGw
         amefprintf(stdout,"Adjusting time step %14.8e => %14.8e\n", fixedH, actual_timestep);
         amefprintf(stdout,"stepratio_floor=%d\n", stepratio_floor);
         amefprintf(stdout,"stepratio_ceil=%d\n", stepratio_ceil);
         amefprintf(stdout,"stepratio=%d\n", stepratio);
         amefprintf(stdout,"timerange=%14.8e\n", timerange);
#endif
      }
   }
   else
   {
      /* just single step from the last point in time when we were called */
      stepratio=1;
      actual_timestep = timerange;
   }

#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
   if(amesys->resultFileStructPtr && !amesys->resultFileStructPtr->outoff)
   {
      double tInc;
      SimOptGetTInc(amesys->simOptions, &tInc);
      double tFinal;
      SimOptGetTFinal(amesys->simOptions, &tFinal);

      next_print_time = GetNextPrintTime(&tinc, amesys->resultFileStructPtr->lastprinttime, tFinal, tInc, actual_timestep);
   }
#endif

#ifdef AMERT
   /* Allow changes of the stepratio - typically on RT platforms. */
   {
      double localstepratio=floor(IL_RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_step_ratio);
      if (localstepratio >= 1)
      {
         actual_timestep=timerange/localstepratio;
         stepratio = (int)localstepratio;
      }
   }
#endif
#ifdef STANDALONESIMULATOR
   double _tInc;
   SimOptGetTInc(amesys->simOptions, &_tInc);
   int fixedOrder;
   SimOptGetFixedOrder(amesys->simOptions, &fixedOrder);
   int fixedType;
   simOptGetFixedType(amesys->simVOptions, &fixedType);
   FixedStepIntegrate(amesys,AME_NBOF_SOLVER_STATES,amesys->tlast,time, _tInc, amesys->states,
         amesys->yh, fixedType, fixedOrder,actual_timestep);
#else
   for (i=0; (i<stepratio) && (amesys->requestinterrupt == 0);i++)
   {
      int fixedType;
      simOptGetFixedType(amesys->simVOptions, &fixedType);
      int fixedOrder;
      SimOptGetFixedOrder(amesys->simOptions, &fixedOrder);
      /*Integrate one step */
      if ( fixedType == 1)
      {
         DoAnABStep(amesys, amesys->numstates, fixedOrder, &amesys->tlast, actual_timestep, amesys->states, amesys->yh);
      }
      else
      {
         DoAnRKStep(amesys, amesys->numstates, fixedOrder, &amesys->tlast, actual_timestep, amesys->states, amesys->yh);
      }

#ifndef AMERT
      isTimeForPrint = amesys->resultFileStructPtr && (!amesys->resultFileStructPtr->outoff && ((amesys->tlast >= next_print_time) || ((next_print_time-amesys->tlast)/tinc < TIME_ROUNDOFF)));
      if(isTimeForPrint)
      {
#ifdef AME_PROCESS_TIME
         ProcessTime(1);
#endif
         SetIsPrinting(amesys);
         amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
         ClearIsPrinting(amesys);
         amesys->OutputResults(amesys,amesys->tlast);
         double _tInc;
         SimOptGetTInc(amesys->simOptions, &_tInc);
         double tFinal;
         SimOptGetTFinal(amesys->simOptions, &tFinal);
         next_print_time = GetNextPrintTime(&tinc, amesys->tlast, tFinal, _tInc, actual_timestep);
      }
      else
#endif
      {
         amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
      }
   }
#endif
   amesys->tlast = time;
}
#endif

static int ameOutputs(AMESIMSYSTEM *amesys, double timeARG, int numOutputs, double *outputARG)
{
   int theprintflag=1;
   double *dot;
   double *v;

   assert(amesys);

   v = amesys->v;
   dot = amesys->dotstates;

   if(numOutputs != amesys->numoutputs)
   {
      char error_message[256];
      sprintf(error_message, "AMEOutputs> Expected %d outputs but got %d\n", amesys->numoutputs, numOutputs);
      DisplayMessage(error_message);
      AmeExit(1);
   }

   if (!isdynrun_())
   {
      /* it is not a dynamic run (neither dynamic nor stabilizing + dynamic) */
      /* stabilizing has already been processed during Init.*/
      /*Exit */
      return 1;
   }

   if(timeARG < amesys->tlast)
   {
      DisplayMessage("trying to integrate backwards\n");
      return 0;
   }
#if(AME_MODEL_ISEXPLICIT == 1)
   amesys->t_end_of_time_slice = timeARG;
#ifndef AMERT
   if(!isfixedstepsolver_())
   {
      if(!IntegrateStep(amesys, amesys->tlast, timeARG))
      {
         DisplayMessage("IntegrateStep failed");
         return 0;
      }
      amesys->tlast = timeARG;
   }
   else
   {
      doAFixedStep(amesys, timeARG);
   }
#else
   doAFixedStep(amesys, timeARG);
#endif

#else
   double tInc;
   SimOptGetTInc(amesys->simOptions, &tInc);   
   int stabilOption;
   simGetSimStabilOption(amesys->simOptions, &stabilOption);      
   double abstol;
   simOptGetAbsTol(amesys->simOptions, &abstol);   
   double reltol;
   simOptGetRelTol(amesys->simOptions, &reltol);   
   double hMax;
   SimOptGetVariableHMax(amesys->simOptions, &hMax);
   bool is_enabled;
   SimOptIsDiscontinuityPrintoutEnabled(amesys->simOptions, &is_enabled);
   int rStrtp = is_enabled ? 1 : 0;
   int iWrite = 0;

   SimOptIsMonitorTimeEnabled(amesys->simOptions, &is_enabled);
   iWrite = is_enabled ? 0 : 2;

   int minimalDiscont;
   SimOptIsMinDiscHandlingEnabled(amesys->simOptions, &is_enabled);   
   minimalDiscont = is_enabled ? 1 : 0;

   int statistics;
   SimOptIsStatisticsEnabled(amesys->simOptions, &is_enabled);
   statistics = is_enabled ? 1 : 0;

   if(!DIntegrateStep(amesys, AME_NBOF_EXPLICIT_STATE, amesys->tlast, timeARG, tInc, amesys->states,
      amesys->dotstates, hMax, AME_NBOF_SOLVER_STATES, amesys->iwork, reltol,
      abstol, rStrtp, LIW, LRW, statistics,
      stabilOption, iWrite, minimalDiscont,
      amesys->internal_discont, Gis_constraint, &amesys->requestinterrupt))
   {
      DisplayMessage("DIntegrateStep failed");
      return 0;
   }

   amesys->tlast = timeARG;
#endif

#if (AME_NBOF_OUTPUTS > 0)
   memcpy(outputARG, amesys->outputs, amesys->numoutputs*sizeof(double) );
#endif

   return 1;
}

static AMESystemError AmesysComputeAtTstart(AMESIMSYSTEM *amesys, const double *theInputs, double *theOutputs)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_TSTART);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
      bool fixedIntegratorEnabled;
      SimOptIsFixedStepIntegratorEnabled(amesys->simOptions, &fixedIntegratorEnabled);
      if(fixedIntegratorEnabled) {
         /* fixed step solver */
#if(AME_MODEL_ISEXPLICIT == 1)
         if(!ameEvalTstartFixed(amesys, theInputs, theOutputs)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a fixed step solver\nfor implicit systems.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }
      else {
         /* variable step solver */
         if(!ameEvalTstart(amesys, theInputs, theOutputs)) {
            res = AME_INITIALIZE_ERROR;
         }
      }

   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_TSTART, res);

   return res;
}

/***********************************************************
   Purpose    : Do a co-simulation step
   Author	  : J.Andre
   Created on : 2016 - 09 - 12
   Inputs	  : None
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysStep(AMESIMSYSTEM *amesys, int stepType, const double t, const double *theInputs, double *theOutputs,
   const int doInterpol, const unsigned int *orderTab, const double **polyTab, const E_CS_Reset cs_reset)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_STEP);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */

#if defined(AME_MEMORY_ACCESS_RT_EXPORT)
#if (NB_WATCH_REAL_PARAM>0) || (NB_WATCH_INT_PARAM>0)
      RT_Set_Watch_Param(amesys);
#endif
#endif

#if defined(AME_COSIM) && (AME_NBOF_INPUTS > 0) && (!defined(AMERT))
      amesys->doInterpol = doInterpol;

      if(amesys->doInterpol) {
         stepType = 1;
         res = setPolyCosimSlave(amesys->csSlave, orderTab, polyTab);
      }
      else {
         res = setPolyCosimSlaveByInputs(amesys->csSlave, theInputs);
      }
#else
      amesys->doInterpol = 0;
#endif

      if(res == AME_NO_ERROR) {
         if(stepType == 0) {  /* Do a step */
            if(!ameOutputs(amesys, t, AME_NBOF_OUTPUTS, theOutputs)) {
               res = AME_STEP_ERROR;
            }
#ifndef AMERT
            amesys->input_discont = CheckIfColdStartNeed(amesys, theInputs, cs_reset);
            /* Need to do something here if no internal disc and disc printout */
            AddExtraPrintOut(amesys, amesys->tlast);
#endif
            if(amesys->doInterpol == 0) {
               if(!ameInputs(amesys, AME_NBOF_INPUTS, theInputs)) {
                  res = AME_STEP_ERROR;
               }
            }
         }
         else {  /* Do a step 2 */
#ifndef AMERT
            amesys->input_discont = CheckIfColdStartNeed(amesys, theInputs, cs_reset);

            /* Need to do something here if no internal disc and disc printout */
            res |= changePolynomialSlot(amesys->csSlave);
            AddExtraPrintOut(amesys, amesys->tlast);
            res |= changePolynomialSlot(amesys->csSlave);
#endif
            if(amesys->doInterpol == 0) {
               if(!ameInputs(amesys, AME_NBOF_INPUTS, theInputs)) {
                  res = AME_STEP_ERROR;
               }
            }

            if(!ameOutputs(amesys, t, AME_NBOF_OUTPUTS, theOutputs)) {
               res = AME_STEP_ERROR;
            }
#ifndef AMERT
            if(amesys->doInterpol != 0) {
               if( getInputsCosimSlave(amesys->csSlave, t, amesys->inputs) != AME_NO_ERROR ) {
                  res = AME_STEP_ERROR;
               }
            }
#endif
         }
         amesys->num_steps_taken++;
#ifndef AMERT
         res |= changePolynomialSlot(amesys->csSlave);
         res |= setTciCosimSlave(amesys->csSlave, t);
#endif
      }

#if defined(AME_MEMORY_ACCESS_RT_EXPORT)
#if (NB_WATCH_VAR>0)
      RT_Get_Watch_Var(amesys);
#endif
#endif
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_STEP, res);

   return res;
}

/***********************************************************
   Purpose    : Set solver parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  :
   Revision   :
************************************************************/
static AMESystemError AmesysSetSolverParam(AMESIMSYSTEM *amesys, const solverSettings *solver)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptSetSolverParam(amesys->simOptions, amesys->simVOptions, solver);
   }

   return res;
}

/***********************************************************
   Purpose    : Get solver parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  :
   Revision   :
************************************************************/
static AMESystemError AmesysGetSolverParam(AMESIMSYSTEM *amesys, solverSettings *solver)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptGetSolverParam(amesys->simOptions, amesys->simVOptions, solver);
   }

   return res;
}

/***********************************************************
   Purpose    : Set run parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  :
   Revision   :
************************************************************/
static AMESystemError AmesysSetSimParam(AMESIMSYSTEM *amesys, const simSettings *simOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Simulation parameters */
      simOptSetSimParam(amesys->simOptions,simOpt);
   }

   return res;
}

static AMESystemError AmesysGetSimParam(AMESIMSYSTEM *amesys, simSettings *simOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Get Simulation parameters */
      simOptGetSimParam(amesys->simOptions, simOpt);
   }

   return res;
}

static AMESystemError AmesysSetSimItem(AMESIMSYSTEM *amesys, const int Id, const int enabled)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      if(simOptSetOneOfSimParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }

   return res;
}

static AMESystemError AmesysGetSimItem(AMESIMSYSTEM *amesys, const int Id, int *enabled)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      if(simOptGetOneOfSimParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }

   return res;
}

/***********************************************************
   Purpose    : Set run parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  :
   Revision   :
************************************************************/
static AMESystemError AmesysSetStdOptions(AMESIMSYSTEM *amesys, const stdOptions *stdOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialize standard parameters */
      simOptSetStdParam(amesys->simOptions,stdOpt);
   }

   return res;
}

static AMESystemError AmesysGetStdOptions(AMESIMSYSTEM *amesys, stdOptions *stdOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Get standard parameter */
      simOptGetStdParam(amesys->simOptions, stdOpt);
   }

   return res;
}

static AMESystemError AmesysSetStdItem(AMESIMSYSTEM *amesys, const int Id, const int enabled)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialize standard parameter */
      if(simOptSetOneOfStdParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }

   return res;
}

static AMESystemError AmesysGetStdItem(AMESIMSYSTEM *amesys, const int Id, int *enabled)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialize standard parameter */
      if(simOptGetOneOfStdParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }

   return res;
}

static AMESystemError AmesysSetALAParam(AMESIMSYSTEM *amesys, const autoLAOptions *alaOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialize standard parameters */
      bool is_enabled = false;
      is_enabled = (alaOpt->autoLAOpt & SIMOPT_AUTOLA_ACTIVATE) != 0;
      SimOptSetAutoLAEnabled(amesys->simOptions, is_enabled);
      SimOptSetAutoLAStep(amesys->simOptions, alaOpt->autoLAstep);
   }

   return res;
}

static AMESystemError AmesysGetALAParam(AMESIMSYSTEM *amesys, autoLAOptions *alaOpt)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Get standard parameter */
      bool is_enabled = false;
      SimOptIsAutoLAEnabled(amesys->simOptions, &is_enabled);
      if(is_enabled)
      {
         alaOpt->autoLAOpt |= SIMOPT_AUTOLA_ACTIVATE;
      }
      else
      {
         alaOpt->autoLAOpt &= ~SIMOPT_AUTOLA_ACTIVATE;
      }
      SimOptGetAutoLAStep(amesys->simOptions, &alaOpt->autoLAstep);
   }

   return res;
}

/***********************************************************
   Purpose     : Turn off/on results
   Author	   : J.Andre
   Created on  : 2016 - 09 - 09
   Inputs	   :
      outoff   :  0 : result file off
                  1 : result file on
   Outputs	   :
   Revision    :
************************************************************/
static AMESystemError AmesysEnableResult(AMESIMSYSTEM *amesys, const int out)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      if(out) {
         simOptSetOutOff(amesys->simVOptions, 0);
      }
      else {
         simOptSetOutOff(amesys->simVOptions, 1);
      }
   }

   return res;
}

/***********************************************************
   Purpose     : Return the state of Amesystem
   Author	   : J.Andre
   Created     : 2016 - 09 - 05
   Inputs	   : None
   Outputs	   :
      state    : machine state
   Revision    :
************************************************************/
static unsigned int AmesysGetState(AMESIMSYSTEM *amesys)
{
   if(amesys) {
      return amesys->systemState;
   }
   else {
      return AMESTATE_IDLE;
   }
}

static AMESystemError AmesysGetModelInfo(unsigned int *numinputs, unsigned int *numoutputs, unsigned int *numstates, unsigned int *numimplicits)
{
   *numinputs = AME_NBOF_INPUTS;
   *numoutputs = AME_NBOF_OUTPUTS;
   *numstates = AME_NBOF_EXPLICIT_STATE;
   *numimplicits = AME_NBOF_IMPLICIT_STATE;

   return AME_NO_ERROR;
}

static AMESystemError AmesysGetModelPortName(const char **inputName[], const char **outputName[])
{
   *inputName = GinputVarTitles;
   *outputName = GoutputVarTitles;

   return AME_NO_ERROR;
}

static AMESystemError AmesysGetModelNumParam(unsigned int *numParam)
{
   *numParam = AME_NBOF_PARAMS;

   return AME_NO_ERROR;
}

static AMESystemError AmesysGetParamType(const int nbParam, const int idx[], E_ParamCType paramType[])
{
   AMESystemError res = AME_NO_ERROR;
   int i;

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      if(i < AME_NBOF_PARAMS) {
         switch(GParamInfo[idx[i]].category) {
            case E_Int_Param:
               paramType[i] = E_CType_IntParam;
            break;
            case E_Text_Param:
               paramType[i] = E_CType_StringParam;
            break;
            default:
               paramType[i] = E_CType_DoubleParam;
            break;
         }
         return AME_NO_ERROR;
      }
      else {
         res = AME_PARAM_IDX_ERROR;
      }
   }

   return res;
}

static AMESystemError AmesysFindParamFromVar(const int nbParam, const int varIdx[], int paramIdx[], E_ParamCategory category[])
{
   AMESystemError res = AME_NO_ERROR;
   int idx, i;

   for(idx = 0; (idx < nbParam) && (res == AME_NO_ERROR); idx++) {
      res = AME_PARAM_IDX_ERROR;
      for(i = 0; i < AME_NBOF_PARAMS; i++) {
         if(GParamInfo[i].varIdx == varIdx[idx]) {
            paramIdx[idx] = i;
            category[idx] = GParamInfo[i].category;
            res = AME_NO_ERROR;
         }
      }
   }

   return res;
}

static AMESystemError AmesysGetIntParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], int value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getIntParameter(amesys->pModel, idx[i], &value[i]);
   }

   return res;
}

static AMESystemError AmesysGetDoubleParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], double value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getDoubleParameter(amesys->pModel, idx[i], &value[i]);
   }

   return res;
}

static AMESystemError AmesysGetStringParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const char* value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getStringParameter(amesys->pModel, idx[i], &value[i]);
   }

   return res;
}

static AMESystemError AmesysSetIntParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const int value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);

      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setIntParameter(amesys->pModel, idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         SignalInputChange();
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }

   return res;
}

static AMESystemError AmesysSetDoubleParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const double value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);

      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setDoubleParameter(amesys->pModel, idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         SignalInputChange();
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }

   return res;
}

static AMESystemError AmesysSetStringParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const char* value[])
{
   AMESystemError res;
   int i;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);

   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);

      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setStringParameter(amesys->pModel,idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }

   return res;
}

static AMESystemError AmesysGetDoubleGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], double value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(getGlobalParamValueByName(name[i], &value[i]) != no_error) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysGetStringGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const char* value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(getTextGlobalParamValueByName(name[i], &value[i]) != no_error) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysSetIntGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const int value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddIntGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysSetDoubleGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const double value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddRealGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysSetStringGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const char* value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddTextGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysRequestRunInterrupt(AMESIMSYSTEM *amesys)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_REQ_RUN_INTERRUPT);

   if(res == AME_NO_ERROR) { /* Request accepted */
      amesys->requestinterrupt = 1;

	   /* Update state and result */
	   res =  AmesysUpdateState(amesys, AME_CMD_REQ_RUN_INTERRUPT, res);
   }

   return res;
}

static AMESystemError AmesysSetFinalTime(AMESIMSYSTEM *amesys, const double finaltime)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      SimOptSetTFinal(amesys->simOptions, finaltime);
   }

   return res;
}

static AMESystemError AmesysSetInitTime(AMESIMSYSTEM *amesys, const double inittime)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      SimOptSetTStart(amesys->simOptions, inittime);
   }

   return res;
}

static AMESystemError AmesysSetPrintInterval(AMESIMSYSTEM *amesys, const double tInc)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      SimOptSetTInc(amesys->simOptions, tInc);
   }

   return res;
}

static AMESystemError AmesysSetToleranceMethod(AMESIMSYSTEM *amesys, const int tolMethod)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      setToleranceMethod(amesys, tolMethod);
   }

   return res;
}

static AMESystemError AmesysSetAbsoluteAndRelativeTolerances(AMESIMSYSTEM *amesys, const double atol, const double rtol)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      setToleranceValues(amesys, atol, rtol);
   }

   return res;
}

static AMESystemError AmesysGetToleranceMethodAndValues(AMESIMSYSTEM *amesys, int *tolmethod, double *atol, double *rtol)
{
   AMESystemError res = AME_NO_ERROR;
   *tolmethod = getToleranceMethodAndValues(amesys->simOptions, atol, rtol);
   return res;
}

static AMESystemError AmesysSetLogger( int (*newameInternalfprintf)(FILE *fp, const char *fmt, va_list ap) )
{
   ameInstallFprintf(newameInternalfprintf);
   return AME_NO_ERROR;
}

static AMESystemError AmesysSetInputDir(AMESIMSYSTEM *amesys, const char *inputDir)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetInputDir(amesys, inputDir);
   }

   return res;
}

static AMESystemError AmesysSetOutputDir(AMESIMSYSTEM *amesys, const char *outputDir)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetOutputDir(amesys, outputDir);
   }

   return res;
}

static AMESystemError AmesysSetBaseFilesName(AMESIMSYSTEM *amesys, const char *baseName, const char* extension)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetModelBaseName(amesys, baseName, extension);
   }

   return res;
}

static AMESystemError AmesysSetResultFilesName(AMESIMSYSTEM *amesys, const char *outName)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetResultFileName(amesys, outName);
   }

   return res;
}

/* To ensure compliancy with old template and entry points */
static AMESystemError AmesysSetParamAsInitModel(AMESIMSYSTEM *amesys,
                  double time,
                  double PrintInterval,
                  double MaxTimeStep,
                  double tolerance,
                  int errCtrl,
                  int writeLevel,
                  int extraDisconPrints,
                  int runStats,
                  int runType,
                  int thesolvertype)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   res |= AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      SIMOptions *sim_options = amesys->simOptions;

      simSettings sim;
      stdOptions std;

      SimOptSetFixedStepIntegratorEnabled(amesys->simOptions, 0);
      SimOptSetVariableHMax(amesys->simOptions, MaxTimeStep);
      SimOptSetVariableTol(amesys->simOptions, tolerance);
      SimOptSetVariableErrorType(amesys->simOptions, errCtrl);

      sim.tStart = time;
      double tFinal;
      SimOptGetTFinal(amesys->simOptions, &tFinal);

      sim.tFinal = tFinal;
      sim.simOpt = 0;

      if(runType & 0x01) {
         sim.simOpt |= SIMOPT_SIM_CONTINUATION_RUN;
      }
      if(runType & 0x02) {
         sim.simOpt |= SIMOPT_SIM_USE_FINAL_VALUES;
      }
      if(writeLevel != 2) {
         sim.simOpt |= SIMOPT_SIM_MONITOR_TIME;
      }
      if(runStats) {
         sim.simOpt |= SIMOPT_SIM_STATISTICS;
      }

      if(PrintInterval <= 0) {
         sim.tInc = -PrintInterval;
         simOptSetOutOff(amesys->simVOptions, 1);
      }
      else {
         sim.tInc = PrintInterval;
         simOptSetOutOff(amesys->simVOptions, 0);
      }

      simOptSetSimParam(amesys->simOptions, &sim);

      std.simMode = ((runType & 0x0c) >> 2);
      std.stdOpt = 0;

      if(extraDisconPrints) {
         std.stdOpt |= SIMOPT_STD_DISC_PRINTOUT;
      }
      if(runType & 0x10) {
         std.stdOpt |= SIMOPT_STD_HOLD_INPUTS;
      }
      bool lock_states_enabled;
      SimOptIsLockStatesEnabled(amesys->simOptions, &lock_states_enabled);
      if(lock_states_enabled) {
         std.stdOpt |= SIMOPT_STD_LOCK_STATES;
      }
      bool diagnostics_enabled;
      SimOptIsDiagnosticsEnabled(amesys->simOptions, &diagnostics_enabled);
      if(diagnostics_enabled) {
         std.stdOpt |= SIMOPT_STD_DIAGNOSTICS;
      }
      if(thesolvertype) {
         std.stdOpt |= SIMOPT_STD_CAUTIOUS;
      }
      bool minimalDiscont;
      SimOptIsMinDiscHandlingEnabled(amesys->simOptions, &minimalDiscont);
      if(minimalDiscont) {
         std.stdOpt |= SIMOPT_STD_MIN_DISC_HANDLING;
      }
      if(runType & 0x100) {
         std.stdOpt |= SIMOPT_STD_DISABLE_OPTIMAZED;
      }

      bool activity_enabled;
      SimOptIsActivityEnabled(sim_options, &activity_enabled);

      if(activity_enabled) {
         std.stdOpt |= SIMOPT_STD_ACTIVITY;
      }

      bool power_enabled;
      SimOptIsPowerEnabled(sim_options, &power_enabled);
      if(power_enabled) {
         std.stdOpt |= SIMOPT_STD_POWER;
      }

      bool energy_enabled;
      SimOptIsEnergyEnabled(sim_options, &energy_enabled);
      if(energy_enabled) {
         std.stdOpt |= SIMOPT_STD_ENERGY;
      }
      simOptSetStdParam(amesys->simOptions, &std);
   }
   return res;
}

/* To ensure compliancy with old template and entry points */
static AMESystemError AmesysSetParamAsFixedStep(AMESIMSYSTEM *amesys,
                                       double start_time, int run_type, int solver_type,
                                       int runge_kutta_order, double fixed_h, double printinterval)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   res |= AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      solverSettings solver;
      
      res = AME_NO_ERROR;

      SimOptSetFixedStepIntegratorEnabled(amesys->simOptions, 1);
      SimOptSetFixedH(amesys->simOptions, fixed_h);
      SimOptSetFixedOrder(amesys->simOptions, runge_kutta_order);
      simOptSetFixedType(amesys->simVOptions, solver_type);

      SimOptSetTStart(amesys->simOptions, start_time);
      if(printinterval <= 0) {
         simOptSetOutOff(amesys->simVOptions, 1);
         SimOptSetTInc(amesys->simOptions, -printinterval);
         
      }
      else {
         simOptSetOutOff(amesys->simVOptions, 0);
         SimOptSetTInc(amesys->simOptions,  printinterval);
      }
      simOptSetOneOfSimParam(amesys->simOptions, SIMOPT_SIM_CONTINUATION_RUN, run_type & 0x01);
      simOptSetOneOfSimParam(amesys->simOptions, SIMOPT_SIM_USE_FINAL_VALUES, (run_type & 0x02)>>1);
   }
   return res;
}

#ifndef AME_COSIM

static AMESystemError AmesysInitME(AMESIMSYSTEM *amesys, int withAssembly)
{
   AMESystemError res = AME_NO_ERROR;
   int jump_ret;

   res = AmesysControlRequest(amesys, AME_CMD_INITIALIZE);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   /* Load parameters */
   res = Input(amesys);

   /* Set initial values */
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);

   if(res == AME_NO_ERROR) {
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
         double tStart;
         SimOptGetTStart(amesys->simOptions, &tStart);
         double tFinal;
         SimOptGetTFinal(amesys->simOptions, &tFinal);
         setstarttime_(tStart);
         setfinaltime_(tFinal);

         amesys->first_call = 1;  /* should this be done or not ?*/
         amesys->internal_discont = 1;

         amesys->tlast = TLAST_MIN;

         memset(amesys->ecount,0,amesys->numstates*sizeof(int));
         memset(amesys->dotstates,0,amesys->numstates*sizeof(double));

         PreInitialize(amesys,amesys->states);

#ifndef AME_INPUT_IN_MEMORY
         if( NeedReloadInputFiles() != 0 )
         {
            ClearGPs();
            Input(amesys);
            /* Set initial values */
            modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
            ClearReloadedFiles();
         }
#endif

         Initialize(amesys,amesys->states);

         OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);

         if(withAssembly) {
            doAssembly(amesys);
         }
         amesys->tlast = getstarttime_();
#ifdef AME_PROCESS_TIME
         /* Initialization of time timers */
         ProcessTime(0);
#endif
      }
      else { /* Catch AmeExit */
         res = AME_EXIT_ERROR;
      }
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_INITIALIZE, res);

   if(res == AME_NO_ERROR) {
      /* Go in Run state: simulate acknowledgment of evaluation at t start command */
      res =  AmesysUpdateState(amesys, AME_CMD_TSTART, res);

#if defined(AME_MEMORY_ACCESS_RT_EXPORT)
#if (NB_WATCH_VAR>0)
         RT_Get_Watch_Var(amesys);
#endif
#endif
   }

   return res;
}

static AMESystemError AmesysFuncEvalME(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int *flag)
{
   int jump_ret;
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_FUNCEVAL);

   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
      amesys->doInterpol = 0;
      localFuncEval(amesys, t, y, yprime, delta, flag);
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_FUNCEVAL, res);
   return res;
}

#endif

/****************************/

#define SYSNME RefrigerantLoopStructure_TXVIHXCabin_MonteCarlo_

#if defined(STANDALONESIMULATOR) || defined(OLS)
#include "ame_standalone_simulator.h"

#elif defined(FMICS1)
#include "ame_fmics1.h"
#elif defined(FMICS2)
#include "ame_fmics2.h"
#elif defined(FMICS3)
#include "ame_fmics3.h"
#elif defined(FMIME1) || defined(FMIME2)
#if(AME_MODEL_ISEXPLICIT == 0)
#error "FMI for model exchange is not allowed for implicit model."
#elif defined(AMERT)
#error "FMU for real-time is not allowed for model exchange."
#elif defined(FMIME1)
#include "ame_fmime1.h"
#else
#include "ame_fmime2.h"
#endif
#elif defined(FMIX)
#include "ame_user_cosim.h"

#elif defined(AMEUSERCOSIM)
#include "ame_user_cosim.h"

#elif defined(AME_CS_SIMULINK)
#include "ame_simulink_cosim.h"

#elif defined(AME_ME_SIMULINK)
#include "ame_simulink_me.h"

#elif defined(AME_CS_ADAMS)
#include "ame_adams_cosim.h"

#elif defined(AME_ME_ADAMS)
#include "adams_cont.h"

#elif defined(AME_CS_MOTION)
#include "ame_motion_cosim.h"

#elif defined(AME_ME_MOTION)
#include "ame_motion_me.h"

#elif defined(DISCRETEPART)
#include "ame_discrete_part.h"

#elif defined(GEN_COSIM)
#include "gen_cosim.h"

#elif defined(AME_CS_SIMULINK_SCANER)
#include "ame_simulink_scaner.h"

#else
#error "Unknown interface defined. Cannot generate Amesim model code."
#endif
