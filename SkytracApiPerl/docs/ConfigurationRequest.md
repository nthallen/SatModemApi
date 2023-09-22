# WWW::OpenAPIClient::Object::ConfigurationRequest

## Load the model package
```perl
use WWW::OpenAPIClient::Object::ConfigurationRequest;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**web_api_version** | **string** | {major}.{minor}.{patch}. The web API version that produced this configuration. | [optional] 
**dns** | [**DnsSettingsRequest**](DnsSettingsRequest.md) |  | [optional] 
**eth** | [**EthSettingsRequest**](EthSettingsRequest.md) |  | [optional] 
**gps** | [**ConfigurationRequestGps**](ConfigurationRequestGps.md) |  | [optional] 
**wifi** | [**WiFiSettingsRequest**](WiFiSettingsRequest.md) |  | [optional] 
**ird** | [**ConfigurationRequestIrd**](ConfigurationRequestIrd.md) |  | [optional] 
**outgoing_firewall** | [**ConfigurationRequestOutgoingFirewall**](ConfigurationRequestOutgoingFirewall.md) |  | [optional] 
**port_fwd** | [**ConfigurationRequestPortFwd**](ConfigurationRequestPortFwd.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


