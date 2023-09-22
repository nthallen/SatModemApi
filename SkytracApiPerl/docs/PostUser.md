# WWW::OpenAPIClient::Object::PostUser

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostUser;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **string** | Name of user. Must be 1-16 characters and contains only alphanumeric characters, &#39;_&#39;, &#39;-&#39;, &#39;.&#39;, and &#39;~&#39; so that it is URL safe.  | 
**role** | **string** | Role | 
**pwd** | **string** | Must be 8-32 characters and include 3/4 of lower case letter, upper case letters, numeric, special. Cannot include username. | 
**locked** | **boolean** | Locked status | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


