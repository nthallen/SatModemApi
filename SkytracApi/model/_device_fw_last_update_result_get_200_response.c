#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_device_fw_last_update_result_get_200_response.h"



_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_create(
    char *version,
    int success,
    char *error
    ) {
    _device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_local_var = malloc(sizeof(_device_fw_last_update_result_get_200_response_t));
    if (!_device_fw_last_update_result_get_200_response_local_var) {
        return NULL;
    }
    _device_fw_last_update_result_get_200_response_local_var->version = version;
    _device_fw_last_update_result_get_200_response_local_var->success = success;
    _device_fw_last_update_result_get_200_response_local_var->error = error;

    return _device_fw_last_update_result_get_200_response_local_var;
}


void _device_fw_last_update_result_get_200_response_free(_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response) {
    if(NULL == _device_fw_last_update_result_get_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_device_fw_last_update_result_get_200_response->version) {
        free(_device_fw_last_update_result_get_200_response->version);
        _device_fw_last_update_result_get_200_response->version = NULL;
    }
    if (_device_fw_last_update_result_get_200_response->error) {
        free(_device_fw_last_update_result_get_200_response->error);
        _device_fw_last_update_result_get_200_response->error = NULL;
    }
    free(_device_fw_last_update_result_get_200_response);
}

cJSON *_device_fw_last_update_result_get_200_response_convertToJSON(_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response) {
    cJSON *item = cJSON_CreateObject();

    // _device_fw_last_update_result_get_200_response->version
    if(_device_fw_last_update_result_get_200_response->version) {
    if(cJSON_AddStringToObject(item, "version", _device_fw_last_update_result_get_200_response->version) == NULL) {
    goto fail; //String
    }
    }


    // _device_fw_last_update_result_get_200_response->success
    if(_device_fw_last_update_result_get_200_response->success) {
    if(cJSON_AddBoolToObject(item, "success", _device_fw_last_update_result_get_200_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // _device_fw_last_update_result_get_200_response->error
    if(_device_fw_last_update_result_get_200_response->error) {
    if(cJSON_AddStringToObject(item, "error", _device_fw_last_update_result_get_200_response->error) == NULL) {
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

_device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_parseFromJSON(cJSON *_device_fw_last_update_result_get_200_responseJSON){

    _device_fw_last_update_result_get_200_response_t *_device_fw_last_update_result_get_200_response_local_var = NULL;

    // _device_fw_last_update_result_get_200_response->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(_device_fw_last_update_result_get_200_responseJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // _device_fw_last_update_result_get_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(_device_fw_last_update_result_get_200_responseJSON, "success");
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // _device_fw_last_update_result_get_200_response->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(_device_fw_last_update_result_get_200_responseJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }


    _device_fw_last_update_result_get_200_response_local_var = _device_fw_last_update_result_get_200_response_create (
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        success ? success->valueint : 0,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL
        );

    return _device_fw_last_update_result_get_200_response_local_var;
end:
    return NULL;

}
