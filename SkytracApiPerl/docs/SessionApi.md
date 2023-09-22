# WWW::OpenAPIClient::SessionApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::SessionApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**session_delete**](SessionApi.md#session_delete) | **DELETE** /session | Delete the session so that the tokens will no longer work
[**session_refresh_post**](SessionApi.md#session_refresh_post) | **POST** /session/refresh | Generate new tokens for the current session and resets the session timeout
[**sessions_post**](SessionApi.md#sessions_post) | **POST** /sessions | Generate a new session for the user which will timeout and be deleted after 15 minutes


# **session_delete**
> session_delete()

Delete the session so that the tokens will no longer work

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SessionApi;
my $api_instance = WWW::OpenAPIClient::SessionApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->session_delete();
};
if ($@) {
    warn "Exception when calling SessionApi->session_delete: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **session_refresh_post**
> SessionRefreshPost200Response session_refresh_post(body => $body)

Generate new tokens for the current session and resets the session timeout

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SessionApi;
my $api_instance = WWW::OpenAPIClient::SessionApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    my $result = $api_instance->session_refresh_post(body => $body);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SessionApi->session_refresh_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **string**|  | 

### Return type

[**SessionRefreshPost200Response**](SessionRefreshPost200Response.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sessions_post**
> SessionsPost201Response sessions_post()

Generate a new session for the user which will timeout and be deleted after 15 minutes

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::SessionApi;
my $api_instance = WWW::OpenAPIClient::SessionApi->new(

    # Configure HTTP basic authorization: BasicAuthAllRoles
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);


eval {
    my $result = $api_instance->sessions_post();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling SessionApi->sessions_post: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SessionsPost201Response**](SessionsPost201Response.md)

### Authorization

[BasicAuthAllRoles](../README.md#BasicAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

