#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "outgoing_firewall_rule.h"


char* protocoloutgoing_firewall_rule_ToString(quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocol) {
    char* protocolArray[] =  { "NULL", "any", "tcp", "udp", "icmp" };
	return protocolArray[protocol];
}

quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocoloutgoing_firewall_rule_FromString(char* protocol){
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
char* actionoutgoing_firewall_rule_ToString(quicksilver_web_api_outgoing_firewall_rule_ACTION_e action) {
    char* actionArray[] =  { "NULL", "accept", "drop" };
	return actionArray[action];
}

quicksilver_web_api_outgoing_firewall_rule_ACTION_e actionoutgoing_firewall_rule_FromString(char* action){
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

outgoing_firewall_rule_t *outgoing_firewall_rule_create(
    char *name,
    quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocol,
    char *dest_addr,
    int dest_addr_neg,
    char *dest_port,
    int dest_port_neg,
    quicksilver_web_api_outgoing_firewall_rule_ACTION_e action
    ) {
    outgoing_firewall_rule_t *outgoing_firewall_rule_local_var = malloc(sizeof(outgoing_firewall_rule_t));
    if (!outgoing_firewall_rule_local_var) {
        return NULL;
    }
    outgoing_firewall_rule_local_var->name = name;
    outgoing_firewall_rule_local_var->protocol = protocol;
    outgoing_firewall_rule_local_var->dest_addr = dest_addr;
    outgoing_firewall_rule_local_var->dest_addr_neg = dest_addr_neg;
    outgoing_firewall_rule_local_var->dest_port = dest_port;
    outgoing_firewall_rule_local_var->dest_port_neg = dest_port_neg;
    outgoing_firewall_rule_local_var->action = action;

    return outgoing_firewall_rule_local_var;
}


void outgoing_firewall_rule_free(outgoing_firewall_rule_t *outgoing_firewall_rule) {
    if(NULL == outgoing_firewall_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (outgoing_firewall_rule->name) {
        free(outgoing_firewall_rule->name);
        outgoing_firewall_rule->name = NULL;
    }
    if (outgoing_firewall_rule->dest_addr) {
        free(outgoing_firewall_rule->dest_addr);
        outgoing_firewall_rule->dest_addr = NULL;
    }
    if (outgoing_firewall_rule->dest_port) {
        free(outgoing_firewall_rule->dest_port);
        outgoing_firewall_rule->dest_port = NULL;
    }
    free(outgoing_firewall_rule);
}

cJSON *outgoing_firewall_rule_convertToJSON(outgoing_firewall_rule_t *outgoing_firewall_rule) {
    cJSON *item = cJSON_CreateObject();

    // outgoing_firewall_rule->name
    if (!outgoing_firewall_rule->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", outgoing_firewall_rule->name) == NULL) {
    goto fail; //String
    }


    // outgoing_firewall_rule->protocol
    if (quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_NULL == outgoing_firewall_rule->protocol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "protocol", protocoloutgoing_firewall_rule_ToString(outgoing_firewall_rule->protocol)) == NULL)
    {
    goto fail; //Enum
    }


    // outgoing_firewall_rule->dest_addr
    if (!outgoing_firewall_rule->dest_addr) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "destAddr", outgoing_firewall_rule->dest_addr) == NULL) {
    goto fail; //String
    }


    // outgoing_firewall_rule->dest_addr_neg
    if (!outgoing_firewall_rule->dest_addr_neg) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "destAddrNeg", outgoing_firewall_rule->dest_addr_neg) == NULL) {
    goto fail; //Bool
    }


    // outgoing_firewall_rule->dest_port
    if (!outgoing_firewall_rule->dest_port) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "destPort", outgoing_firewall_rule->dest_port) == NULL) {
    goto fail; //String
    }


    // outgoing_firewall_rule->dest_port_neg
    if (!outgoing_firewall_rule->dest_port_neg) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "destPortNeg", outgoing_firewall_rule->dest_port_neg) == NULL) {
    goto fail; //Bool
    }


    // outgoing_firewall_rule->action
    if (quicksilver_web_api_outgoing_firewall_rule_ACTION_NULL == outgoing_firewall_rule->action) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action", actionoutgoing_firewall_rule_ToString(outgoing_firewall_rule->action)) == NULL)
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

outgoing_firewall_rule_t *outgoing_firewall_rule_parseFromJSON(cJSON *outgoing_firewall_ruleJSON){

    outgoing_firewall_rule_t *outgoing_firewall_rule_local_var = NULL;

    // outgoing_firewall_rule->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // outgoing_firewall_rule->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "protocol");
    if (!protocol) {
        goto end;
    }

    quicksilver_web_api_outgoing_firewall_rule_PROTOCOL_e protocolVariable;
    
    if(!cJSON_IsString(protocol))
    {
    goto end; //Enum
    }
    protocolVariable = protocoloutgoing_firewall_rule_FromString(protocol->valuestring);

    // outgoing_firewall_rule->dest_addr
    cJSON *dest_addr = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "destAddr");
    if (!dest_addr) {
        goto end;
    }

    
    if(!cJSON_IsString(dest_addr))
    {
    goto end; //String
    }

    // outgoing_firewall_rule->dest_addr_neg
    cJSON *dest_addr_neg = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "destAddrNeg");
    if (!dest_addr_neg) {
        goto end;
    }

    
    if(!cJSON_IsBool(dest_addr_neg))
    {
    goto end; //Bool
    }

    // outgoing_firewall_rule->dest_port
    cJSON *dest_port = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "destPort");
    if (!dest_port) {
        goto end;
    }

    
    if(!cJSON_IsString(dest_port))
    {
    goto end; //String
    }

    // outgoing_firewall_rule->dest_port_neg
    cJSON *dest_port_neg = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "destPortNeg");
    if (!dest_port_neg) {
        goto end;
    }

    
    if(!cJSON_IsBool(dest_port_neg))
    {
    goto end; //Bool
    }

    // outgoing_firewall_rule->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(outgoing_firewall_ruleJSON, "action");
    if (!action) {
        goto end;
    }

    quicksilver_web_api_outgoing_firewall_rule_ACTION_e actionVariable;
    
    if(!cJSON_IsString(action))
    {
    goto end; //Enum
    }
    actionVariable = actionoutgoing_firewall_rule_FromString(action->valuestring);


    outgoing_firewall_rule_local_var = outgoing_firewall_rule_create (
        strdup(name->valuestring),
        protocolVariable,
        strdup(dest_addr->valuestring),
        dest_addr_neg->valueint,
        strdup(dest_port->valuestring),
        dest_port_neg->valueint,
        actionVariable
        );

    return outgoing_firewall_rule_local_var;
end:
    return NULL;

}
