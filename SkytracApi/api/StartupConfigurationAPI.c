#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "StartupConfigurationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Set the startup configuration
//
void
StartupConfigurationAPI_cfgStartupPatch(apiClient_t *apiClient, configuration_request_t * configuration_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cfg/startup")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cfg/startup");




    // Body Param
    cJSON *localVarSingleItemJSON_configuration_request = NULL;
    if (configuration_request != NULL)
    {
        //string
        localVarSingleItemJSON_configuration_request = configuration_request_convertToJSON(configuration_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_configuration_request);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details. - Configuration&#39;s web API version is not supported by the firmware. The major version numbers differ. - Any of the reasons for the 400 response that are documented for other API that modify the configuration ");
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
    if (localVarSingleItemJSON_configuration_request) {
        cJSON_Delete(localVarSingleItemJSON_configuration_request);
        localVarSingleItemJSON_configuration_request = NULL;
    }
    free(localVarBodyParameters);

}

