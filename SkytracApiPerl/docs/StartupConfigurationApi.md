# WWW::OpenAPIClient::StartupConfigurationApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::StartupConfigurationApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cfg_startup_patch**](StartupConfigurationApi.md#cfg_startup_patch) | **PATCH** /cfg/startup | Set the startup configuration


# **cfg_startup_patch**
> cfg_startup_patch(configuration_request => $configuration_request)

Set the startup configuration

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::StartupConfigurationApi;
my $api_instance = WWW::OpenAPIClient::StartupConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $configuration_request = WWW::OpenAPIClient::Object::ConfigurationRequest->new(); # ConfigurationRequest | 

eval {
    $api_instance->cfg_startup_patch(configuration_request => $configuration_request);
};
if ($@) {
    warn "Exception when calling StartupConfigurationApi->cfg_startup_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **configuration_request** | [**ConfigurationRequest**](ConfigurationRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

