#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "EventsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for EventsAPI_eventsIdSubscriptionsNameGet

static char* eventsIdSubscriptionsNameGet__ToString(quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e ){
    char *Array[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    return Array[];
}

static quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e eventsIdSubscriptionsNameGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function eventsIdSubscriptionsNameGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *eventsIdSubscriptionsNameGet__convertToJSON(quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function eventsIdSubscriptionsNameGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e eventsIdSubscriptionsNameGet__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_eventsIdSubscriptionsNameGet_name_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum  for EventsAPI_eventsIdSubscriptionsNamePut

static char* eventsIdSubscriptionsNamePut__ToString(quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e ){
    char *Array[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    return Array[];
}

static quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e eventsIdSubscriptionsNamePut__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "constellationStateUpdated", "gpsUpdated", "notificationAdded" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function eventsIdSubscriptionsNamePut__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *eventsIdSubscriptionsNamePut__convertToJSON(quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function eventsIdSubscriptionsNamePut__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e eventsIdSubscriptionsNamePut__parseFromJSON(cJSON* JSON) {
    quicksilver_web_api_eventsIdSubscriptionsNamePut_name_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Get the list of events that an event connection is subscribed to
//
list_t*
EventsAPI_eventsIdSubscriptionsGet(apiClient_t *apiClient, char * id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/events/{id}/subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/events/{id}/subscriptions");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


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
    //    printf("%s\n","The event connection does not exist");
    //}
    cJSON *EventsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(EventsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, EventsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( EventsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get whether an event connection is subscribed to a specific event
//
int*
EventsAPI_eventsIdSubscriptionsNameGet(apiClient_t *apiClient, char * id , event_name_e name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/events/{id}/subscriptions/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/events/{id}/subscriptions/{name}");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 +  + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);

    // Path Params
    long sizeOfPathParams_name = strlen(id)+3 +  + strlen("{ name }");


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
    //    printf("%s\n","The event connection or the event name does not exist");
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
    free(localVarToReplace_id);
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set whether an event connection is subscribed to a specific event
//
void
EventsAPI_eventsIdSubscriptionsNamePut(apiClient_t *apiClient, char * id , event_name_e name , int body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/events/{id}/subscriptions/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/events/{id}/subscriptions/{name}");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 +  + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);

    // Path Params
    long sizeOfPathParams_name = strlen(id)+3 +  + strlen("{ name }");



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = int_convertToJSON(body);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The event connection or the event name does not exist");
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
    free(localVarToReplace_id);
    free(localVarToReplace_name);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);

}

// Set the list of events that an event connection is subscribed to
//
void
EventsAPI_eventsIdSubscriptionsPut(apiClient_t *apiClient, char * id , list_t * event_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/events/{id}/subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/events/{id}/subscriptions");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);



    // Body Param
    //notstring
    cJSON *localVar_event_name = NULL;
    cJSON *localVarItemJSON_event_name = NULL;
    cJSON *localVarSingleItemJSON_event_name = NULL;
    if (event_name != NULL)
    {
        localVarItemJSON_event_name = cJSON_CreateObject();
        localVarSingleItemJSON_event_name = cJSON_AddArrayToObject(localVarItemJSON_event_name, "event_name");
        if (localVarSingleItemJSON_event_name == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *event_nameBodyListEntry;
    list_ForEach(event_nameBodyListEntry, event_name)
    {
        localVar_event_name = event_name_convertToJSON(event_nameBodyListEntry->data);
        if(localVar_event_name == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_event_name, localVar_event_name);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_event_name);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Success");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","- Invalid body format. Check schema for details - Unknown event name ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The event connection does not exist");
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
    free(localVarToReplace_id);
    if (localVarItemJSON_event_name) {
        cJSON_Delete(localVarItemJSON_event_name);
        localVarItemJSON_event_name = NULL;
    }
    if (localVarSingleItemJSON_event_name) {
        cJSON_Delete(localVarSingleItemJSON_event_name);
        localVarSingleItemJSON_event_name = NULL;
    }
    if (localVar_event_name) {
        cJSON_Delete(localVar_event_name);
        localVar_event_name = NULL;
    }
    free(localVarBodyParameters);

}

// Start a WebSocket connection
//
// Establishes a WebSocket connection for receiving events messages. When the connection is first made, an \"id\" event will be sent to the connection with the data being a string ID that uniquely identifies the connection and which can be used with the /events API to subscribe or unsubscribe to other events. Initially, no event are subscribed to. 
//
_socket_get_200_response_t*
EventsAPI_socketGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/socket")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/socket");



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
    //    printf("%s\n","Bad Request, can be caused by missing or distorted headers");
    //}
    //nonprimitive not container
    cJSON *EventsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    _socket_get_200_response_t *elementToReturn = _socket_get_200_response_parseFromJSON(EventsAPIlocalVarJSON);
    cJSON_Delete(EventsAPIlocalVarJSON);
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

