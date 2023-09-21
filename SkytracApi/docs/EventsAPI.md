# EventsAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventsAPI_eventsIdSubscriptionsGet**](EventsAPI.md#EventsAPI_eventsIdSubscriptionsGet) | **GET** /events/{id}/subscriptions | Get the list of events that an event connection is subscribed to
[**EventsAPI_eventsIdSubscriptionsNameGet**](EventsAPI.md#EventsAPI_eventsIdSubscriptionsNameGet) | **GET** /events/{id}/subscriptions/{name} | Get whether an event connection is subscribed to a specific event
[**EventsAPI_eventsIdSubscriptionsNamePut**](EventsAPI.md#EventsAPI_eventsIdSubscriptionsNamePut) | **PUT** /events/{id}/subscriptions/{name} | Set whether an event connection is subscribed to a specific event
[**EventsAPI_eventsIdSubscriptionsPut**](EventsAPI.md#EventsAPI_eventsIdSubscriptionsPut) | **PUT** /events/{id}/subscriptions | Set the list of events that an event connection is subscribed to
[**EventsAPI_socketGet**](EventsAPI.md#EventsAPI_socketGet) | **GET** /socket | Start a WebSocket connection


# **EventsAPI_eventsIdSubscriptionsGet**
```c
// Get the list of events that an event connection is subscribed to
//
list_t* EventsAPI_eventsIdSubscriptionsGet(apiClient_t *apiClient, char * id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Id of event connection | 

### Return type

[list_t](event_name.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventsAPI_eventsIdSubscriptionsNameGet**
```c
// Get whether an event connection is subscribed to a specific event
//
int* EventsAPI_eventsIdSubscriptionsNameGet(apiClient_t *apiClient, char * id, event_name_e name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Id of event connection | 
**name** | **event_name_e** | The name of the event | 

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventsAPI_eventsIdSubscriptionsNamePut**
```c
// Set whether an event connection is subscribed to a specific event
//
void EventsAPI_eventsIdSubscriptionsNamePut(apiClient_t *apiClient, char * id, event_name_e name, int body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Id of event connection | 
**name** | **event_name_e** | The name of the event | 
**body** | **int** |  | 

### Return type

void

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventsAPI_eventsIdSubscriptionsPut**
```c
// Set the list of events that an event connection is subscribed to
//
void EventsAPI_eventsIdSubscriptionsPut(apiClient_t *apiClient, char * id, list_t * event_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Id of event connection | 
**event_name** | **[list_t](event_name.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventsAPI_socketGet**
```c
// Start a WebSocket connection
//
// Establishes a WebSocket connection for receiving events messages. When the connection is first made, an \"id\" event will be sent to the connection with the data being a string ID that uniquely identifies the connection and which can be used with the /events API to subscribe or unsubscribe to other events. Initially, no event are subscribed to. 
//
_socket_get_200_response_t* EventsAPI_socketGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[_socket_get_200_response_t](_socket_get_200_response.md) *


### Authorization

[QueryAuthAllRoles](../README.md#QueryAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

