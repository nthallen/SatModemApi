#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_socket_get_200_response.h"


char* type_socket_get_200_response_ToString(quicksilver_web_api__socket_get_200_response_TYPE_e type) {
    char* typeArray[] =  { "NULL", "event" };
	return typeArray[type];
}

quicksilver_web_api__socket_get_200_response_TYPE_e type_socket_get_200_response_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "event" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* name_socket_get_200_response_ToString(quicksilver_web_api__socket_get_200_response_NAME_e name) {
    char* nameArray[] =  { "NULL", "gpsUpdated" };
	return nameArray[name];
}

quicksilver_web_api__socket_get_200_response_NAME_e name_socket_get_200_response_FromString(char* name){
    int stringToReturn = 0;
    char *nameArray[] =  { "NULL", "gpsUpdated" };
    size_t sizeofArray = sizeof(nameArray) / sizeof(nameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(name, nameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

_socket_get_200_response_t *_socket_get_200_response_create(
    quicksilver_web_api__socket_get_200_response_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_NAME_e name,
    gps_fix_t *data
    ) {
    _socket_get_200_response_t *_socket_get_200_response_local_var = malloc(sizeof(_socket_get_200_response_t));
    if (!_socket_get_200_response_local_var) {
        return NULL;
    }
    _socket_get_200_response_local_var->type = type;
    _socket_get_200_response_local_var->name = name;
    _socket_get_200_response_local_var->data = data;

    return _socket_get_200_response_local_var;
}


void _socket_get_200_response_free(_socket_get_200_response_t *_socket_get_200_response) {
    if(NULL == _socket_get_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_socket_get_200_response->data) {
        gps_fix_free(_socket_get_200_response->data);
        _socket_get_200_response->data = NULL;
    }
    free(_socket_get_200_response);
}

cJSON *_socket_get_200_response_convertToJSON(_socket_get_200_response_t *_socket_get_200_response) {
    cJSON *item = cJSON_CreateObject();

    // _socket_get_200_response->type
    if(_socket_get_200_response->type != quicksilver_web_api__socket_get_200_response_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", type_socket_get_200_response_ToString(_socket_get_200_response->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response->name
    if(_socket_get_200_response->name != quicksilver_web_api__socket_get_200_response_NAME_NULL) {
    if(cJSON_AddStringToObject(item, "name", name_socket_get_200_response_ToString(_socket_get_200_response->name)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response->data
    if(_socket_get_200_response->data) {
    cJSON *data_local_JSON = gps_fix_convertToJSON(_socket_get_200_response->data);
    if(data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "data", data_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_socket_get_200_response_t *_socket_get_200_response_parseFromJSON(cJSON *_socket_get_200_responseJSON){

    _socket_get_200_response_t *_socket_get_200_response_local_var = NULL;

    // define the local variable for _socket_get_200_response->data
    gps_fix_t *data_local_nonprim = NULL;

    // _socket_get_200_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(_socket_get_200_responseJSON, "type");
    quicksilver_web_api__socket_get_200_response_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = type_socket_get_200_response_FromString(type->valuestring);
    }

    // _socket_get_200_response->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(_socket_get_200_responseJSON, "name");
    quicksilver_web_api__socket_get_200_response_NAME_e nameVariable;
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //Enum
    }
    nameVariable = name_socket_get_200_response_FromString(name->valuestring);
    }

    // _socket_get_200_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(_socket_get_200_responseJSON, "data");
    if (data) { 
    data_local_nonprim = gps_fix_parseFromJSON(data); //nonprimitive
    }


    _socket_get_200_response_local_var = _socket_get_200_response_create (
        type ? typeVariable : -1,
        name ? nameVariable : -1,
        data ? data_local_nonprim : NULL
        );

    return _socket_get_200_response_local_var;
end:
    if (data_local_nonprim) {
        gps_fix_free(data_local_nonprim);
        data_local_nonprim = NULL;
    }
    return NULL;

}
