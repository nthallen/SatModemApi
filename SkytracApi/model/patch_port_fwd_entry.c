#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_port_fwd_entry.h"


char* protocolpatch_port_fwd_entry_ToString(quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocol) {
    char* protocolArray[] =  { "NULL", "tcp", "udp", "both" };
	return protocolArray[protocol];
}

quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocolpatch_port_fwd_entry_FromString(char* protocol){
    int stringToReturn = 0;
    char *protocolArray[] =  { "NULL", "tcp", "udp", "both" };
    size_t sizeofArray = sizeof(protocolArray) / sizeof(protocolArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(protocol, protocolArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

patch_port_fwd_entry_t *patch_port_fwd_entry_create(
    char *name,
    double ext_port,
    char *int_addr,
    double int_port,
    quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocol
    ) {
    patch_port_fwd_entry_t *patch_port_fwd_entry_local_var = malloc(sizeof(patch_port_fwd_entry_t));
    if (!patch_port_fwd_entry_local_var) {
        return NULL;
    }
    patch_port_fwd_entry_local_var->name = name;
    patch_port_fwd_entry_local_var->ext_port = ext_port;
    patch_port_fwd_entry_local_var->int_addr = int_addr;
    patch_port_fwd_entry_local_var->int_port = int_port;
    patch_port_fwd_entry_local_var->protocol = protocol;

    return patch_port_fwd_entry_local_var;
}


void patch_port_fwd_entry_free(patch_port_fwd_entry_t *patch_port_fwd_entry) {
    if(NULL == patch_port_fwd_entry){
        return ;
    }
    listEntry_t *listEntry;
    if (patch_port_fwd_entry->name) {
        free(patch_port_fwd_entry->name);
        patch_port_fwd_entry->name = NULL;
    }
    if (patch_port_fwd_entry->int_addr) {
        free(patch_port_fwd_entry->int_addr);
        patch_port_fwd_entry->int_addr = NULL;
    }
    free(patch_port_fwd_entry);
}

cJSON *patch_port_fwd_entry_convertToJSON(patch_port_fwd_entry_t *patch_port_fwd_entry) {
    cJSON *item = cJSON_CreateObject();

    // patch_port_fwd_entry->name
    if(patch_port_fwd_entry->name) {
    if(cJSON_AddStringToObject(item, "name", patch_port_fwd_entry->name) == NULL) {
    goto fail; //String
    }
    }


    // patch_port_fwd_entry->ext_port
    if(patch_port_fwd_entry->ext_port) {
    if(cJSON_AddNumberToObject(item, "extPort", patch_port_fwd_entry->ext_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // patch_port_fwd_entry->int_addr
    if(patch_port_fwd_entry->int_addr) {
    if(cJSON_AddStringToObject(item, "intAddr", patch_port_fwd_entry->int_addr) == NULL) {
    goto fail; //String
    }
    }


    // patch_port_fwd_entry->int_port
    if(patch_port_fwd_entry->int_port) {
    if(cJSON_AddNumberToObject(item, "intPort", patch_port_fwd_entry->int_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // patch_port_fwd_entry->protocol
    if(patch_port_fwd_entry->protocol != quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_NULL) {
    if(cJSON_AddStringToObject(item, "protocol", protocolpatch_port_fwd_entry_ToString(patch_port_fwd_entry->protocol)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

patch_port_fwd_entry_t *patch_port_fwd_entry_parseFromJSON(cJSON *patch_port_fwd_entryJSON){

    patch_port_fwd_entry_t *patch_port_fwd_entry_local_var = NULL;

    // patch_port_fwd_entry->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(patch_port_fwd_entryJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // patch_port_fwd_entry->ext_port
    cJSON *ext_port = cJSON_GetObjectItemCaseSensitive(patch_port_fwd_entryJSON, "extPort");
    if (ext_port) { 
    if(!cJSON_IsNumber(ext_port))
    {
    goto end; //Numeric
    }
    }

    // patch_port_fwd_entry->int_addr
    cJSON *int_addr = cJSON_GetObjectItemCaseSensitive(patch_port_fwd_entryJSON, "intAddr");
    if (int_addr) { 
    if(!cJSON_IsString(int_addr) && !cJSON_IsNull(int_addr))
    {
    goto end; //String
    }
    }

    // patch_port_fwd_entry->int_port
    cJSON *int_port = cJSON_GetObjectItemCaseSensitive(patch_port_fwd_entryJSON, "intPort");
    if (int_port) { 
    if(!cJSON_IsNumber(int_port))
    {
    goto end; //Numeric
    }
    }

    // patch_port_fwd_entry->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(patch_port_fwd_entryJSON, "protocol");
    quicksilver_web_api_patch_port_fwd_entry_PROTOCOL_e protocolVariable;
    if (protocol) { 
    if(!cJSON_IsString(protocol))
    {
    goto end; //Enum
    }
    protocolVariable = protocolpatch_port_fwd_entry_FromString(protocol->valuestring);
    }


    patch_port_fwd_entry_local_var = patch_port_fwd_entry_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        ext_port ? ext_port->valuedouble : 0,
        int_addr && !cJSON_IsNull(int_addr) ? strdup(int_addr->valuestring) : NULL,
        int_port ? int_port->valuedouble : 0,
        protocol ? protocolVariable : -1
        );

    return patch_port_fwd_entry_local_var;
end:
    return NULL;

}
