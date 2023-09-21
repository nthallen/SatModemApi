#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dhcp_range.h"



dhcp_range_t *dhcp_range_create(
    char *start,
    char *end,
    int lease
    ) {
    dhcp_range_t *dhcp_range_local_var = malloc(sizeof(dhcp_range_t));
    if (!dhcp_range_local_var) {
        return NULL;
    }
    dhcp_range_local_var->start = start;
    dhcp_range_local_var->end = end;
    dhcp_range_local_var->lease = lease;

    return dhcp_range_local_var;
}


void dhcp_range_free(dhcp_range_t *dhcp_range) {
    if(NULL == dhcp_range){
        return ;
    }
    listEntry_t *listEntry;
    if (dhcp_range->start) {
        free(dhcp_range->start);
        dhcp_range->start = NULL;
    }
    if (dhcp_range->end) {
        free(dhcp_range->end);
        dhcp_range->end = NULL;
    }
    free(dhcp_range);
}

cJSON *dhcp_range_convertToJSON(dhcp_range_t *dhcp_range) {
    cJSON *item = cJSON_CreateObject();

    // dhcp_range->start
    if (!dhcp_range->start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "start", dhcp_range->start) == NULL) {
    goto fail; //String
    }


    // dhcp_range->end
    if (!dhcp_range->end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "end", dhcp_range->end) == NULL) {
    goto fail; //String
    }


    // dhcp_range->lease
    if (!dhcp_range->lease) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "lease", dhcp_range->lease) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dhcp_range_t *dhcp_range_parseFromJSON(cJSON *dhcp_rangeJSON){

    dhcp_range_t *dhcp_range_local_var = NULL;

    // dhcp_range->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(dhcp_rangeJSON, "start");
    if (!start) {
        goto end;
    }

    
    if(!cJSON_IsString(start))
    {
    goto end; //String
    }

    // dhcp_range->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(dhcp_rangeJSON, "end");
    if (!end) {
        goto end;
    }

    
    if(!cJSON_IsString(end))
    {
    goto end; //String
    }

    // dhcp_range->lease
    cJSON *lease = cJSON_GetObjectItemCaseSensitive(dhcp_rangeJSON, "lease");
    if (!lease) {
        goto end;
    }

    
    if(!cJSON_IsNumber(lease))
    {
    goto end; //Numeric
    }


    dhcp_range_local_var = dhcp_range_create (
        strdup(start->valuestring),
        strdup(end->valuestring),
        lease->valuedouble
        );

    return dhcp_range_local_var;
end:
    return NULL;

}
