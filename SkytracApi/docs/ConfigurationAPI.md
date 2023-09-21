# ConfigurationAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ConfigurationAPI_cfgTypeDnsGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeDnsGet) | **GET** /cfg/{type}/dns | Get the DNS settings
[**ConfigurationAPI_cfgTypeDnsPatch**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeDnsPatch) | **PATCH** /cfg/{type}/dns | Set the DNS settings
[**ConfigurationAPI_cfgTypeEthGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeEthGet) | **GET** /cfg/{type}/eth | Get the Ethernet settings
[**ConfigurationAPI_cfgTypeEthPatch**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeEthPatch) | **PATCH** /cfg/{type}/eth | Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask
[**ConfigurationAPI_cfgTypeGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGet) | **GET** /cfg/{type} | Get the complete configuration
[**ConfigurationAPI_cfgTypeGpsDynPlatformModelGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsDynPlatformModelGet) | **GET** /cfg/{type}/gps/dynPlatformModel | Get the GPS dynamic platform model setting
[**ConfigurationAPI_cfgTypeGpsDynPlatformModelPut**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsDynPlatformModelPut) | **PUT** /cfg/{type}/gps/dynPlatformModel | Set the GPS dynamic platform model setting
[**ConfigurationAPI_cfgTypeGpsKeepOnGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsKeepOnGet) | **GET** /cfg/{type}/gps/keepOn | Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
[**ConfigurationAPI_cfgTypeGpsKeepOnPut**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsKeepOnPut) | **PUT** /cfg/{type}/gps/keepOn | Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
[**ConfigurationAPI_cfgTypeGpsSyncTimeGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsSyncTimeGet) | **GET** /cfg/{type}/gps/syncTime | Get the GPS sync time setting.
[**ConfigurationAPI_cfgTypeGpsSyncTimePut**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeGpsSyncTimePut) | **PUT** /cfg/{type}/gps/syncTime | Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.
[**ConfigurationAPI_cfgTypeIrdModeGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeIrdModeGet) | **GET** /cfg/{type}/ird/mode | Get the Iridium mode
[**ConfigurationAPI_cfgTypeIrdModePut**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeIrdModePut) | **PUT** /cfg/{type}/ird/mode | Set the Iridium mode. Please make sure device&#39;s system time is synced before turning on data mode.
[**ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet) | **GET** /cfg/{type}/outgoingFirewall/rules | Get the outgoing firewall rules
[**ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete) | **DELETE** /cfg/{type}/outgoingFirewall/rules/{name} | Remove a rule from the outgoing firewall
[**ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch) | **PATCH** /cfg/{type}/outgoingFirewall/rules/{name} | Update an outgoing firewall rule
[**ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost) | **POST** /cfg/{type}/outgoingFirewall/rules | Inserts a rule into the outgoing firewall
[**ConfigurationAPI_cfgTypePortFwdEntriesGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypePortFwdEntriesGet) | **GET** /cfg/{type}/portFwd/entries | Get the port forwarding entries
[**ConfigurationAPI_cfgTypePortFwdEntriesNameDelete**](ConfigurationAPI.md#ConfigurationAPI_cfgTypePortFwdEntriesNameDelete) | **DELETE** /cfg/{type}/portFwd/entries/{name} | Remove a port forwarding entry
[**ConfigurationAPI_cfgTypePortFwdEntriesNamePatch**](ConfigurationAPI.md#ConfigurationAPI_cfgTypePortFwdEntriesNamePatch) | **PATCH** /cfg/{type}/portFwd/entries/{name} | Update a port forwarding entry
[**ConfigurationAPI_cfgTypePortFwdEntriesPost**](ConfigurationAPI.md#ConfigurationAPI_cfgTypePortFwdEntriesPost) | **POST** /cfg/{type}/portFwd/entries | Add a port forwarding entry
[**ConfigurationAPI_cfgTypeWifiEnabledGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeWifiEnabledGet) | **GET** /cfg/{type}/wifi/enabled | Get the Wi-Fi enabled configuration
[**ConfigurationAPI_cfgTypeWifiGet**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeWifiGet) | **GET** /cfg/{type}/wifi | Get the Wi-Fi configuration
[**ConfigurationAPI_cfgTypeWifiPatch**](ConfigurationAPI.md#ConfigurationAPI_cfgTypeWifiPatch) | **PATCH** /cfg/{type}/wifi | Set the Wi-Fi configuration


# **ConfigurationAPI_cfgTypeDnsGet**
```c
// Get the DNS settings
//
dns_settings_response_t* ConfigurationAPI_cfgTypeDnsGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[dns_settings_response_t](dns_settings_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeDnsPatch**
```c
// Set the DNS settings
//
void ConfigurationAPI_cfgTypeDnsPatch(apiClient_t *apiClient, cfg_type_e type, dns_settings_request_t * dns_settings_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**dns_settings_request** | **[dns_settings_request_t](dns_settings_request.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeEthGet**
```c
// Get the Ethernet settings
//
eth_settings_response_t* ConfigurationAPI_cfgTypeEthGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[eth_settings_response_t](eth_settings_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeEthPatch**
```c
// Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask
//
void ConfigurationAPI_cfgTypeEthPatch(apiClient_t *apiClient, cfg_type_e type, eth_settings_request_t * eth_settings_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**eth_settings_request** | **[eth_settings_request_t](eth_settings_request.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGet**
```c
// Get the complete configuration
//
configuration_response_t* ConfigurationAPI_cfgTypeGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[configuration_response_t](configuration_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsDynPlatformModelGet**
```c
// Get the GPS dynamic platform model setting
//
gps_dyn_platform_model_t* ConfigurationAPI_cfgTypeGpsDynPlatformModelGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[gps_dyn_platform_model_t](gps_dyn_platform_model.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsDynPlatformModelPut**
```c
// Set the GPS dynamic platform model setting
//
void ConfigurationAPI_cfgTypeGpsDynPlatformModelPut(apiClient_t *apiClient, cfg_type_e type,  body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**body** |  |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsKeepOnGet**
```c
// Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
int* ConfigurationAPI_cfgTypeGpsKeepOnGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsKeepOnPut**
```c
// Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
void ConfigurationAPI_cfgTypeGpsKeepOnPut(apiClient_t *apiClient, cfg_type_e type, int body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**body** | **int** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsSyncTimeGet**
```c
// Get the GPS sync time setting.
//
int* ConfigurationAPI_cfgTypeGpsSyncTimeGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeGpsSyncTimePut**
```c
// Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.
//
void ConfigurationAPI_cfgTypeGpsSyncTimePut(apiClient_t *apiClient, cfg_type_e type, int body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**body** | **int** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeIrdModeGet**
```c
// Get the Iridium mode
//
ird_mode_t* ConfigurationAPI_cfgTypeIrdModeGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[ird_mode_t](ird_mode.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeIrdModePut**
```c
// Set the Iridium mode. Please make sure device's system time is synced before turning on data mode.
//
void ConfigurationAPI_cfgTypeIrdModePut(apiClient_t *apiClient, cfg_type_e type,  body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**body** |  |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet**
```c
// Get the outgoing firewall rules
//
list_t* ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[list_t](outgoing_firewall_rule.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete**
```c
// Remove a rule from the outgoing firewall
//
void ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete(apiClient_t *apiClient, cfg_type_e type, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**name** | **char \*** | Name of the rule to remove | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch**
```c
// Update an outgoing firewall rule
//
void ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch(apiClient_t *apiClient, cfg_type_e type, char * name, patch_outgoing_firewall_rule_t * patch_outgoing_firewall_rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**name** | **char \*** | Name of the rule to update | 
**patch_outgoing_firewall_rule** | **[patch_outgoing_firewall_rule_t](patch_outgoing_firewall_rule.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost**
```c
// Inserts a rule into the outgoing firewall
//
void ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost(apiClient_t *apiClient, cfg_type_e type, outgoing_firewall_rule_t * outgoing_firewall_rule, char * before);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**outgoing_firewall_rule** | **[outgoing_firewall_rule_t](outgoing_firewall_rule.md) \*** |  | 
**before** | **char \*** | The name of the rule to insert the new rule before. If omitted, the rule is appended to the end of the list. | [optional] 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypePortFwdEntriesGet**
```c
// Get the port forwarding entries
//
list_t* ConfigurationAPI_cfgTypePortFwdEntriesGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[list_t](port_fwd_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypePortFwdEntriesNameDelete**
```c
// Remove a port forwarding entry
//
void ConfigurationAPI_cfgTypePortFwdEntriesNameDelete(apiClient_t *apiClient, cfg_type_e type, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**name** | **char \*** | Name of port forwarding entry | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypePortFwdEntriesNamePatch**
```c
// Update a port forwarding entry
//
void ConfigurationAPI_cfgTypePortFwdEntriesNamePatch(apiClient_t *apiClient, cfg_type_e type, char * name, patch_port_fwd_entry_t * patch_port_fwd_entry);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**name** | **char \*** | Name of port forwarding entry to update | 
**patch_port_fwd_entry** | **[patch_port_fwd_entry_t](patch_port_fwd_entry.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypePortFwdEntriesPost**
```c
// Add a port forwarding entry
//
void ConfigurationAPI_cfgTypePortFwdEntriesPost(apiClient_t *apiClient, cfg_type_e type, port_fwd_entry_t * port_fwd_entry);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**port_fwd_entry** | **[port_fwd_entry_t](port_fwd_entry.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeWifiEnabledGet**
```c
// Get the Wi-Fi enabled configuration
//
int* ConfigurationAPI_cfgTypeWifiEnabledGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeWifiGet**
```c
// Get the Wi-Fi configuration
//
wi_fi_settings_response_t* ConfigurationAPI_cfgTypeWifiGet(apiClient_t *apiClient, cfg_type_e type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 

### Return type

[wi_fi_settings_response_t](wi_fi_settings_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ConfigurationAPI_cfgTypeWifiPatch**
```c
// Set the Wi-Fi configuration
//
// Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask.
//
void ConfigurationAPI_cfgTypeWifiPatch(apiClient_t *apiClient, cfg_type_e type, wi_fi_settings_request_t * wi_fi_settings_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **cfg_type_e** | The configuration type | 
**wi_fi_settings_request** | **[wi_fi_settings_request_t](wi_fi_settings_request.md) \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

