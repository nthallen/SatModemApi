# UserAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UserAPI_userChangePasswordPost**](UserAPI.md#UserAPI_userChangePasswordPost) | **POST** /user/changePassword | Change the session owner&#39;s password
[**UserAPI_userGet**](UserAPI.md#UserAPI_userGet) | **GET** /user | Get the session owner
[**UserAPI_userSessionsDelete**](UserAPI.md#UserAPI_userSessionsDelete) | **DELETE** /user/sessions | Delete all of the sessions for the session owner. Not just this session.


# **UserAPI_userChangePasswordPost**
```c
// Change the session owner's password
//
void UserAPI_userChangePasswordPost(apiClient_t *apiClient, _user_change_password_post_request_t * _user_change_password_post_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**_user_change_password_post_request** | **[_user_change_password_post_request_t](_user_change_password_post_request.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UserAPI_userGet**
```c
// Get the session owner
//
get_user_t* UserAPI_userGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_user_t](get_user.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UserAPI_userSessionsDelete**
```c
// Delete all of the sessions for the session owner. Not just this session.
//
void UserAPI_userSessionsDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

