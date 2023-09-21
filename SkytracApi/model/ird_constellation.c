#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ird_constellation.h"



ird_constellation_t *ird_constellation_create(
    int visible,
    double signal_bars,
    double signal_level
    ) {
    ird_constellation_t *ird_constellation_local_var = malloc(sizeof(ird_constellation_t));
    if (!ird_constellation_local_var) {
        return NULL;
    }
    ird_constellation_local_var->visible = visible;
    ird_constellation_local_var->signal_bars = signal_bars;
    ird_constellation_local_var->signal_level = signal_level;

    return ird_constellation_local_var;
}


void ird_constellation_free(ird_constellation_t *ird_constellation) {
    if(NULL == ird_constellation){
        return ;
    }
    listEntry_t *listEntry;
    free(ird_constellation);
}

cJSON *ird_constellation_convertToJSON(ird_constellation_t *ird_constellation) {
    cJSON *item = cJSON_CreateObject();

    // ird_constellation->visible
    if (!ird_constellation->visible) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "visible", ird_constellation->visible) == NULL) {
    goto fail; //Bool
    }


    // ird_constellation->signal_bars
    if (!ird_constellation->signal_bars) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "signalBars", ird_constellation->signal_bars) == NULL) {
    goto fail; //Numeric
    }


    // ird_constellation->signal_level
    if (!ird_constellation->signal_level) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "signalLevel", ird_constellation->signal_level) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ird_constellation_t *ird_constellation_parseFromJSON(cJSON *ird_constellationJSON){

    ird_constellation_t *ird_constellation_local_var = NULL;

    // ird_constellation->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(ird_constellationJSON, "visible");
    if (!visible) {
        goto end;
    }

    
    if(!cJSON_IsBool(visible))
    {
    goto end; //Bool
    }

    // ird_constellation->signal_bars
    cJSON *signal_bars = cJSON_GetObjectItemCaseSensitive(ird_constellationJSON, "signalBars");
    if (!signal_bars) {
        goto end;
    }

    
    if(!cJSON_IsNumber(signal_bars))
    {
    goto end; //Numeric
    }

    // ird_constellation->signal_level
    cJSON *signal_level = cJSON_GetObjectItemCaseSensitive(ird_constellationJSON, "signalLevel");
    if (!signal_level) {
        goto end;
    }

    
    if(!cJSON_IsNumber(signal_level))
    {
    goto end; //Numeric
    }


    ird_constellation_local_var = ird_constellation_create (
        visible->valueint,
        signal_bars->valuedouble,
        signal_level->valuedouble
        );

    return ird_constellation_local_var;
end:
    return NULL;

}
