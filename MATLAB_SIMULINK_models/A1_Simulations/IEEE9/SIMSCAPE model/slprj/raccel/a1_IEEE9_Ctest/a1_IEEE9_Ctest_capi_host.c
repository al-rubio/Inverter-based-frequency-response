#include "a1_IEEE9_Ctest_capi_host.h"
static a1_IEEE9_Ctest_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        a1_IEEE9_Ctest_host_InitializeDataMapInfo(&(root), "a1_IEEE9_Ctest");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
