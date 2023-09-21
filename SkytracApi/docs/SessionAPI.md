# SessionAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SessionAPI_sessionDelete**](SessionAPI.md#SessionAPI_sessionDelete) | **DELETE** /session | Delete the session so that the tokens will no longer work
[**SessionAPI_sessionRefreshPost**](SessionAPI.md#SessionAPI_sessionRefreshPost) | **POST** /session/refresh | Generate new tokens for the current session and resets the session timeout
[**SessionAPI_sessionsPost**](SessionAPI.md#SessionAPI_sessionsPost) | **POST** /sessions | Generate a new session for the user which will timeout and be deleted after 15 minutes


# **SessionAPI_sessionDelete**
```c
// Delete the session so that the tokens will no longer work
//
void SessionAPI_sessionDelete(apiClient_t *apiClient);
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

# **SessionAPI_sessionRefreshPost**
```c
// Generate new tokens for the current session and resets the session timeout
//
_session_refresh_post_200_response_t* SessionAPI_sessionRefreshPost(apiClient_t *apiClient, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **char \*** |  | 

### Return type

[_session_refresh_post_200_response_t](_session_refresh_post_200_response.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SessionAPI_sessionsPost**
```c
// Generate a new session for the user which will timeout and be deleted after 15 minutes
//
_sessions_post_201_response_t* SessionAPI_sessionsPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[_sessions_post_201_response_t](_sessions_post_201_response.md) *


### Authorization

[BasicAuthAllRoles](../README.md#BasicAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

