# WWW::OpenAPIClient::NotificationsApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::NotificationsApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**notifications_get**](NotificationsApi.md#notifications_get) | **GET** /notifications | Get the list of notifications
[**notifications_id_delete**](NotificationsApi.md#notifications_id_delete) | **DELETE** /notifications/{id} | Delete a notification


# **notifications_get**
> ARRAY[Notification] notifications_get()

Get the list of notifications

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NotificationsApi;
my $api_instance = WWW::OpenAPIClient::NotificationsApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->notifications_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NotificationsApi->notifications_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[Notification]**](Notification.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **notifications_id_delete**
> notifications_id_delete(id => $id)

Delete a notification

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NotificationsApi;
my $api_instance = WWW::OpenAPIClient::NotificationsApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $id = 3.4; # double | Id of notification to delete

eval {
    $api_instance->notifications_id_delete(id => $id);
};
if ($@) {
    warn "Exception when calling NotificationsApi->notifications_id_delete: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **double**| Id of notification to delete | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

