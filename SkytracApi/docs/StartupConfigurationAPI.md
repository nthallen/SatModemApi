# StartupConfigurationAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StartupConfigurationAPI_cfgStartupPatch**](StartupConfigurationAPI.md#StartupConfigurationAPI_cfgStartupPatch) | **PATCH** /cfg/startup | Set the startup configuration


# **StartupConfigurationAPI_cfgStartupPatch**
```c
// Set the startup configuration
//
void StartupConfigurationAPI_cfgStartupPatch(apiClient_t *apiClient, configuration_request_t * configuration_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**configuration_request** | **[configuration_request_t](configuration_request.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

