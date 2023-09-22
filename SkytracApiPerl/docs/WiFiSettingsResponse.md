# WWW::OpenAPIClient::Object::WiFiSettingsResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::WiFiSettingsResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **boolean** | Whether Wi-Fi is enabled | 
**addr** | **string** | The address assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | 
**mask** | **string** | The subnet mask assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | 
**ssid** | **string** | The SSID used for the Wi-Fi network. Must be 1-30 characters. | 
**visible** | **boolean** | Whether the SSID should be broadcast | 
**security** | **string** | The type of security to use | 
**wpa2_pwd** | **string** | The WPA2 password. Must be 8-25 characters, with the exception that a blank string is allowed if security is open. | 
**dhcp** | [**EthSettingsRequestDhcp**](EthSettingsRequestDhcp.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


