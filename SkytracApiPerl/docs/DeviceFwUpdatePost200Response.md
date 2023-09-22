# WWW::OpenAPIClient::Object::DeviceFwUpdatePost200Response

## Load the model package
```perl
use WWW::OpenAPIClient::Object::DeviceFwUpdatePost200Response;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**status** | **string** | The result / status of the update. - started - The update has started - partial - The update failed leaving partial changes - failed - The update failed leaving no changes - success - The update was successful  | [optional] 
**error** | **string** | An error message. Blank for started and success statuses. | [optional] 
**will_reboot** | **boolean** | Whether the update will reboot the device automatically when done. If false, then a reboot is not required. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


