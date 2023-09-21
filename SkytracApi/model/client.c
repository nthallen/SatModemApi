#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "client.h"



client_t *client_create(
    char *intf,
    char *mac,
    char *hostname,
    char *addr
    ) {
    client_t *client_local_var = malloc(sizeof(client_t));
    if (!client_local_var) {
        return NULL;
    }
    client_local_var->intf = intf;
    client_local_var->mac = mac;
    client_local_var->hostname = hostname;
    client_local_var->addr = addr;

    return client_local_var;
}


void client_free(client_t *client) {
    if(NULL == client){
        return ;
    }
    listEntry_t *listEntry;
    if (client->intf) {
        free(client->intf);
        client->intf = NULL;
    }
    if (client->mac) {
        free(client->mac);
        client->mac = NULL;
    }
    if (client->hostname) {
        free(client->hostname);
        client->hostname = NULL;
    }
    if (client->addr) {
        free(client->addr);
        client->addr = NULL;
    }
    free(client);
}

cJSON *client_convertToJSON(client_t *client) {
    cJSON *item = cJSON_CreateObject();

    // client->intf
    if (!client->intf) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "intf", client->intf) == NULL) {
    goto fail; //String
    }


    // client->mac
    if (!client->mac) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mac", client->mac) == NULL) {
    goto fail; //String
    }


    // client->hostname
    if (!client->hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hostname", client->hostname) == NULL) {
    goto fail; //String
    }


    // client->addr
    if (!client->addr) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "addr", client->addr) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

client_t *client_parseFromJSON(cJSON *clientJSON){

    client_t *client_local_var = NULL;

    // client->intf
    cJSON *intf = cJSON_GetObjectItemCaseSensitive(clientJSON, "intf");
    if (!intf) {
        goto end;
    }

    
    if(!cJSON_IsString(intf))
    {
    goto end; //String
    }

    // client->mac
    cJSON *mac = cJSON_GetObjectItemCaseSensitive(clientJSON, "mac");
    if (!mac) {
        goto end;
    }

    
    if(!cJSON_IsString(mac))
    {
    goto end; //String
    }

    // client->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(clientJSON, "hostname");
    if (!hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }

    // client->addr
    cJSON *addr = cJSON_GetObjectItemCaseSensitive(clientJSON, "addr");
    if (!addr) {
        goto end;
    }

    
    if(!cJSON_IsString(addr))
    {
    goto end; //String
    }


    client_local_var = client_create (
        strdup(intf->valuestring),
        strdup(mac->valuestring),
        strdup(hostname->valuestring),
        strdup(addr->valuestring)
        );

    return client_local_var;
end:
    return NULL;

}
