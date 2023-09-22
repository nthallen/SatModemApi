# WWW::OpenAPIClient::UserApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::UserApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**user_change_password_post**](UserApi.md#user_change_password_post) | **POST** /user/changePassword | Change the session owner&#39;s password
[**user_get**](UserApi.md#user_get) | **GET** /user | Get the session owner
[**user_sessions_delete**](UserApi.md#user_sessions_delete) | **DELETE** /user/sessions | Delete all of the sessions for the session owner. Not just this session.


# **user_change_password_post**
> user_change_password_post(user_change_password_post_request => $user_change_password_post_request)

Change the session owner's password

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UserApi;
my $api_instance = WWW::OpenAPIClient::UserApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $user_change_password_post_request = WWW::OpenAPIClient::Object::UserChangePasswordPostRequest->new(); # UserChangePasswordPostRequest | 

eval {
    $api_instance->user_change_password_post(user_change_password_post_request => $user_change_password_post_request);
};
if ($@) {
    warn "Exception when calling UserApi->user_change_password_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user_change_password_post_request** | [**UserChangePasswordPostRequest**](UserChangePasswordPostRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_get**
> GetUser user_get()

Get the session owner

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UserApi;
my $api_instance = WWW::OpenAPIClient::UserApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->user_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling UserApi->user_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetUser**](GetUser.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_sessions_delete**
> user_sessions_delete()

Delete all of the sessions for the session owner. Not just this session.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UserApi;
my $api_instance = WWW::OpenAPIClient::UserApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->user_sessions_delete();
};
if ($@) {
    warn "Exception when calling UserApi->user_sessions_delete: $@\n";
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

