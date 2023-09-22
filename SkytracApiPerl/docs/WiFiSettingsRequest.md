# WWW::OpenAPIClient::Object::WiFiSettingsRequest

## Load the model package
```perl
use WWW::OpenAPIClient::Object::WiFiSettingsRequest;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **boolean** | Whether Wi-Fi is enabled | [optional] 
**addr** | **string** | The address assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | [optional] 
**mask** | **string** | The subnet mask assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | [optional] 
**ssid** | **string** | The SSID used for the Wi-Fi network. Must be 1-30 characters. | [optional] 
**visible** | **boolean** | Whether the SSID should be broadcast | [optional] 
**security** | **string** | The type of security to use | [optional] 
**wpa2_pwd** | **string** | The WPA2 password. Must be 8-25 characters, with the exception that a blank string is allowed if security is open. | [optional] 
**dhcp** | [**EthSettingsRequestDhcp**](EthSettingsRequestDhcp.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


