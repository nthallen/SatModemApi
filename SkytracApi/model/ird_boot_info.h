/*
 * ird_boot_info.h
 *
 * 
 */

#ifndef _ird_boot_info_H_
#define _ird_boot_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ird_boot_info_t ird_boot_info_t;


// Enum IMAGETYPE for ird_boot_info

typedef enum  { quicksilver_web_api_ird_boot_info_IMAGETYPE_NULL = 0, quicksilver_web_api_ird_boot_info_IMAGETYPE_production, quicksilver_web_api_ird_boot_info_IMAGETYPE_invalid } quicksilver_web_api_ird_boot_info_IMAGETYPE_e;

char* ird_boot_info_image_type_ToString(quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_type);

quicksilver_web_api_ird_boot_info_IMAGETYPE_e ird_boot_info_image_type_FromString(char* image_type);

// Enum BOOTSOURCE for ird_boot_info

typedef enum  { quicksilver_web_api_ird_boot_info_BOOTSOURCE_NULL = 0, quicksilver_web_api_ird_boot_info_BOOTSOURCE_primary, quicksilver_web_api_ird_boot_info_BOOTSOURCE_fallback, quicksilver_web_api_ird_boot_info_BOOTSOURCE_recovery, quicksilver_web_api_ird_boot_info_BOOTSOURCE_alt } quicksilver_web_api_ird_boot_info_BOOTSOURCE_e;

char* ird_boot_info_boot_source_ToString(quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_source);

quicksilver_web_api_ird_boot_info_BOOTSOURCE_e ird_boot_info_boot_source_FromString(char* boot_source);



typedef struct ird_boot_info_t {
    quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_type; //enum
    char *version; // string
    char *build_info; // string
    quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_source; //enum

} ird_boot_info_t;

ird_boot_info_t *ird_boot_info_create(
    quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_type,
    char *version,
    char *build_info,
    quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_source
);

void ird_boot_info_free(ird_boot_info_t *ird_boot_info);

ird_boot_info_t *ird_boot_info_parseFromJSON(cJSON *ird_boot_infoJSON);

cJSON *ird_boot_info_convertToJSON(ird_boot_info_t *ird_boot_info);

#endif /* _ird_boot_info_H_ */

