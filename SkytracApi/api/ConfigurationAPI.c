#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ConfigurationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for ConfigurationAPI_cfgTypeDnsGet

static char* cfgTypeDnsGet__ToString(quicksilver_web_api_cfgTypeDnsGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeDnsGet_type_e cfgTypeDnsGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeDnsGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeDnsGet__convertToJSON(quicksilver_web_api_cfgTypeDnsGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeDnsGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeDnsGet_type_e cfgTypeDnsGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeDnsGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeDnsPatch

static char* cfgTypeDnsPatch__ToString(quicksilver_web_api_cfgTypeDnsPatch_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeDnsPatch_type_e cfgTypeDnsPatch__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeDnsPatch__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeDnsPatch__convertToJSON(quicksilver_web_api_cfgTypeDnsPatch_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeDnsPatch__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeDnsPatch_type_e cfgTypeDnsPatch__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeDnsPatch_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeEthGet

static char* cfgTypeEthGet__ToString(quicksilver_web_api_cfgTypeEthGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeEthGet_type_e cfgTypeEthGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeEthGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeEthGet__convertToJSON(quicksilver_web_api_cfgTypeEthGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeEthGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeEthGet_type_e cfgTypeEthGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeEthGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeEthPatch

static char* cfgTypeEthPatch__ToString(quicksilver_web_api_cfgTypeEthPatch_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeEthPatch_type_e cfgTypeEthPatch__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeEthPatch__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeEthPatch__convertToJSON(quicksilver_web_api_cfgTypeEthPatch_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeEthPatch__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeEthPatch_type_e cfgTypeEthPatch__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeEthPatch_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGet

static char* cfgTypeGet__ToString(quicksilver_web_api_cfgTypeGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGet_type_e cfgTypeGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGet__convertToJSON(quicksilver_web_api_cfgTypeGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGet_type_e cfgTypeGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsDynPlatformModelGet

static char* cfgTypeGpsDynPlatformModelGet__ToString(quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e cfgTypeGpsDynPlatformModelGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsDynPlatformModelGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsDynPlatformModelGet__convertToJSON(quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsDynPlatformModelGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e cfgTypeGpsDynPlatformModelGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsDynPlatformModelPut

static char* cfgTypeGpsDynPlatformModelPut__ToString(quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e cfgTypeGpsDynPlatformModelPut__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsDynPlatformModelPut__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsDynPlatformModelPut__convertToJSON(quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsDynPlatformModelPut__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e cfgTypeGpsDynPlatformModelPut__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsKeepOnGet

static char* cfgTypeGpsKeepOnGet__ToString(quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e cfgTypeGpsKeepOnGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsKeepOnGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsKeepOnGet__convertToJSON(quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsKeepOnGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e cfgTypeGpsKeepOnGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsKeepOnPut

static char* cfgTypeGpsKeepOnPut__ToString(quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e cfgTypeGpsKeepOnPut__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsKeepOnPut__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsKeepOnPut__convertToJSON(quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsKeepOnPut__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e cfgTypeGpsKeepOnPut__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsSyncTimeGet

static char* cfgTypeGpsSyncTimeGet__ToString(quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e cfgTypeGpsSyncTimeGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsSyncTimeGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsSyncTimeGet__convertToJSON(quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsSyncTimeGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e cfgTypeGpsSyncTimeGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeGpsSyncTimePut

static char* cfgTypeGpsSyncTimePut__ToString(quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e cfgTypeGpsSyncTimePut__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeGpsSyncTimePut__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeGpsSyncTimePut__convertToJSON(quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeGpsSyncTimePut__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e cfgTypeGpsSyncTimePut__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeIrdModeGet

static char* cfgTypeIrdModeGet__ToString(quicksilver_web_api_cfgTypeIrdModeGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeIrdModeGet_type_e cfgTypeIrdModeGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeIrdModeGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeIrdModeGet__convertToJSON(quicksilver_web_api_cfgTypeIrdModeGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeIrdModeGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeIrdModeGet_type_e cfgTypeIrdModeGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeIrdModeGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeIrdModePut

static char* cfgTypeIrdModePut__ToString(quicksilver_web_api_cfgTypeIrdModePut_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeIrdModePut_type_e cfgTypeIrdModePut__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeIrdModePut__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeIrdModePut__convertToJSON(quicksilver_web_api_cfgTypeIrdModePut_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeIrdModePut__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeIrdModePut_type_e cfgTypeIrdModePut__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeIrdModePut_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet

static char* cfgTypeOutgoingFirewallRulesGet__ToString(quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e cfgTypeOutgoingFirewallRulesGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeOutgoingFirewallRulesGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeOutgoingFirewallRulesGet__convertToJSON(quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeOutgoingFirewallRulesGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e cfgTypeOutgoingFirewallRulesGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete

static char* cfgTypeOutgoingFirewallRulesNameDelete__ToString(quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e cfgTypeOutgoingFirewallRulesNameDelete__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeOutgoingFirewallRulesNameDelete__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeOutgoingFirewallRulesNameDelete__convertToJSON(quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeOutgoingFirewallRulesNameDelete__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e cfgTypeOutgoingFirewallRulesNameDelete__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch

static char* cfgTypeOutgoingFirewallRulesNamePatch__ToString(quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e cfgTypeOutgoingFirewallRulesNamePatch__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeOutgoingFirewallRulesNamePatch__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeOutgoingFirewallRulesNamePatch__convertToJSON(quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeOutgoingFirewallRulesNamePatch__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e cfgTypeOutgoingFirewallRulesNamePatch__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost

static char* cfgTypeOutgoingFirewallRulesPost__ToString(quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e cfgTypeOutgoingFirewallRulesPost__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeOutgoingFirewallRulesPost__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeOutgoingFirewallRulesPost__convertToJSON(quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeOutgoingFirewallRulesPost__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e cfgTypeOutgoingFirewallRulesPost__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypePortFwdEntriesGet

static char* cfgTypePortFwdEntriesGet__ToString(quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e cfgTypePortFwdEntriesGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypePortFwdEntriesGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypePortFwdEntriesGet__convertToJSON(quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypePortFwdEntriesGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e cfgTypePortFwdEntriesGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypePortFwdEntriesNameDelete

static char* cfgTypePortFwdEntriesNameDelete__ToString(quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e cfgTypePortFwdEntriesNameDelete__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypePortFwdEntriesNameDelete__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypePortFwdEntriesNameDelete__convertToJSON(quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypePortFwdEntriesNameDelete__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e cfgTypePortFwdEntriesNameDelete__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypePortFwdEntriesNamePatch

static char* cfgTypePortFwdEntriesNamePatch__ToString(quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e cfgTypePortFwdEntriesNamePatch__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypePortFwdEntriesNamePatch__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypePortFwdEntriesNamePatch__convertToJSON(quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypePortFwdEntriesNamePatch__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e cfgTypePortFwdEntriesNamePatch__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypePortFwdEntriesPost

static char* cfgTypePortFwdEntriesPost__ToString(quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e cfgTypePortFwdEntriesPost__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypePortFwdEntriesPost__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypePortFwdEntriesPost__convertToJSON(quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypePortFwdEntriesPost__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e cfgTypePortFwdEntriesPost__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeWifiEnabledGet

static char* cfgTypeWifiEnabledGet__ToString(quicksilver_web_api_cfgTypeWifiEnabledGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeWifiEnabledGet_type_e cfgTypeWifiEnabledGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeWifiEnabledGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeWifiEnabledGet__convertToJSON(quicksilver_web_api_cfgTypeWifiEnabledGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeWifiEnabledGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeWifiEnabledGet_type_e cfgTypeWifiEnabledGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeWifiEnabledGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeWifiGet

static char* cfgTypeWifiGet__ToString(quicksilver_web_api_cfgTypeWifiGet_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeWifiGet_type_e cfgTypeWifiGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeWifiGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeWifiGet__convertToJSON(quicksilver_web_api_cfgTypeWifiGet_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeWifiGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeWifiGet_type_e cfgTypeWifiGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeWifiGet_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for ConfigurationAPI_cfgTypeWifiPatch

static char* cfgTypeWifiPatch__ToString(quicksilver_web_api_cfgTypeWifiPatch_type_e ){
    char *Array[] =  { "NULL", "runtime", "startup" };
    return Array[];
}

static quicksilver_web_api_cfgTypeWifiPatch_type_e cfgTypeWifiPatch__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "runtime", "startup" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function cfgTypeWifiPatch__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *cfgTypeWifiPatch__convertToJSON(quicksilver_web_api_cfgTypeWifiPatch_type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function cfgTypeWifiPatch__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_cfgTypeWifiPatch_type_e cfgTypeWifiPatch__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_cfgTypeWifiPatch_type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Get the DNS settings
//
dns_settings_response_t*
ConfigurationAPI_cfgTypeDnsGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/dns")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/dns");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dns_settings_response_t *elementToReturn = dns_settings_response_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the DNS settings
//
void
ConfigurationAPI_cfgTypeDnsPatch(apiClient_t *apiClient, cfg_type_e type , dns_settings_request_t * dns_settings_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/dns")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/dns");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_dns_settings_request = NULL;
    if (dns_settings_request != NULL)
    {
        //string
        localVarSingleItemJSON_dns_settings_request = dns_settings_request_convertToJSON(dns_settings_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dns_settings_request);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details. - One of the addresses is assigned as either the Wi-Fi or Ethernet address. ");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_dns_settings_request) {
        cJSON_Delete(localVarSingleItemJSON_dns_settings_request);
        localVarSingleItemJSON_dns_settings_request = NULL;
    }
    free(localVarBodyParameters);

}

// Get the Ethernet settings
//
eth_settings_response_t*
ConfigurationAPI_cfgTypeEthGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/eth")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/eth");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    eth_settings_response_t *elementToReturn = eth_settings_response_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask
//
void
ConfigurationAPI_cfgTypeEthPatch(apiClient_t *apiClient, cfg_type_e type , eth_settings_request_t * eth_settings_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/eth")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/eth");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_eth_settings_request = NULL;
    if (eth_settings_request != NULL)
    {
        //string
        localVarSingleItemJSON_eth_settings_request = eth_settings_request_convertToJSON(eth_settings_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_eth_settings_request);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - Overlaps with the network defined by the Wi-Fi address and netmask - Address is a set to the network address or broadcast address - Mask is not a valid netmask ");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_eth_settings_request) {
        cJSON_Delete(localVarSingleItemJSON_eth_settings_request);
        localVarSingleItemJSON_eth_settings_request = NULL;
    }
    free(localVarBodyParameters);

}

// Get the complete configuration
//
configuration_response_t*
ConfigurationAPI_cfgTypeGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    configuration_response_t *elementToReturn = configuration_response_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the GPS dynamic platform model setting
//
gps_dyn_platform_model_t*
ConfigurationAPI_cfgTypeGpsDynPlatformModelGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/dynPlatformModel")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/dynPlatformModel");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    gps_dyn_platform_model_t *elementToReturn = gps_dyn_platform_model_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the GPS dynamic platform model setting
//
void
ConfigurationAPI_cfgTypeGpsDynPlatformModelPut(apiClient_t *apiClient, cfg_type_e type ,  body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/dynPlatformModel")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/dynPlatformModel");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
int*
ConfigurationAPI_cfgTypeGpsKeepOnGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/keepOn")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/keepOn");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
void
ConfigurationAPI_cfgTypeGpsKeepOnPut(apiClient_t *apiClient, cfg_type_e type , int body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/keepOn")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/keepOn");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = int_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get the GPS sync time setting.
//
int*
ConfigurationAPI_cfgTypeGpsSyncTimeGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/syncTime")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/syncTime");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.
//
void
ConfigurationAPI_cfgTypeGpsSyncTimePut(apiClient_t *apiClient, cfg_type_e type , int body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/gps/syncTime")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/gps/syncTime");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = int_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get the Iridium mode
//
ird_mode_t*
ConfigurationAPI_cfgTypeIrdModeGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/ird/mode")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/ird/mode");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_mode_t *elementToReturn = ird_mode_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the Iridium mode. Please make sure device's system time is synced before turning on data mode.
//
void
ConfigurationAPI_cfgTypeIrdModePut(apiClient_t *apiClient, cfg_type_e type ,  body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/ird/mode")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/ird/mode");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get the outgoing firewall rules
//
list_t*
ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/outgoingFirewall/rules")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/outgoingFirewall/rules");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ConfigurationAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ConfigurationAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ConfigurationAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a rule from the outgoing firewall
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete(apiClient_t *apiClient, cfg_type_e type , char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/outgoingFirewall/rules/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/outgoingFirewall/rules/{name}");


    // Path Params
    long sizeOfPathParams_type =  + strlen(name)+3 + strlen("{ type }");

    // Path Params
    long sizeOfPathParams_name =  + strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_type);
    free(localVarToReplace_name);

}

// Update an outgoing firewall rule
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch(apiClient_t *apiClient, cfg_type_e type , char * name , patch_outgoing_firewall_rule_t * patch_outgoing_firewall_rule )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/outgoingFirewall/rules/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/outgoingFirewall/rules/{name}");


    // Path Params
    long sizeOfPathParams_type =  + strlen(name)+3 + strlen("{ type }");

    // Path Params
    long sizeOfPathParams_name =  + strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);



    // Body Param
    cJSON *localVarSingleItemJSON_patch_outgoing_firewall_rule = NULL;
    if (patch_outgoing_firewall_rule != NULL)
    {
        //string
        localVarSingleItemJSON_patch_outgoing_firewall_rule = patch_outgoing_firewall_rule_convertToJSON(patch_outgoing_firewall_rule);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_patch_outgoing_firewall_rule);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - A rule with the same name already exists ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The rule does not exist");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    free(localVarToReplace_name);
    if (localVarSingleItemJSON_patch_outgoing_firewall_rule) {
        cJSON_Delete(localVarSingleItemJSON_patch_outgoing_firewall_rule);
        localVarSingleItemJSON_patch_outgoing_firewall_rule = NULL;
    }
    free(localVarBodyParameters);

}

// Inserts a rule into the outgoing firewall
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost(apiClient_t *apiClient, cfg_type_e type , outgoing_firewall_rule_t * outgoing_firewall_rule , char * before )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/outgoingFirewall/rules")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/outgoingFirewall/rules");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // query parameters
    char *keyQuery_before = NULL;
    char * valueQuery_before = NULL;
    keyValuePair_t *keyPairQuery_before = 0;
    if (before)
    {
        keyQuery_before = strdup("before");
        valueQuery_before = strdup((before));
        keyPairQuery_before = keyValuePair_create(keyQuery_before, valueQuery_before);
        list_addElement(localVarQueryParameters,keyPairQuery_before);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_outgoing_firewall_rule = NULL;
    if (outgoing_firewall_rule != NULL)
    {
        //string
        localVarSingleItemJSON_outgoing_firewall_rule = outgoing_firewall_rule_convertToJSON(outgoing_firewall_rule);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_outgoing_firewall_rule);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - A rule with the same name already exists - The rule to insert before does not exist ");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_outgoing_firewall_rule) {
        cJSON_Delete(localVarSingleItemJSON_outgoing_firewall_rule);
        localVarSingleItemJSON_outgoing_firewall_rule = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_before){
        free(keyQuery_before);
        keyQuery_before = NULL;
    }
    if(valueQuery_before){
        free(valueQuery_before);
        valueQuery_before = NULL;
    }
    if(keyPairQuery_before){
        keyValuePair_free(keyPairQuery_before);
        keyPairQuery_before = NULL;
    }
    if(keyQuery_before){
        free(keyQuery_before);
        keyQuery_before = NULL;
    }
    if(keyPairQuery_before){
        keyValuePair_free(keyPairQuery_before);
        keyPairQuery_before = NULL;
    }

}

// Get the port forwarding entries
//
list_t*
ConfigurationAPI_cfgTypePortFwdEntriesGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/portFwd/entries")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/portFwd/entries");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(ConfigurationAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, ConfigurationAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( ConfigurationAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesNameDelete(apiClient_t *apiClient, cfg_type_e type , char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/portFwd/entries/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/portFwd/entries/{name}");


    // Path Params
    long sizeOfPathParams_type =  + strlen(name)+3 + strlen("{ type }");

    // Path Params
    long sizeOfPathParams_name =  + strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_type);
    free(localVarToReplace_name);

}

// Update a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesNamePatch(apiClient_t *apiClient, cfg_type_e type , char * name , patch_port_fwd_entry_t * patch_port_fwd_entry )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/portFwd/entries/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/portFwd/entries/{name}");


    // Path Params
    long sizeOfPathParams_type =  + strlen(name)+3 + strlen("{ type }");

    // Path Params
    long sizeOfPathParams_name =  + strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);



    // Body Param
    cJSON *localVarSingleItemJSON_patch_port_fwd_entry = NULL;
    if (patch_port_fwd_entry != NULL)
    {
        //string
        localVarSingleItemJSON_patch_port_fwd_entry = patch_port_fwd_entry_convertToJSON(patch_port_fwd_entry);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_patch_port_fwd_entry);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - An entry with the same name already exists ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The entry does not exist");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    free(localVarToReplace_name);
    if (localVarSingleItemJSON_patch_port_fwd_entry) {
        cJSON_Delete(localVarSingleItemJSON_patch_port_fwd_entry);
        localVarSingleItemJSON_patch_port_fwd_entry = NULL;
    }
    free(localVarBodyParameters);

}

// Add a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesPost(apiClient_t *apiClient, cfg_type_e type , port_fwd_entry_t * port_fwd_entry )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/portFwd/entries")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/portFwd/entries");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_port_fwd_entry = NULL;
    if (port_fwd_entry != NULL)
    {
        //string
        localVarSingleItemJSON_port_fwd_entry = port_fwd_entry_convertToJSON(port_fwd_entry);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_port_fwd_entry);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - An entry with the same name already exists ");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_port_fwd_entry) {
        cJSON_Delete(localVarSingleItemJSON_port_fwd_entry);
        localVarSingleItemJSON_port_fwd_entry = NULL;
    }
    free(localVarBodyParameters);

}

// Get the Wi-Fi enabled configuration
//
int*
ConfigurationAPI_cfgTypeWifiEnabledGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/wifi/enabled")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/wifi/enabled");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the Wi-Fi configuration
//
wi_fi_settings_response_t*
ConfigurationAPI_cfgTypeWifiGet(apiClient_t *apiClient, cfg_type_e type )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/wifi")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/wifi");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *ConfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    wi_fi_settings_response_t *elementToReturn = wi_fi_settings_response_parseFromJSON(ConfigurationAPIlocalVarJSON);
    cJSON_Delete(ConfigurationAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_type);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the Wi-Fi configuration
//
// Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask.
//
void
ConfigurationAPI_cfgTypeWifiPatch(apiClient_t *apiClient, cfg_type_e type , wi_fi_settings_request_t * wi_fi_settings_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/{type}/wifi")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/{type}/wifi");


    // Path Params
    long sizeOfPathParams_type =  + strlen("{ type }");



    // Body Param
    cJSON *localVarSingleItemJSON_wi_fi_settings_request = NULL;
    if (wi_fi_settings_request != NULL)
    {
        //string
        localVarSingleItemJSON_wi_fi_settings_request = wi_fi_settings_request_convertToJSON(wi_fi_settings_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_wi_fi_settings_request);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - Overlaps with the network defined by the Ethernet address and netmask - Address is a set to the network address or broadcast address - Mask is not a valid netmask ");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_type);
    if (localVarSingleItemJSON_wi_fi_settings_request) {
        cJSON_Delete(localVarSingleItemJSON_wi_fi_settings_request);
        localVarSingleItemJSON_wi_fi_settings_request = NULL;
    }
    free(localVarBodyParameters);

}

