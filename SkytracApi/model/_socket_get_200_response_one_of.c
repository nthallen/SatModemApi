#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_socket_get_200_response_one_of.h"


char* type_socket_get_200_response_one_of_ToString(quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type) {
    char* typeArray[] =  { "NULL", "event" };
	return typeArray[type];
}

quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type_socket_get_200_response_one_of_FromString(char* type){
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
char* name_socket_get_200_response_one_of_ToString(quicksilver_web_api__socket_get_200_response_one_of_NAME_e name) {
    char* nameArray[] =  { "NULL", "id" };
	return nameArray[name];
}

quicksilver_web_api__socket_get_200_response_one_of_NAME_e name_socket_get_200_response_one_of_FromString(char* name){
    int stringToReturn = 0;
    char *nameArray[] =  { "NULL", "id" };
    size_t sizeofArray = sizeof(nameArray) / sizeof(nameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(name, nameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

_socket_get_200_response_one_of_t *_socket_get_200_response_one_of_create(
    quicksilver_web_api__socket_get_200_response_one_of_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_NAME_e name,
    char *data
    ) {
    _socket_get_200_response_one_of_t *_socket_get_200_response_one_of_local_var = malloc(sizeof(_socket_get_200_response_one_of_t));
    if (!_socket_get_200_response_one_of_local_var) {
        return NULL;
    }
    _socket_get_200_response_one_of_local_var->type = type;
    _socket_get_200_response_one_of_local_var->name = name;
    _socket_get_200_response_one_of_local_var->data = data;

    return _socket_get_200_response_one_of_local_var;
}


void _socket_get_200_response_one_of_free(_socket_get_200_response_one_of_t *_socket_get_200_response_one_of) {
    if(NULL == _socket_get_200_response_one_of){
        return ;
    }
    listEntry_t *listEntry;
    if (_socket_get_200_response_one_of->data) {
        free(_socket_get_200_response_one_of->data);
        _socket_get_200_response_one_of->data = NULL;
    }
    free(_socket_get_200_response_one_of);
}

cJSON *_socket_get_200_response_one_of_convertToJSON(_socket_get_200_response_one_of_t *_socket_get_200_response_one_of) {
    cJSON *item = cJSON_CreateObject();

    // _socket_get_200_response_one_of->type
    if(_socket_get_200_response_one_of->type != quicksilver_web_api__socket_get_200_response_one_of_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", type_socket_get_200_response_one_of_ToString(_socket_get_200_response_one_of->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response_one_of->name
    if(_socket_get_200_response_one_of->name != quicksilver_web_api__socket_get_200_response_one_of_NAME_NULL) {
    if(cJSON_AddStringToObject(item, "name", name_socket_get_200_response_one_of_ToString(_socket_get_200_response_one_of->name)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response_one_of->data
    if(_socket_get_200_response_one_of->data) {
    if(cJSON_AddStringToObject(item, "data", _socket_get_200_response_one_of->data) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_socket_get_200_response_one_of_t *_socket_get_200_response_one_of_parseFromJSON(cJSON *_socket_get_200_response_one_ofJSON){

    _socket_get_200_response_one_of_t *_socket_get_200_response_one_of_local_var = NULL;

    // _socket_get_200_response_one_of->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_ofJSON, "type");
    quicksilver_web_api__socket_get_200_response_one_of_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = type_socket_get_200_response_one_of_FromString(type->valuestring);
    }

    // _socket_get_200_response_one_of->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_ofJSON, "name");
    quicksilver_web_api__socket_get_200_response_one_of_NAME_e nameVariable;
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //Enum
    }
    nameVariable = name_socket_get_200_response_one_of_FromString(name->valuestring);
    }

    // _socket_get_200_response_one_of->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_ofJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }


    _socket_get_200_response_one_of_local_var = _socket_get_200_response_one_of_create (
        type ? typeVariable : -1,
        name ? nameVariable : -1,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL
        );

    return _socket_get_200_response_one_of_local_var;
end:
    return NULL;

}
