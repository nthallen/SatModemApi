#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "port_fwd_entry.h"


char* protocolport_fwd_entry_ToString(quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocol) {
    char* protocolArray[] =  { "NULL", "tcp", "udp", "both" };
	return protocolArray[protocol];
}

quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocolport_fwd_entry_FromString(char* protocol){
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

port_fwd_entry_t *port_fwd_entry_create(
    char *name,
    double ext_port,
    char *int_addr,
    double int_port,
    quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocol
    ) {
    port_fwd_entry_t *port_fwd_entry_local_var = malloc(sizeof(port_fwd_entry_t));
    if (!port_fwd_entry_local_var) {
        return NULL;
    }
    port_fwd_entry_local_var->name = name;
    port_fwd_entry_local_var->ext_port = ext_port;
    port_fwd_entry_local_var->int_addr = int_addr;
    port_fwd_entry_local_var->int_port = int_port;
    port_fwd_entry_local_var->protocol = protocol;

    return port_fwd_entry_local_var;
}


void port_fwd_entry_free(port_fwd_entry_t *port_fwd_entry) {
    if(NULL == port_fwd_entry){
        return ;
    }
    listEntry_t *listEntry;
    if (port_fwd_entry->name) {
        free(port_fwd_entry->name);
        port_fwd_entry->name = NULL;
    }
    if (port_fwd_entry->int_addr) {
        free(port_fwd_entry->int_addr);
        port_fwd_entry->int_addr = NULL;
    }
    free(port_fwd_entry);
}

cJSON *port_fwd_entry_convertToJSON(port_fwd_entry_t *port_fwd_entry) {
    cJSON *item = cJSON_CreateObject();

    // port_fwd_entry->name
    if (!port_fwd_entry->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", port_fwd_entry->name) == NULL) {
    goto fail; //String
    }


    // port_fwd_entry->ext_port
    if (!port_fwd_entry->ext_port) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "extPort", port_fwd_entry->ext_port) == NULL) {
    goto fail; //Numeric
    }


    // port_fwd_entry->int_addr
    if (!port_fwd_entry->int_addr) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "intAddr", port_fwd_entry->int_addr) == NULL) {
    goto fail; //String
    }


    // port_fwd_entry->int_port
    if (!port_fwd_entry->int_port) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "intPort", port_fwd_entry->int_port) == NULL) {
    goto fail; //Numeric
    }


    // port_fwd_entry->protocol
    if (quicksilver_web_api_port_fwd_entry_PROTOCOL_NULL == port_fwd_entry->protocol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "protocol", protocolport_fwd_entry_ToString(port_fwd_entry->protocol)) == NULL)
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

port_fwd_entry_t *port_fwd_entry_parseFromJSON(cJSON *port_fwd_entryJSON){

    port_fwd_entry_t *port_fwd_entry_local_var = NULL;

    // port_fwd_entry->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(port_fwd_entryJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // port_fwd_entry->ext_port
    cJSON *ext_port = cJSON_GetObjectItemCaseSensitive(port_fwd_entryJSON, "extPort");
    if (!ext_port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(ext_port))
    {
    goto end; //Numeric
    }

    // port_fwd_entry->int_addr
    cJSON *int_addr = cJSON_GetObjectItemCaseSensitive(port_fwd_entryJSON, "intAddr");
    if (!int_addr) {
        goto end;
    }

    
    if(!cJSON_IsString(int_addr))
    {
    goto end; //String
    }

    // port_fwd_entry->int_port
    cJSON *int_port = cJSON_GetObjectItemCaseSensitive(port_fwd_entryJSON, "intPort");
    if (!int_port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(int_port))
    {
    goto end; //Numeric
    }

    // port_fwd_entry->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(port_fwd_entryJSON, "protocol");
    if (!protocol) {
        goto end;
    }

    quicksilver_web_api_port_fwd_entry_PROTOCOL_e protocolVariable;
    
    if(!cJSON_IsString(protocol))
    {
    goto end; //Enum
    }
    protocolVariable = protocolport_fwd_entry_FromString(protocol->valuestring);


    port_fwd_entry_local_var = port_fwd_entry_create (
        strdup(name->valuestring),
        ext_port->valuedouble,
        strdup(int_addr->valuestring),
        int_port->valuedouble,
        protocolVariable
        );

    return port_fwd_entry_local_var;
end:
    return NULL;

}
