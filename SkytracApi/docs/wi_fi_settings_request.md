# wi_fi_settings_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**enabled** | **int** | Whether Wi-Fi is enabled | [optional] 
**addr** | **char \*** | The address assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | [optional] 
**mask** | **char \*** | The subnet mask assigned to the Wi-Fi interface. Must be specified in IPv4 dotted notation. | [optional] 
**ssid** | **char \*** | The SSID used for the Wi-Fi network. Must be 1-30 characters. | [optional] 
**visible** | **int** | Whether the SSID should be broadcast | [optional] 
**security** | **quicksilver_web_api_wi_fi_settings_request_SECURITY_e** | The type of security to use | [optional] 
**wpa2_pwd** | **char \*** | The WPA2 password. Must be 8-25 characters, with the exception that a blank string is allowed if security is open. | [optional] 
**dhcp** | [**eth_settings_request_dhcp_t**](eth_settings_request_dhcp.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


