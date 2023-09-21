#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_device_ird_fw_slot__slot__get_200_response.h"



_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_create(
    int valid,
    char *version,
    char *build_info,
    char *hash
    ) {
    _device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_local_var = malloc(sizeof(_device_ird_fw_slot__slot__get_200_response_t));
    if (!_device_ird_fw_slot__slot__get_200_response_local_var) {
        return NULL;
    }
    _device_ird_fw_slot__slot__get_200_response_local_var->valid = valid;
    _device_ird_fw_slot__slot__get_200_response_local_var->version = version;
    _device_ird_fw_slot__slot__get_200_response_local_var->build_info = build_info;
    _device_ird_fw_slot__slot__get_200_response_local_var->hash = hash;

    return _device_ird_fw_slot__slot__get_200_response_local_var;
}


void _device_ird_fw_slot__slot__get_200_response_free(_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response) {
    if(NULL == _device_ird_fw_slot__slot__get_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_device_ird_fw_slot__slot__get_200_response->version) {
        free(_device_ird_fw_slot__slot__get_200_response->version);
        _device_ird_fw_slot__slot__get_200_response->version = NULL;
    }
    if (_device_ird_fw_slot__slot__get_200_response->build_info) {
        free(_device_ird_fw_slot__slot__get_200_response->build_info);
        _device_ird_fw_slot__slot__get_200_response->build_info = NULL;
    }
    if (_device_ird_fw_slot__slot__get_200_response->hash) {
        free(_device_ird_fw_slot__slot__get_200_response->hash);
        _device_ird_fw_slot__slot__get_200_response->hash = NULL;
    }
    free(_device_ird_fw_slot__slot__get_200_response);
}

cJSON *_device_ird_fw_slot__slot__get_200_response_convertToJSON(_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response) {
    cJSON *item = cJSON_CreateObject();

    // _device_ird_fw_slot__slot__get_200_response->valid
    if(_device_ird_fw_slot__slot__get_200_response->valid) {
    if(cJSON_AddBoolToObject(item, "valid", _device_ird_fw_slot__slot__get_200_response->valid) == NULL) {
    goto fail; //Bool
    }
    }


    // _device_ird_fw_slot__slot__get_200_response->version
    if(_device_ird_fw_slot__slot__get_200_response->version) {
    if(cJSON_AddStringToObject(item, "version", _device_ird_fw_slot__slot__get_200_response->version) == NULL) {
    goto fail; //String
    }
    }


    // _device_ird_fw_slot__slot__get_200_response->build_info
    if(_device_ird_fw_slot__slot__get_200_response->build_info) {
    if(cJSON_AddStringToObject(item, "buildInfo", _device_ird_fw_slot__slot__get_200_response->build_info) == NULL) {
    goto fail; //String
    }
    }


    // _device_ird_fw_slot__slot__get_200_response->hash
    if(_device_ird_fw_slot__slot__get_200_response->hash) {
    if(cJSON_AddStringToObject(item, "hash", _device_ird_fw_slot__slot__get_200_response->hash) == NULL) {
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

_device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_parseFromJSON(cJSON *_device_ird_fw_slot__slot__get_200_responseJSON){

    _device_ird_fw_slot__slot__get_200_response_t *_device_ird_fw_slot__slot__get_200_response_local_var = NULL;

    // _device_ird_fw_slot__slot__get_200_response->valid
    cJSON *valid = cJSON_GetObjectItemCaseSensitive(_device_ird_fw_slot__slot__get_200_responseJSON, "valid");
    if (valid) { 
    if(!cJSON_IsBool(valid))
    {
    goto end; //Bool
    }
    }

    // _device_ird_fw_slot__slot__get_200_response->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(_device_ird_fw_slot__slot__get_200_responseJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // _device_ird_fw_slot__slot__get_200_response->build_info
    cJSON *build_info = cJSON_GetObjectItemCaseSensitive(_device_ird_fw_slot__slot__get_200_responseJSON, "buildInfo");
    if (build_info) { 
    if(!cJSON_IsString(build_info) && !cJSON_IsNull(build_info))
    {
    goto end; //String
    }
    }

    // _device_ird_fw_slot__slot__get_200_response->hash
    cJSON *hash = cJSON_GetObjectItemCaseSensitive(_device_ird_fw_slot__slot__get_200_responseJSON, "hash");
    if (hash) { 
    if(!cJSON_IsString(hash) && !cJSON_IsNull(hash))
    {
    goto end; //String
    }
    }


    _device_ird_fw_slot__slot__get_200_response_local_var = _device_ird_fw_slot__slot__get_200_response_create (
        valid ? valid->valueint : 0,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        build_info && !cJSON_IsNull(build_info) ? strdup(build_info->valuestring) : NULL,
        hash && !cJSON_IsNull(hash) ? strdup(hash->valuestring) : NULL
        );

    return _device_ird_fw_slot__slot__get_200_response_local_var;
end:
    return NULL;

}
