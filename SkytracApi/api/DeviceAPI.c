#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DeviceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum SLOT for DeviceAPI_deviceIrdFwSlotSlotGet

static char* deviceIrdFwSlotSlotGet_SLOT_ToString(quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e SLOT){
    char *SLOTArray[] =  { "NULL", "primary", "fallback" };
    return SLOTArray[SLOT];
}

static quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e deviceIrdFwSlotSlotGet_SLOT_FromString(char* SLOT){
    int stringToReturn = 0;
    char *SLOTArray[] =  { "NULL", "primary", "fallback" };
    size_t sizeofArray = sizeof(SLOTArray) / sizeof(SLOTArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SLOT, SLOTArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function deviceIrdFwSlotSlotGet_SLOT_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *deviceIrdFwSlotSlotGet_SLOT_convertToJSON(quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e SLOT) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "slot", deviceIrdFwSlotSlotGet_SLOT_ToString(SLOT)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function deviceIrdFwSlotSlotGet_SLOT_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e deviceIrdFwSlotSlotGet_SLOT_parseFromJSON(cJSON* SLOTJSON) {
    quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e SLOTVariable = 0;
    cJSON *SLOTVar = cJSON_GetObjectItemCaseSensitive(SLOTJSON, "slot");
    if(!cJSON_IsString(SLOTVar) || (SLOTVar->valuestring == NULL))
    {
        goto end;
    }
    SLOTVariable = deviceIrdFwSlotSlotGet_SLOT_FromString(SLOTVar->valuestring);
    return SLOTVariable;
end:
    return 0;
}
*/


// Get the user data backup available status
//
int*
DeviceAPI_deviceBackupAvailableGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/backup/available")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/backup/available");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete the user data backup
//
void
DeviceAPI_deviceBackupDataDelete(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/backup/data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/backup/data");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Download the user data backup
//
char*
DeviceAPI_deviceBackupDataGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/backup/data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/backup/data");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated
//
void
DeviceAPI_deviceCertificatePost(apiClient_t *apiClient, certificate_t * certificate )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/certificate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/certificate");




    // Body Param
    cJSON *localVarSingleItemJSON_certificate = NULL;
    if (certificate != NULL)
    {
        //string
        localVarSingleItemJSON_certificate = certificate_convertToJSON(certificate);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_certificate);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_certificate) {
        cJSON_Delete(localVarSingleItemJSON_certificate);
        localVarSingleItemJSON_certificate = NULL;
    }
    free(localVarBodyParameters);

}

// Get a list of currently connected LAN clients. A '?' hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it's DHCP lease since the board's last reboot.
//
list_t*
DeviceAPI_deviceClientsGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/clients")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/clients");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device
//
char*
DeviceAPI_deviceExportUsersGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/exportUsers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/exportUsers");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove the staged device firmware image
//
void
DeviceAPI_deviceFwImageDelete(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/fw/image");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Get info about the currently staged device firmware image
//
char*
DeviceAPI_deviceFwImageGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/fw/image");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","There is no device firmware image staged.");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Upload an image to be used for updating the device firmware
//
void
DeviceAPI_deviceFwImagePut(apiClient_t *apiClient, char * Content_Disposition , binary_t* body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/fw/image");




    // header parameters
    char *keyHeader_Content_Disposition = NULL;
    char * valueHeader_Content_Disposition = 0;
    keyValuePair_t *keyPairHeader_Content_Disposition = 0;
    if (Content_Disposition) {
        keyHeader_Content_Disposition = strdup("Content-Disposition");
        valueHeader_Content_Disposition = strdup((Content_Disposition));
        keyPairHeader_Content_Disposition = keyValuePair_create(keyHeader_Content_Disposition, valueHeader_Content_Disposition);
        list_addElement(localVarHeaderParameters,keyPairHeader_Content_Disposition);
    }


    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = binary_t*_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/octet-stream"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Missing or invalid Content-Disposition header");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    list_freeList(localVarHeaderParameters);
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyHeader_Content_Disposition) {
        free(keyHeader_Content_Disposition);
        keyHeader_Content_Disposition = NULL;
    }
    if (valueHeader_Content_Disposition) {
        free(valueHeader_Content_Disposition);
        valueHeader_Content_Disposition = NULL;
    }
    free(keyPairHeader_Content_Disposition);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Gets the result of the last product firmware update
