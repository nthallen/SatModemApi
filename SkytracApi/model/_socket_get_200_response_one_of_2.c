#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_socket_get_200_response_one_of_2.h"


char* type_socket_get_200_response_one_of_2_ToString(quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type) {
    char* typeArray[] =  { "NULL", "event" };
	return typeArray[type];
}

quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type_socket_get_200_response_one_of_2_FromString(char* type){
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
char* name_socket_get_200_response_one_of_2_ToString(quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name) {
    char* nameArray[] =  { "NULL", "constellationStateUpdated" };
	return nameArray[name];
}

quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name_socket_get_200_response_one_of_2_FromString(char* name){
    int stringToReturn = 0;
    char *nameArray[] =  { "NULL", "constellationStateUpdated" };
    size_t sizeofArray = sizeof(nameArray) / sizeof(nameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(name, nameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_create(
    quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e type,
    quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e name,
    ird_constellation_t *data
    ) {
    _socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_local_var = malloc(sizeof(_socket_get_200_response_one_of_2_t));
    if (!_socket_get_200_response_one_of_2_local_var) {
        return NULL;
    }
    _socket_get_200_response_one_of_2_local_var->type = type;
    _socket_get_200_response_one_of_2_local_var->name = name;
    _socket_get_200_response_one_of_2_local_var->data = data;

    return _socket_get_200_response_one_of_2_local_var;
}


void _socket_get_200_response_one_of_2_free(_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2) {
    if(NULL == _socket_get_200_response_one_of_2){
        return ;
    }
    listEntry_t *listEntry;
    if (_socket_get_200_response_one_of_2->data) {
        ird_constellation_free(_socket_get_200_response_one_of_2->data);
        _socket_get_200_response_one_of_2->data = NULL;
    }
    free(_socket_get_200_response_one_of_2);
}

cJSON *_socket_get_200_response_one_of_2_convertToJSON(_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2) {
    cJSON *item = cJSON_CreateObject();

    // _socket_get_200_response_one_of_2->type
    if(_socket_get_200_response_one_of_2->type != quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_NULL) {
    if(cJSON_AddStringToObject(item, "type", type_socket_get_200_response_one_of_2_ToString(_socket_get_200_response_one_of_2->type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response_one_of_2->name
    if(_socket_get_200_response_one_of_2->name != quicksilver_web_api__socket_get_200_response_one_of_2_NAME_NULL) {
    if(cJSON_AddStringToObject(item, "name", name_socket_get_200_response_one_of_2_ToString(_socket_get_200_response_one_of_2->name)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _socket_get_200_response_one_of_2->data
    if(_socket_get_200_response_one_of_2->data) {
    cJSON *data_local_JSON = ird_constellation_convertToJSON(_socket_get_200_response_one_of_2->data);
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

_socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_parseFromJSON(cJSON *_socket_get_200_response_one_of_2JSON){

    _socket_get_200_response_one_of_2_t *_socket_get_200_response_one_of_2_local_var = NULL;

    // define the local variable for _socket_get_200_response_one_of_2->data
    ird_constellation_t *data_local_nonprim = NULL;

    // _socket_get_200_response_one_of_2->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_of_2JSON, "type");
    quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_e typeVariable;
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = type_socket_get_200_response_one_of_2_FromString(type->valuestring);
    }

    // _socket_get_200_response_one_of_2->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_of_2JSON, "name");
    quicksilver_web_api__socket_get_200_response_one_of_2_NAME_e nameVariable;
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //Enum
    }
    nameVariable = name_socket_get_200_response_one_of_2_FromString(name->valuestring);
    }

    // _socket_get_200_response_one_of_2->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(_socket_get_200_response_one_of_2JSON, "data");
    if (data) { 
    data_local_nonprim = ird_constellation_parseFromJSON(data); //nonprimitive
    }


    _socket_get_200_response_one_of_2_local_var = _socket_get_200_response_one_of_2_create (
        type ? typeVariable : -1,
        name ? nameVariable : -1,
        data ? data_local_nonprim : NULL
        );

    return _socket_get_200_response_one_of_2_local_var;
end:
    if (data_local_nonprim) {
        ird_constellation_free(data_local_nonprim);
        data_local_nonprim = NULL;
    }
    return NULL;

}
