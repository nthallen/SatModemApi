# WWW::OpenAPIClient::Object::PatchPortFwdEntry

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PatchPortFwdEntry;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **string** | Unique display name Must be 1-15 characters and only contain alphanumeric characters, &#39;_&#39;, &#39;-&#39;, &#39;.&#39;, and &#39;~&#39;.  | [optional] 
**ext_port** | **double** | The external port. Must be 0-65535. | [optional] 
**int_addr** | **string** | The internal IP address. Must be specified in IPv4 dotted notation. | [optional] 
**int_port** | **double** | The internal port. Must be 0-65535. | [optional] 
**protocol** | **string** | The protocol to forward. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


