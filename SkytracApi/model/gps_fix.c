#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gps_fix.h"


char* typegps_fix_ToString(quicksilver_web_api_gps_fix_TYPE_e type) {
    char* typeArray[] =  { "NULL", "invalid", "time only", "dead reckoning", "2D", "3D" };
	return typeArray[type];
}

quicksilver_web_api_gps_fix_TYPE_e typegps_fix_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "invalid", "time only", "dead reckoning", "2D", "3D" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

gps_fix_t *gps_fix_create(
    double time,
    quicksilver_web_api_gps_fix_TYPE_e type,
    double lat,
    double lng,
    double alt,
    double gvel,
    double vvel,
    double hdop,
    double vdop,
    double sats
    ) {
    gps_fix_t *gps_fix_local_var = malloc(sizeof(gps_fix_t));
    if (!gps_fix_local_var) {
        return NULL;
    }
    gps_fix_local_var->time = time;
    gps_fix_local_var->type = type;
    gps_fix_local_var->lat = lat;
    gps_fix_local_var->lng = lng;
    gps_fix_local_var->alt = alt;
    gps_fix_local_var->gvel = gvel;
    gps_fix_local_var->vvel = vvel;
    gps_fix_local_var->hdop = hdop;
    gps_fix_local_var->vdop = vdop;
    gps_fix_local_var->sats = sats;

    return gps_fix_local_var;
}


void gps_fix_free(gps_fix_t *gps_fix) {
    if(NULL == gps_fix){
        return ;
    }
    listEntry_t *listEntry;
    free(gps_fix);
}

cJSON *gps_fix_convertToJSON(gps_fix_t *gps_fix) {
    cJSON *item = cJSON_CreateObject();

    // gps_fix->time
    if (!gps_fix->time) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "time", gps_fix->time) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->type
    if (quicksilver_web_api_gps_fix_TYPE_NULL == gps_fix->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", typegps_fix_ToString(gps_fix->type)) == NULL)
    {
    goto fail; //Enum
    }


    // gps_fix->lat
    if (!gps_fix->lat) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "lat", gps_fix->lat) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->lng
    if (!gps_fix->lng) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "lng", gps_fix->lng) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->alt
    if (!gps_fix->alt) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "alt", gps_fix->alt) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->gvel
    if (!gps_fix->gvel) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "gvel", gps_fix->gvel) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->vvel
    if (!gps_fix->vvel) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vvel", gps_fix->vvel) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->hdop
    if (!gps_fix->hdop) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "hdop", gps_fix->hdop) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->vdop
    if (!gps_fix->vdop) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vdop", gps_fix->vdop) == NULL) {
    goto fail; //Numeric
    }


    // gps_fix->sats
    if (!gps_fix->sats) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sats", gps_fix->sats) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

gps_fix_t *gps_fix_parseFromJSON(cJSON *gps_fixJSON){

    gps_fix_t *gps_fix_local_var = NULL;

    // gps_fix->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "time");
    if (!time) {
        goto end;
    }

    
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }

    // gps_fix->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "type");
    if (!type) {
        goto end;
    }

    quicksilver_web_api_gps_fix_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = typegps_fix_FromString(type->valuestring);

    // gps_fix->lat
    cJSON *lat = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "lat");
    if (!lat) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lat))
    {
    goto end; //Numeric
    }

    // gps_fix->lng
    cJSON *lng = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "lng");
    if (!lng) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lng))
    {
    goto end; //Numeric
    }

    // gps_fix->alt
    cJSON *alt = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "alt");
    if (!alt) {
        goto end;
    }

    
    if(!cJSON_IsNumber(alt))
    {
    goto end; //Numeric
    }

    // gps_fix->gvel
    cJSON *gvel = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "gvel");
    if (!gvel) {
        goto end;
    }

    
    if(!cJSON_IsNumber(gvel))
    {
    goto end; //Numeric
    }

    // gps_fix->vvel
    cJSON *vvel = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "vvel");
    if (!vvel) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vvel))
    {
    goto end; //Numeric
    }

    // gps_fix->hdop
    cJSON *hdop = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "hdop");
    if (!hdop) {
        goto end;
    }

    
    if(!cJSON_IsNumber(hdop))
    {
    goto end; //Numeric
    }

    // gps_fix->vdop
    cJSON *vdop = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "vdop");
    if (!vdop) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vdop))
    {
    goto end; //Numeric
    }

    // gps_fix->sats
    cJSON *sats = cJSON_GetObjectItemCaseSensitive(gps_fixJSON, "sats");
    if (!sats) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sats))
    {
    goto end; //Numeric
    }


    gps_fix_local_var = gps_fix_create (
        time->valuedouble,
        typeVariable,
        lat->valuedouble,
        lng->valuedouble,
        alt->valuedouble,
        gvel->valuedouble,
        vvel->valuedouble,
        hdop->valuedouble,
        vdop->valuedouble,
        sats->valuedouble
        );

    return gps_fix_local_var;
end:
    return NULL;

}
