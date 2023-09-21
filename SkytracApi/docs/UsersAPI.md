# UsersAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UsersAPI_usersGet**](UsersAPI.md#UsersAPI_usersGet) | **GET** /users | Get all users
[**UsersAPI_usersNameDelete**](UsersAPI.md#UsersAPI_usersNameDelete) | **DELETE** /users/{name} | Delete a user
[**UsersAPI_usersNamePatch**](UsersAPI.md#UsersAPI_usersNamePatch) | **PATCH** /users/{name} | Modify a user
[**UsersAPI_usersNameSessionsDelete**](UsersAPI.md#UsersAPI_usersNameSessionsDelete) | **DELETE** /users/{name}/sessions | Remove all of a user&#39;s sessions
[**UsersAPI_usersPost**](UsersAPI.md#UsersAPI_usersPost) | **POST** /users | Add a user


# **UsersAPI_usersGet**
```c
// Get all users
//
list_t* UsersAPI_usersGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](get_user.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_usersNameDelete**
```c
// Delete a user
//
void UsersAPI_usersNameDelete(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Name of user | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_usersNamePatch**
```c
// Modify a user
//
void UsersAPI_usersNamePatch(apiClient_t *apiClient, char * name, patch_user_t * patch_user);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Name of user | 
**patch_user** | **[patch_user_t](patch_user.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_usersNameSessionsDelete**
```c
// Remove all of a user's sessions
//
void UsersAPI_usersNameSessionsDelete(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Name of user | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsersAPI_usersPost**
```c
// Add a user
//
void UsersAPI_usersPost(apiClient_t *apiClient, post_user_t * post_user);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**post_user** | **[post_user_t](post_user.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

