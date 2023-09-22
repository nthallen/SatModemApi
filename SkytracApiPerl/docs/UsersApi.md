# WWW::OpenAPIClient::UsersApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::UsersApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**users_get**](UsersApi.md#users_get) | **GET** /users | Get all users
[**users_name_delete**](UsersApi.md#users_name_delete) | **DELETE** /users/{name} | Delete a user
[**users_name_patch**](UsersApi.md#users_name_patch) | **PATCH** /users/{name} | Modify a user
[**users_name_sessions_delete**](UsersApi.md#users_name_sessions_delete) | **DELETE** /users/{name}/sessions | Remove all of a user&#39;s sessions
[**users_post**](UsersApi.md#users_post) | **POST** /users | Add a user


# **users_get**
> ARRAY[GetUser] users_get()

Get all users

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UsersApi;
my $api_instance = WWW::OpenAPIClient::UsersApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->users_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling UsersApi->users_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[GetUser]**](GetUser.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **users_name_delete**
> users_name_delete(name => $name)

Delete a user

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UsersApi;
my $api_instance = WWW::OpenAPIClient::UsersApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $name = "name_example"; # string | Name of user

eval {
    $api_instance->users_name_delete(name => $name);
};
if ($@) {
    warn "Exception when calling UsersApi->users_name_delete: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| Name of user | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **users_name_patch**
> users_name_patch(name => $name, patch_user => $patch_user)

Modify a user

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UsersApi;
my $api_instance = WWW::OpenAPIClient::UsersApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $name = "name_example"; # string | Name of user
my $patch_user = WWW::OpenAPIClient::Object::PatchUser->new(); # PatchUser | 

eval {
    $api_instance->users_name_patch(name => $name, patch_user => $patch_user);
};
if ($@) {
    warn "Exception when calling UsersApi->users_name_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| Name of user | 
 **patch_user** | [**PatchUser**](PatchUser.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **users_name_sessions_delete**
> users_name_sessions_delete(name => $name)

Remove all of a user's sessions

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UsersApi;
my $api_instance = WWW::OpenAPIClient::UsersApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $name = "name_example"; # string | Name of user

eval {
    $api_instance->users_name_sessions_delete(name => $name);
};
if ($@) {
    warn "Exception when calling UsersApi->users_name_sessions_delete: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **string**| Name of user | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **users_post**
> users_post(post_user => $post_user)

Add a user

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::UsersApi;
my $api_instance = WWW::OpenAPIClient::UsersApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $post_user = WWW::OpenAPIClient::Object::PostUser->new(); # PostUser | 

eval {
    $api_instance->users_post(post_user => $post_user);
};
if ($@) {
    warn "Exception when calling UsersApi->users_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **post_user** | [**PostUser**](PostUser.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

