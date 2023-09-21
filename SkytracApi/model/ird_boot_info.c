#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_boot_info.h"


char* image_typeird_boot_info_ToString(quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_type) {
    char* image_typeArray[] =  { "NULL", "production", "invalid" };
	return image_typeArray[image_type];
}

quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_typeird_boot_info_FromString(char* image_type){
    int stringToReturn = 0;
    char *image_typeArray[] =  { "NULL", "production", "invalid" };
    size_t sizeofArray = sizeof(image_typeArray) / sizeof(image_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(image_type, image_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* boot_sourceird_boot_info_ToString(quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_source) {
    char* boot_sourceArray[] =  { "NULL", "primary", "fallback", "recovery", "alt" };
	return boot_sourceArray[boot_source];
}

quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_sourceird_boot_info_FromString(char* boot_source){
    int stringToReturn = 0;
    char *boot_sourceArray[] =  { "NULL", "primary", "fallback", "recovery", "alt" };
    size_t sizeofArray = sizeof(boot_sourceArray) / sizeof(boot_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(boot_source, boot_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ird_boot_info_t *ird_boot_info_create(
    quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_type,
    char *version,
    char *build_info,
    quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_source
    ) {
    ird_boot_info_t *ird_boot_info_local_var = malloc(sizeof(ird_boot_info_t));
    if (!ird_boot_info_local_var) {
        return NULL;
    }
    ird_boot_info_local_var->image_type = image_type;
    ird_boot_info_local_var->version = version;
    ird_boot_info_local_var->build_info = build_info;
    ird_boot_info_local_var->boot_source = boot_source;

    return ird_boot_info_local_var;
}


void ird_boot_info_free(ird_boot_info_t *ird_boot_info) {
    if(NULL == ird_boot_info){
        return ;
    }
    listEntry_t *listEntry;
    if (ird_boot_info->version) {
        free(ird_boot_info->version);
        ird_boot_info->version = NULL;
    }
    if (ird_boot_info->build_info) {
        free(ird_boot_info->build_info);
        ird_boot_info->build_info = NULL;
    }
    free(ird_boot_info);
}

cJSON *ird_boot_info_convertToJSON(ird_boot_info_t *ird_boot_info) {
    cJSON *item = cJSON_CreateObject();

    // ird_boot_info->image_type
    if (quicksilver_web_api_ird_boot_info_IMAGETYPE_NULL == ird_boot_info->image_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "imageType", image_typeird_boot_info_ToString(ird_boot_info->image_type)) == NULL)
    {
    goto fail; //Enum
    }


    // ird_boot_info->version
    if (!ird_boot_info->version) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "version", ird_boot_info->version) == NULL) {
    goto fail; //String
    }


    // ird_boot_info->build_info
    if (!ird_boot_info->build_info) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "buildInfo", ird_boot_info->build_info) == NULL) {
    goto fail; //String
    }


    // ird_boot_info->boot_source
    if (quicksilver_web_api_ird_boot_info_BOOTSOURCE_NULL == ird_boot_info->boot_source) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bootSource", boot_sourceird_boot_info_ToString(ird_boot_info->boot_source)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ird_boot_info_t *ird_boot_info_parseFromJSON(cJSON *ird_boot_infoJSON){

    ird_boot_info_t *ird_boot_info_local_var = NULL;

    // ird_boot_info->image_type
    cJSON *image_type = cJSON_GetObjectItemCaseSensitive(ird_boot_infoJSON, "imageType");
    if (!image_type) {
        goto end;
    }

    quicksilver_web_api_ird_boot_info_IMAGETYPE_e image_typeVariable;
    
    if(!cJSON_IsString(image_type))
    {
    goto end; //Enum
    }
    image_typeVariable = image_typeird_boot_info_FromString(image_type->valuestring);

    // ird_boot_info->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(ird_boot_infoJSON, "version");
    if (!version) {
        goto end;
    }

    
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }

    // ird_boot_info->build_info
    cJSON *build_info = cJSON_GetObjectItemCaseSensitive(ird_boot_infoJSON, "buildInfo");
    if (!build_info) {
        goto end;
    }

    
    if(!cJSON_IsString(build_info))
    {
    goto end; //String
    }

    // ird_boot_info->boot_source
    cJSON *boot_source = cJSON_GetObjectItemCaseSensitive(ird_boot_infoJSON, "bootSource");
    if (!boot_source) {
        goto end;
    }

    quicksilver_web_api_ird_boot_info_BOOTSOURCE_e boot_sourceVariable;
    
    if(!cJSON_IsString(boot_source))
    {
    goto end; //Enum
    }
    boot_sourceVariable = boot_sourceird_boot_info_FromString(boot_source->valuestring);


    ird_boot_info_local_var = ird_boot_info_create (
        image_typeVariable,
        strdup(version->valuestring),
        strdup(build_info->valuestring),
        boot_sourceVariable
        );

    return ird_boot_info_local_var;
end:
    return NULL;

}