//
_device_fw_last_update_result_get_200_response_t*
DeviceAPI_deviceFwLastUpdateResultGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/fw/lastUpdateResult")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/fw/lastUpdateResult");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The product firmware has never been updated");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    _device_fw_last_update_result_get_200_response_t *elementToReturn = _device_fw_last_update_result_get_200_response_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update the device firmware using the staged image
//
_device_fw_update_post_200_response_t*
DeviceAPI_deviceFwUpdatePost(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/fw/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/fw/update");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    _device_fw_update_post_200_response_t *elementToReturn = _device_fw_update_post_200_response_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the last GPS fix
//
// This does not turn on the GPS receiver nor does it wait for a fix. It simply returns the last fix obtained from the GPS receiver. The last GPS fix is lost when the device is power cycled.
//
gps_fix_t*
DeviceAPI_deviceGpsFixGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/gps/fix")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/gps/fix");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    gps_fix_t *elementToReturn = gps_fix_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the GPS power state
//
int*
DeviceAPI_deviceGpsPowerGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/gps/power")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/gps/power");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password
//
void
DeviceAPI_deviceImportUsersPost(apiClient_t *apiClient, char * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/importUsers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/importUsers");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details.");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get whether the device booted up in safe mode
//
int*
DeviceAPI_deviceInSafeModeGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/inSafeMode")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/inSafeMode");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Gets information about the device
//
device_info_t*
DeviceAPI_deviceInfoGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/info")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/info");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    device_info_t *elementToReturn = device_info_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the active API version for the Iridium modem
//
char*
DeviceAPI_deviceIrdApiVersionGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/apiVersion")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/apiVersion");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the boot info for the Iridium modem
//
ird_boot_info_t*
DeviceAPI_deviceIrdBootInfoGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/bootInfo")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/bootInfo");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_boot_info_t *elementToReturn = ird_boot_info_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the Iridium constellation state
//
// This is available only when Iridium is in the available state.
//
ird_constellation_t*
DeviceAPI_deviceIrdConstellationGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/constellation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/constellation");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state.");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_constellation_t *elementToReturn = ird_constellation_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove the staged Iridium firmware image
//
void
DeviceAPI_deviceIrdFwImageDelete(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/fw/image");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Get info about the currently staged Iridium firmware image
//
char*
DeviceAPI_deviceIrdFwImageGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/fw/image");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","There is no Iridium firmware image staged");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Upload an image to be used for updating the Iridium firmware
//
void
DeviceAPI_deviceIrdFwImagePut(apiClient_t *apiClient, char * Content_Disposition , binary_t* body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/fw/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/fw/image");




    // header parameters
    char *keyHeader_Content_Disposition = NULL;
    char * valueHeader_Content_Disposition = 0;
    keyValuePair_t *keyPairHeader_Content_Disposition = 0;
    if (Content_Disposition) {
        keyHeader_Content_Disposition = strdup("Content-Disposition");
        valueHeader_Content_Disposition = strdup((Content_Disposition));
        keyPairHeader_Content_Disposition = keyValuePair_create(keyHeader_Content_Disposition, valueHeader_Content_Disposition);
        list_addElement(localVarHeaderParameters,keyPairHeader_Content_Disposition);
    }


    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = binary_t*_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/octet-stream"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Missing or invalid Content-Disposition header");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    list_freeList(localVarHeaderParameters);
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyHeader_Content_Disposition) {
        free(keyHeader_Content_Disposition);
        keyHeader_Content_Disposition = NULL;
    }
    if (valueHeader_Content_Disposition) {
        free(valueHeader_Content_Disposition);
        valueHeader_Content_Disposition = NULL;
    }
    free(keyPairHeader_Content_Disposition);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get information about an Iridium firmware slot
