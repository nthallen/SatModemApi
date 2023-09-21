# wi_fi_settings_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **int** | Whether Wi-Fi is enabled | 
**addr** | **char \*** | The address assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | 
**mask** | **char \*** | The subnet mask assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | 
**ssid** | **char \*** | The SSID used for the Wi-Fi network. Must be 1-30 characters. | 
**visible** | **int** | Whether the SSID should be broadcast | 
**security** | **quicksilver_web_api_wi_fi_settings_response_SECURITY_e** | The type of security to use | 
**wpa2_pwd** | **char \*** | The WPA2 password. Must be 8-25 characters, with the exception that a blank string is allowed if security is open. | 
**dhcp** | **any_type_t \*** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


