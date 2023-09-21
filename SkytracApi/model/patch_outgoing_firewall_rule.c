#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_outgoing_firewall_rule.h"


char* protocolpatch_outgoing_firewall_rule_ToString(quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_e protocol) {
    char* protocolArray[] =  { "NULL", "any", "tcp", "udp", "icmp" };
	return protocolArray[protocol];
}

quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_e protocolpatch_outgoing_firewall_rule_FromString(char* protocol){
    int stringToReturn = 0;
    char *protocolArray[] =  { "NULL", "any", "tcp", "udp", "icmp" };
    size_t sizeofArray = sizeof(protocolArray) / sizeof(protocolArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(protocol, protocolArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* actionpatch_outgoing_firewall_rule_ToString(quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_e action) {
    char* actionArray[] =  { "NULL", "accept", "drop" };
	return actionArray[action];
}

quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_e actionpatch_outgoing_firewall_rule_FromString(char* action){
    int stringToReturn = 0;
    char *actionArray[] =  { "NULL", "accept", "drop" };
    size_t sizeofArray = sizeof(actionArray) / sizeof(actionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action, actionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule_create(
    char *name,
    quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_e protocol,
    char *dest_addr,
    int dest_addr_neg,
    char *dest_port,
    int dest_port_neg,
    quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_e action
    ) {
    patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule_local_var = malloc(sizeof(patch_outgoing_firewall_rule_t));
    if (!patch_outgoing_firewall_rule_local_var) {
        return NULL;
    }
    patch_outgoing_firewall_rule_local_var->name = name;
    patch_outgoing_firewall_rule_local_var->protocol = protocol;
    patch_outgoing_firewall_rule_local_var->dest_addr = dest_addr;
    patch_outgoing_firewall_rule_local_var->dest_addr_neg = dest_addr_neg;
    patch_outgoing_firewall_rule_local_var->dest_port = dest_port;
    patch_outgoing_firewall_rule_local_var->dest_port_neg = dest_port_neg;
    patch_outgoing_firewall_rule_local_var->action = action;

    return patch_outgoing_firewall_rule_local_var;
}


void patch_outgoing_firewall_rule_free(patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule) {
    if(NULL == patch_outgoing_firewall_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (patch_outgoing_firewall_rule->name) {
        free(patch_outgoing_firewall_rule->name);
        patch_outgoing_firewall_rule->name = NULL;
    }
    if (patch_outgoing_firewall_rule->dest_addr) {
        free(patch_outgoing_firewall_rule->dest_addr);
        patch_outgoing_firewall_rule->dest_addr = NULL;
    }
    if (patch_outgoing_firewall_rule->dest_port) {
        free(patch_outgoing_firewall_rule->dest_port);
        patch_outgoing_firewall_rule->dest_port = NULL;
    }
    free(patch_outgoing_firewall_rule);
}

cJSON *patch_outgoing_firewall_rule_convertToJSON(patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // patch_outgoing_firewall_rule->name
    if(patch_outgoing_firewall_rule->name) {
    if(cJSON_AddStringToObject(item, "name", patch_outgoing_firewall_rule->name) == NULL) {
    goto fail; //String
    }
    }


    // patch_outgoing_firewall_rule->protocol
    if(patch_outgoing_firewall_rule->protocol != quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_NULL) {
    if(cJSON_AddStringToObject(item, "protocol", protocolpatch_outgoing_firewall_rule_ToString(patch_outgoing_firewall_rule->protocol)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // patch_outgoing_firewall_rule->dest_addr
    if(patch_outgoing_firewall_rule->dest_addr) {
    if(cJSON_AddStringToObject(item, "destAddr", patch_outgoing_firewall_rule->dest_addr) == NULL) {
    goto fail; //String
    }
    }


    // patch_outgoing_firewall_rule->dest_addr_neg
    if(patch_outgoing_firewall_rule->dest_addr_neg) {
    if(cJSON_AddBoolToObject(item, "destAddrNeg", patch_outgoing_firewall_rule->dest_addr_neg) == NULL) {
    goto fail; //Bool
    }
    }


    // patch_outgoing_firewall_rule->dest_port
    if(patch_outgoing_firewall_rule->dest_port) {
    if(cJSON_AddStringToObject(item, "destPort", patch_outgoing_firewall_rule->dest_port) == NULL) {
    goto fail; //String
    }
    }


    // patch_outgoing_firewall_rule->dest_port_neg
    if(patch_outgoing_firewall_rule->dest_port_neg) {
    if(cJSON_AddBoolToObject(item, "destPortNeg", patch_outgoing_firewall_rule->dest_port_neg) == NULL) {
    goto fail; //Bool
    }
    }


    // patch_outgoing_firewall_rule->action
    if(patch_outgoing_firewall_rule->action != quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_NULL) {
    if(cJSON_AddStringToObject(item, "action", actionpatch_outgoing_firewall_rule_ToString(patch_outgoing_firewall_rule->action)) == NULL)
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

patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule_parseFromJSON(cJSON *patch_outgoing_firewall_ruleJSON){

    patch_outgoing_firewall_rule_t *patch_outgoing_firewall_rule_local_var = NULL;

    // patch_outgoing_firewall_rule->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // patch_outgoing_firewall_rule->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "protocol");
    quicksilver_web_api_patch_outgoing_firewall_rule_PROTOCOL_e protocolVariable;
    if (protocol) { 
    if(!cJSON_IsString(protocol))
    {
    goto end; //Enum
    }
    protocolVariable = protocolpatch_outgoing_firewall_rule_FromString(protocol->valuestring);
    }

    // patch_outgoing_firewall_rule->dest_addr
    cJSON *dest_addr = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "destAddr");
    if (dest_addr) { 
    if(!cJSON_IsString(dest_addr) && !cJSON_IsNull(dest_addr))
    {
    goto end; //String
    }
    }

    // patch_outgoing_firewall_rule->dest_addr_neg
    cJSON *dest_addr_neg = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "destAddrNeg");
    if (dest_addr_neg) { 
    if(!cJSON_IsBool(dest_addr_neg))
    {
    goto end; //Bool
    }
    }

    // patch_outgoing_firewall_rule->dest_port
    cJSON *dest_port = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "destPort");
    if (dest_port) { 
    if(!cJSON_IsString(dest_port) && !cJSON_IsNull(dest_port))
    {
    goto end; //String
    }
    }

    // patch_outgoing_firewall_rule->dest_port_neg
    cJSON *dest_port_neg = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "destPortNeg");
    if (dest_port_neg) { 
    if(!cJSON_IsBool(dest_port_neg))
    {
    goto end; //Bool
    }
    }

    // patch_outgoing_firewall_rule->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(patch_outgoing_firewall_ruleJSON, "action");
    quicksilver_web_api_patch_outgoing_firewall_rule_ACTION_e actionVariable;
    if (action) { 
    if(!cJSON_IsString(action))
    {
    goto end; //Enum
    }
    actionVariable = actionpatch_outgoing_firewall_rule_FromString(action->valuestring);
    }


    patch_outgoing_firewall_rule_local_var = patch_outgoing_firewall_rule_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        protocol ? protocolVariable : -1,
        dest_addr && !cJSON_IsNull(dest_addr) ? strdup(dest_addr->valuestring) : NULL,
        dest_addr_neg ? dest_addr_neg->valueint : 0,
        dest_port && !cJSON_IsNull(dest_port) ? strdup(dest_port->valuestring) : NULL,
        dest_port_neg ? dest_port_neg->valueint : 0,
        action ? actionVariable : -1
        );

    return patch_outgoing_firewall_rule_local_var;
end:
    return NULL;

}