//
// This is available only when Iridium is in the available state.
//
_device_ird_fw_slot__slot__get_200_response_t*
DeviceAPI_deviceIrdFwSlotSlotGet(apiClient_t *apiClient, quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e slot )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/fw/slot/{slot}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/fw/slot/{slot}");


    // Path Params
    long sizeOfPathParams_slot = strlen(slot)+3 + strlen("{ slot }");
    if(slot == NULL) {
        goto end;
    }
    char* localVarToReplace_slot = malloc(sizeOfPathParams_slot);
    sprintf(localVarToReplace_slot, "{%s}", "slot");

    localVarPath = strReplace(localVarPath, localVarToReplace_slot, slot);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state.");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    _device_ird_fw_slot__slot__get_200_response_t *elementToReturn = _device_ird_fw_slot__slot__get_200_response_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_slot);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update the Iridium firmware using the staged image
//
// This is available only when Iridium is in the available, recovery mode or unsupported API state and is in the inactive mode.
//
void
DeviceAPI_deviceIrdFwUpdatePost(apiClient_t *apiClient, char * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/fw/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/fw/update");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = char_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid body format. Check schema for details");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the inactive mode or in one of the following states; available, recovery mode or unsupported API");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Get the hardware info for the Iridium modem
//
// This is available only when Iridium is in the available state.
//
ird_hw_t*
DeviceAPI_deviceIrdHwGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/hw")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/hw");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state.");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_hw_t *elementToReturn = ird_hw_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get HW test report
//
// This is available only when Iridium is in the available state.
//
ird_hw_test_report_t*
DeviceAPI_deviceIrdReportsHwtestGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/reports/hwtest")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/reports/hwtest");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state.");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_hw_test_report_t *elementToReturn = ird_hw_test_report_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Run an Iridium self test
//
// This is available only when Iridium is in the available state and is in the inactive mode.
//
void
DeviceAPI_deviceIrdSelfTestPost(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/selfTest")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/selfTest");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state or not being in the inactive mode.");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Get SIM info
//
// This is available only when Iridium is in the available state.
//
ird_sim_t*
DeviceAPI_deviceIrdSimGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/sim")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/sim");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Could be due to Iridium not being in the available state.");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_sim_t *elementToReturn = ird_sim_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the state for the Iridium modem
//
ird_state_t*
DeviceAPI_deviceIrdStateGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/ird/state")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/ird/state");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ird_state_t *elementToReturn = ird_state_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reboot the device
//
void
DeviceAPI_deviceRebootPost(apiClient_t *apiClient, int recovery )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/reboot")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/reboot");




    // query parameters
    char *keyQuery_recovery = NULL;
    char * valueQuery_recovery = NULL;
    keyValuePair_t *keyPairQuery_recovery = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_recovery = strdup("recovery");
        valueQuery_recovery = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_recovery, MAX_NUMBER_LENGTH, "%d", recovery);
        keyPairQuery_recovery = keyValuePair_create(keyQuery_recovery, valueQuery_recovery);
        list_addElement(localVarQueryParameters,keyPairQuery_recovery);
    }
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    
    
    free(localVarPath);

}

// Reset startup configuration to defaults
//
void
DeviceAPI_deviceResetStartupConfigPost(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/resetStartupConfig")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/resetStartupConfig");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Copy the runtime configuration to the startup configuration
//
void
DeviceAPI_deviceSaveRuntimeConfigPost(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/saveRuntimeConfig")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/saveRuntimeConfig");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Get time info
//
time_info_t*
DeviceAPI_deviceTimeGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/time")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/time");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //nonprimitive not container
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    time_info_t *elementToReturn = time_info_parseFromJSON(DeviceAPIlocalVarJSON);
    cJSON_Delete(DeviceAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageDayGet(apiClient_t *apiClient, char * start , char * end )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage/day")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage/day");




    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = strdup((start));
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_end = NULL;
    char * valueQuery_end = NULL;
    keyValuePair_t *keyPairQuery_end = 0;
    if (end)
    {
        keyQuery_end = strdup("end");
        valueQuery_end = strdup((end));
        keyPairQuery_end = keyValuePair_create(keyQuery_end, valueQuery_end);
        list_addElement(localVarQueryParameters,keyPairQuery_end);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid query format. Check schema for details");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_end){
        free(keyQuery_end);
        keyQuery_end = NULL;
    }
    if(valueQuery_end){
        free(valueQuery_end);
        valueQuery_end = NULL;
    }
    if(keyPairQuery_end){
        keyValuePair_free(keyPairQuery_end);
        keyPairQuery_end = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear
//
void
DeviceAPI_deviceUsageDelete(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage");



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);

}

// Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageFiveGet(apiClient_t *apiClient, char * start , char * end )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage/five")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage/five");




    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = strdup((start));
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_end = NULL;
    char * valueQuery_end = NULL;
    keyValuePair_t *keyPairQuery_end = 0;
    if (end)
    {
        keyQuery_end = strdup("end");
        valueQuery_end = strdup((end));
        keyPairQuery_end = keyValuePair_create(keyQuery_end, valueQuery_end);
        list_addElement(localVarQueryParameters,keyPairQuery_end);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid query format. Check schema for details");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_end){
        free(keyQuery_end);
        keyQuery_end = NULL;
    }
    if(valueQuery_end){
        free(valueQuery_end);
        valueQuery_end = NULL;
    }
    if(keyPairQuery_end){
        keyValuePair_free(keyPairQuery_end);
        keyPairQuery_end = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageHourGet(apiClient_t *apiClient, char * start , char * end )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage/hour")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage/hour");




    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = strdup((start));
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_end = NULL;
    char * valueQuery_end = NULL;
    keyValuePair_t *keyPairQuery_end = 0;
    if (end)
    {
        keyQuery_end = strdup("end");
        valueQuery_end = strdup((end));
        keyPairQuery_end = keyValuePair_create(keyQuery_end, valueQuery_end);
        list_addElement(localVarQueryParameters,keyPairQuery_end);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid query format. Check schema for details");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_end){
        free(keyQuery_end);
        keyQuery_end = NULL;
    }
    if(valueQuery_end){
        free(valueQuery_end);
        valueQuery_end = NULL;
    }
    if(keyPairQuery_end){
        keyValuePair_free(keyPairQuery_end);
        keyPairQuery_end = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t*
DeviceAPI_deviceUsageMonthGet(apiClient_t *apiClient, char * start , char * end )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage/month")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage/month");




    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = strdup((start));
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_end = NULL;
    char * valueQuery_end = NULL;
    keyValuePair_t *keyPairQuery_end = 0;
    if (end)
    {
        keyQuery_end = strdup("end");
        valueQuery_end = strdup((end));
        keyPairQuery_end = keyValuePair_create(keyQuery_end, valueQuery_end);
        list_addElement(localVarQueryParameters,keyPairQuery_end);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid query format. Check schema for details");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_end){
        free(keyQuery_end);
        keyQuery_end = NULL;
    }
    if(valueQuery_end){
        free(valueQuery_end);
        valueQuery_end = NULL;
    }
    if(keyPairQuery_end){
        keyValuePair_free(keyPairQuery_end);
        keyPairQuery_end = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t*
DeviceAPI_deviceUsageYearGet(apiClient_t *apiClient, char * start , char * end )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/usage/year")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/usage/year");




    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = strdup((start));
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_end = NULL;
    char * valueQuery_end = NULL;
    keyValuePair_t *keyPairQuery_end = 0;
    if (end)
    {
        keyQuery_end = strdup("end");
        valueQuery_end = strdup((end));
        keyPairQuery_end = keyValuePair_create(keyQuery_end, valueQuery_end);
        list_addElement(localVarQueryParameters,keyPairQuery_end);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Invalid query format. Check schema for details");
    //}
    cJSON *DeviceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(DeviceAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, DeviceAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( DeviceAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_end){
        free(keyQuery_end);
        keyQuery_end = NULL;
    }
    if(valueQuery_end){
        free(valueQuery_end);
        valueQuery_end = NULL;
    }
    if(keyPairQuery_end){
        keyValuePair_free(keyPairQuery_end);
        keyPairQuery_end = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the Wi-Fi available status
//
int*
DeviceAPI_deviceWifiAvailableGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/device/wifi/available")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/device/wifi/available");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Success");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

