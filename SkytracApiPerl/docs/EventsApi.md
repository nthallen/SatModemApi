# WWW::OpenAPIClient::EventsApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::EventsApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**events_id_subscriptions_get**](EventsApi.md#events_id_subscriptions_get) | **GET** /events/{id}/subscriptions | Get the list of events that an event connection is subscribed to
[**events_id_subscriptions_name_get**](EventsApi.md#events_id_subscriptions_name_get) | **GET** /events/{id}/subscriptions/{name} | Get whether an event connection is subscribed to a specific event
[**events_id_subscriptions_name_put**](EventsApi.md#events_id_subscriptions_name_put) | **PUT** /events/{id}/subscriptions/{name} | Set whether an event connection is subscribed to a specific event
[**events_id_subscriptions_put**](EventsApi.md#events_id_subscriptions_put) | **PUT** /events/{id}/subscriptions | Set the list of events that an event connection is subscribed to
[**socket_get**](EventsApi.md#socket_get) | **GET** /socket | Start a WebSocket connection


# **events_id_subscriptions_get**
> ARRAY[EventName] events_id_subscriptions_get(id => $id)

Get the list of events that an event connection is subscribed to

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::EventsApi;
my $api_instance = WWW::OpenAPIClient::EventsApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $id = "id_example"; # string | Id of event connection

eval {
    my $result = $api_instance->events_id_subscriptions_get(id => $id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling EventsApi->events_id_subscriptions_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Id of event connection | 

### Return type

[**ARRAY[EventName]**](EventName.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **events_id_subscriptions_name_get**
> boolean events_id_subscriptions_name_get(id => $id, name => $name)

Get whether an event connection is subscribed to a specific event

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::EventsApi;
my $api_instance = WWW::OpenAPIClient::EventsApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $id = "id_example"; # string | Id of event connection
my $name = new WWW::OpenAPIClient.EventName(); # EventName | The name of the event

eval {
    my $result = $api_instance->events_id_subscriptions_name_get(id => $id, name => $name);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling EventsApi->events_id_subscriptions_name_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Id of event connection | 
 **name** | [**EventName**](.md)| The name of the event | 

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **events_id_subscriptions_name_put**
> events_id_subscriptions_name_put(id => $id, name => $name, body => $body)

Set whether an event connection is subscribed to a specific event

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::EventsApi;
my $api_instance = WWW::OpenAPIClient::EventsApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $id = "id_example"; # string | Id of event connection
my $name = new WWW::OpenAPIClient.EventName(); # EventName | The name of the event
my $body = WWW::OpenAPIClient::Object::boolean->new(); # boolean | 

eval {
    $api_instance->events_id_subscriptions_name_put(id => $id, name => $name, body => $body);
};
if ($@) {
    warn "Exception when calling EventsApi->events_id_subscriptions_name_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Id of event connection | 
 **name** | [**EventName**](.md)| The name of the event | 
 **body** | **boolean**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **events_id_subscriptions_put**
> events_id_subscriptions_put(id => $id, event_name => $event_name)

Set the list of events that an event connection is subscribed to

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::EventsApi;
my $api_instance = WWW::OpenAPIClient::EventsApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $id = "id_example"; # string | Id of event connection
my $event_name = [WWW::OpenAPIClient::Object::ARRAY[EventName]->new()]; # ARRAY[EventName] | 

eval {
    $api_instance->events_id_subscriptions_put(id => $id, event_name => $event_name);
};
if ($@) {
    warn "Exception when calling EventsApi->events_id_subscriptions_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string**| Id of event connection | 
 **event_name** | [**ARRAY[EventName]**](EventName.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **socket_get**
> SocketGet200Response socket_get()

Start a WebSocket connection

Establishes a WebSocket connection for receiving events messages. When the connection is first made, an \"id\" event will be sent to the connection with the data being a string ID that uniquely identifies the connection and which can be used with the /events API to subscribe or unsubscribe to other events. Initially, no event are subscribed to. 

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::EventsApi;
my $api_instance = WWW::OpenAPIClient::EventsApi->new(

    # Configure API key authorization: QueryAuthAllRoles
    api_key => {'token' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'token' => 'Bearer'},
);


eval {
    my $result = $api_instance->socket_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling EventsApi->socket_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SocketGet200Response**](SocketGet200Response.md)

### Authorization

[QueryAuthAllRoles](../README.md#QueryAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

