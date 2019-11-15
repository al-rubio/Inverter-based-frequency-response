#include "__cf_a1_IEEE9_Ctest.h"
#ifndef RTW_HEADER_a1_IEEE9_Ctest_cap_host_h_
#define RTW_HEADER_a1_IEEE9_Ctest_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
a1_IEEE9_Ctest_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void a1_IEEE9_Ctest_host_InitializeDataMapInfo (
a1_IEEE9_Ctest_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
