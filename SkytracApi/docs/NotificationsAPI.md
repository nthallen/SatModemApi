# NotificationsAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NotificationsAPI_notificationsGet**](NotificationsAPI.md#NotificationsAPI_notificationsGet) | **GET** /notifications | Get the list of notifications
[**NotificationsAPI_notificationsIdDelete**](NotificationsAPI.md#NotificationsAPI_notificationsIdDelete) | **DELETE** /notifications/{id} | Delete a notification


# **NotificationsAPI_notificationsGet**
```c
// Get the list of notifications
//
list_t* NotificationsAPI_notificationsGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](notification.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NotificationsAPI_notificationsIdDelete**
```c
// Delete a notification
//
void NotificationsAPI_notificationsIdDelete(apiClient_t *apiClient, double id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **double** | Id of notification to delete | 

### Return type

void

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

