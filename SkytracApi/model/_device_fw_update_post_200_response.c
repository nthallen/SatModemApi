#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "_device_fw_update_post_200_response.h"


char* status_device_fw_update_post_200_response_ToString(quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status) {
    char* statusArray[] =  { "NULL", "started", "partial", "failed", "success" };
	return statusArray[status];
}

quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status_device_fw_update_post_200_response_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "started", "partial", "failed", "success" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

_device_fw_update_post_200_response_t *_device_fw_update_post_200_response_create(
    quicksilver_web_api__device_fw_update_post_200_response_STATUS_e status,
    char *error,
    int will_reboot
    ) {
    _device_fw_update_post_200_response_t *_device_fw_update_post_200_response_local_var = malloc(sizeof(_device_fw_update_post_200_response_t));
    if (!_device_fw_update_post_200_response_local_var) {
        return NULL;
    }
    _device_fw_update_post_200_response_local_var->status = status;
    _device_fw_update_post_200_response_local_var->error = error;
    _device_fw_update_post_200_response_local_var->will_reboot = will_reboot;

    return _device_fw_update_post_200_response_local_var;
}


void _device_fw_update_post_200_response_free(_device_fw_update_post_200_response_t *_device_fw_update_post_200_response) {
    if(NULL == _device_fw_update_post_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (_device_fw_update_post_200_response->error) {
        free(_device_fw_update_post_200_response->error);
        _device_fw_update_post_200_response->error = NULL;
    }
    free(_device_fw_update_post_200_response);
}

cJSON *_device_fw_update_post_200_response_convertToJSON(_device_fw_update_post_200_response_t *_device_fw_update_post_200_response) {
    cJSON *item = cJSON_CreateObject();

    // _device_fw_update_post_200_response->status
    if(_device_fw_update_post_200_response->status != quicksilver_web_api__device_fw_update_post_200_response_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", status_device_fw_update_post_200_response_ToString(_device_fw_update_post_200_response->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // _device_fw_update_post_200_response->error
    if(_device_fw_update_post_200_response->error) {
    if(cJSON_AddStringToObject(item, "error", _device_fw_update_post_200_response->error) == NULL) {
    goto fail; //String
    }
    }


    // _device_fw_update_post_200_response->will_reboot
    if(_device_fw_update_post_200_response->will_reboot) {
    if(cJSON_AddBoolToObject(item, "willReboot", _device_fw_update_post_200_response->will_reboot) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

_device_fw_update_post_200_response_t *_device_fw_update_post_200_response_parseFromJSON(cJSON *_device_fw_update_post_200_responseJSON){

    _device_fw_update_post_200_response_t *_device_fw_update_post_200_response_local_var = NULL;

    // _device_fw_update_post_200_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(_device_fw_update_post_200_responseJSON, "status");
    quicksilver_web_api__device_fw_update_post_200_response_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = status_device_fw_update_post_200_response_FromString(status->valuestring);
    }

    // _device_fw_update_post_200_response->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(_device_fw_update_post_200_responseJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // _device_fw_update_post_200_response->will_reboot
    cJSON *will_reboot = cJSON_GetObjectItemCaseSensitive(_device_fw_update_post_200_responseJSON, "willReboot");
    if (will_reboot) { 
    if(!cJSON_IsBool(will_reboot))
    {
    goto end; //Bool
    }
    }


    _device_fw_update_post_200_response_local_var = _device_fw_update_post_200_response_create (
        status ? statusVariable : -1,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        will_reboot ? will_reboot->valueint : 0
        );

    return _device_fw_update_post_200_response_local_var;
end:
    return NULL;

}
