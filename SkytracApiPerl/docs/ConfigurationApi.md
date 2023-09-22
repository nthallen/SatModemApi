# WWW::OpenAPIClient::ConfigurationApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::ConfigurationApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cfg_type_dns_get**](ConfigurationApi.md#cfg_type_dns_get) | **GET** /cfg/{type}/dns | Get the DNS settings
[**cfg_type_dns_patch**](ConfigurationApi.md#cfg_type_dns_patch) | **PATCH** /cfg/{type}/dns | Set the DNS settings
[**cfg_type_eth_get**](ConfigurationApi.md#cfg_type_eth_get) | **GET** /cfg/{type}/eth | Get the Ethernet settings
[**cfg_type_eth_patch**](ConfigurationApi.md#cfg_type_eth_patch) | **PATCH** /cfg/{type}/eth | Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask
[**cfg_type_get**](ConfigurationApi.md#cfg_type_get) | **GET** /cfg/{type} | Get the complete configuration
[**cfg_type_gps_dyn_platform_model_get**](ConfigurationApi.md#cfg_type_gps_dyn_platform_model_get) | **GET** /cfg/{type}/gps/dynPlatformModel | Get the GPS dynamic platform model setting
[**cfg_type_gps_dyn_platform_model_put**](ConfigurationApi.md#cfg_type_gps_dyn_platform_model_put) | **PUT** /cfg/{type}/gps/dynPlatformModel | Set the GPS dynamic platform model setting
[**cfg_type_gps_keep_on_get**](ConfigurationApi.md#cfg_type_gps_keep_on_get) | **GET** /cfg/{type}/gps/keepOn | Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
[**cfg_type_gps_keep_on_put**](ConfigurationApi.md#cfg_type_gps_keep_on_put) | **PUT** /cfg/{type}/gps/keepOn | Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
[**cfg_type_gps_sync_time_get**](ConfigurationApi.md#cfg_type_gps_sync_time_get) | **GET** /cfg/{type}/gps/syncTime | Get the GPS sync time setting.
[**cfg_type_gps_sync_time_put**](ConfigurationApi.md#cfg_type_gps_sync_time_put) | **PUT** /cfg/{type}/gps/syncTime | Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.
[**cfg_type_ird_mode_get**](ConfigurationApi.md#cfg_type_ird_mode_get) | **GET** /cfg/{type}/ird/mode | Get the Iridium mode
[**cfg_type_ird_mode_put**](ConfigurationApi.md#cfg_type_ird_mode_put) | **PUT** /cfg/{type}/ird/mode | Set the Iridium mode. Please make sure device&#39;s system time is synced before turning on data mode.
[**cfg_type_outgoing_firewall_rules_get**](ConfigurationApi.md#cfg_type_outgoing_firewall_rules_get) | **GET** /cfg/{type}/outgoingFirewall/rules | Get the outgoing firewall rules
[**cfg_type_outgoing_firewall_rules_name_delete**](ConfigurationApi.md#cfg_type_outgoing_firewall_rules_name_delete) | **DELETE** /cfg/{type}/outgoingFirewall/rules/{name} | Remove a rule from the outgoing firewall
[**cfg_type_outgoing_firewall_rules_name_patch**](ConfigurationApi.md#cfg_type_outgoing_firewall_rules_name_patch) | **PATCH** /cfg/{type}/outgoingFirewall/rules/{name} | Update an outgoing firewall rule
[**cfg_type_outgoing_firewall_rules_post**](ConfigurationApi.md#cfg_type_outgoing_firewall_rules_post) | **POST** /cfg/{type}/outgoingFirewall/rules | Inserts a rule into the outgoing firewall
[**cfg_type_port_fwd_entries_get**](ConfigurationApi.md#cfg_type_port_fwd_entries_get) | **GET** /cfg/{type}/portFwd/entries | Get the port forwarding entries
[**cfg_type_port_fwd_entries_name_delete**](ConfigurationApi.md#cfg_type_port_fwd_entries_name_delete) | **DELETE** /cfg/{type}/portFwd/entries/{name} | Remove a port forwarding entry
[**cfg_type_port_fwd_entries_name_patch**](ConfigurationApi.md#cfg_type_port_fwd_entries_name_patch) | **PATCH** /cfg/{type}/portFwd/entries/{name} | Update a port forwarding entry
[**cfg_type_port_fwd_entries_post**](ConfigurationApi.md#cfg_type_port_fwd_entries_post) | **POST** /cfg/{type}/portFwd/entries | Add a port forwarding entry
[**cfg_type_wifi_enabled_get**](ConfigurationApi.md#cfg_type_wifi_enabled_get) | **GET** /cfg/{type}/wifi/enabled | Get the Wi-Fi enabled configuration
[**cfg_type_wifi_get**](ConfigurationApi.md#cfg_type_wifi_get) | **GET** /cfg/{type}/wifi | Get the Wi-Fi configuration
[**cfg_type_wifi_patch**](ConfigurationApi.md#cfg_type_wifi_patch) | **PATCH** /cfg/{type}/wifi | Set the Wi-Fi configuration


# **cfg_type_dns_get**
> DnsSettingsResponse cfg_type_dns_get(type => $type)

Get the DNS settings

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_dns_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_dns_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**DnsSettingsResponse**](DnsSettingsResponse.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_dns_patch**
> cfg_type_dns_patch(type => $type, dns_settings_request => $dns_settings_request)

Set the DNS settings

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $dns_settings_request = WWW::OpenAPIClient::Object::DnsSettingsRequest->new(); # DnsSettingsRequest | 

eval {
    $api_instance->cfg_type_dns_patch(type => $type, dns_settings_request => $dns_settings_request);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_dns_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **dns_settings_request** | [**DnsSettingsRequest**](DnsSettingsRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_eth_get**
> EthSettingsResponse cfg_type_eth_get(type => $type)

Get the Ethernet settings

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_eth_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_eth_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**EthSettingsResponse**](EthSettingsResponse.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_eth_patch**
> cfg_type_eth_patch(type => $type, eth_settings_request => $eth_settings_request)

Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $eth_settings_request = WWW::OpenAPIClient::Object::EthSettingsRequest->new(); # EthSettingsRequest | 

eval {
    $api_instance->cfg_type_eth_patch(type => $type, eth_settings_request => $eth_settings_request);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_eth_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **eth_settings_request** | [**EthSettingsRequest**](EthSettingsRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_get**
> ConfigurationResponse cfg_type_get(type => $type)

Get the complete configuration

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**ConfigurationResponse**](ConfigurationResponse.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_dyn_platform_model_get**
> GpsDynPlatformModel cfg_type_gps_dyn_platform_model_get(type => $type)

Get the GPS dynamic platform model setting

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_gps_dyn_platform_model_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_dyn_platform_model_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**GpsDynPlatformModel**](GpsDynPlatformModel.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_dyn_platform_model_put**
> cfg_type_gps_dyn_platform_model_put(type => $type, body => $body)

Set the GPS dynamic platform model setting

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->cfg_type_gps_dyn_platform_model_put(type => $type, body => $body);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_dyn_platform_model_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **body** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_keep_on_get**
> boolean cfg_type_gps_keep_on_get(type => $type)

Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_gps_keep_on_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_keep_on_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_keep_on_put**
> cfg_type_gps_keep_on_put(type => $type, body => $body)

Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $body = WWW::OpenAPIClient::Object::boolean->new(); # boolean | 

eval {
    $api_instance->cfg_type_gps_keep_on_put(type => $type, body => $body);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_keep_on_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **body** | **boolean**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_sync_time_get**
> boolean cfg_type_gps_sync_time_get(type => $type)

Get the GPS sync time setting.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_gps_sync_time_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_sync_time_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_gps_sync_time_put**
> cfg_type_gps_sync_time_put(type => $type, body => $body)

Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $body = WWW::OpenAPIClient::Object::boolean->new(); # boolean | 

eval {
    $api_instance->cfg_type_gps_sync_time_put(type => $type, body => $body);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_gps_sync_time_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **body** | **boolean**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_ird_mode_get**
> IrdMode cfg_type_ird_mode_get(type => $type)

Get the Iridium mode

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_ird_mode_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_ird_mode_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**IrdMode**](IrdMode.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_ird_mode_put**
> cfg_type_ird_mode_put(type => $type, body => $body)

Set the Iridium mode. Please make sure device's system time is synced before turning on data mode.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->cfg_type_ird_mode_put(type => $type, body => $body);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_ird_mode_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **body** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_outgoing_firewall_rules_get**
> ARRAY[OutgoingFirewallRule] cfg_type_outgoing_firewall_rules_get(type => $type)

Get the outgoing firewall rules

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_outgoing_firewall_rules_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_outgoing_firewall_rules_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**ARRAY[OutgoingFirewallRule]**](OutgoingFirewallRule.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_outgoing_firewall_rules_name_delete**
> cfg_type_outgoing_firewall_rules_name_delete(type => $type, name => $name)

Remove a rule from the outgoing firewall

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $name = "name_example"; # string | Name of the rule to remove

eval {
    $api_instance->cfg_type_outgoing_firewall_rules_name_delete(type => $type, name => $name);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_outgoing_firewall_rules_name_delete: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **name** | **string**| Name of the rule to remove | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_outgoing_firewall_rules_name_patch**
> cfg_type_outgoing_firewall_rules_name_patch(type => $type, name => $name, patch_outgoing_firewall_rule => $patch_outgoing_firewall_rule)

Update an outgoing firewall rule

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $name = "name_example"; # string | Name of the rule to update
my $patch_outgoing_firewall_rule = WWW::OpenAPIClient::Object::PatchOutgoingFirewallRule->new(); # PatchOutgoingFirewallRule | 

eval {
    $api_instance->cfg_type_outgoing_firewall_rules_name_patch(type => $type, name => $name, patch_outgoing_firewall_rule => $patch_outgoing_firewall_rule);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_outgoing_firewall_rules_name_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **name** | **string**| Name of the rule to update | 
 **patch_outgoing_firewall_rule** | [**PatchOutgoingFirewallRule**](PatchOutgoingFirewallRule.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_outgoing_firewall_rules_post**
> cfg_type_outgoing_firewall_rules_post(type => $type, outgoing_firewall_rule => $outgoing_firewall_rule, before => $before)

Inserts a rule into the outgoing firewall

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $outgoing_firewall_rule = WWW::OpenAPIClient::Object::OutgoingFirewallRule->new(); # OutgoingFirewallRule | 
my $before = "before_example"; # string | The name of the rule to insert the new rule before. If omitted, the rule is appended to the end of the list.

eval {
    $api_instance->cfg_type_outgoing_firewall_rules_post(type => $type, outgoing_firewall_rule => $outgoing_firewall_rule, before => $before);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_outgoing_firewall_rules_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **outgoing_firewall_rule** | [**OutgoingFirewallRule**](OutgoingFirewallRule.md)|  | 
 **before** | **string**| The name of the rule to insert the new rule before. If omitted, the rule is appended to the end of the list. | [optional] 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_port_fwd_entries_get**
> ARRAY[PortFwdEntry] cfg_type_port_fwd_entries_get(type => $type)

Get the port forwarding entries

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_port_fwd_entries_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_port_fwd_entries_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**ARRAY[PortFwdEntry]**](PortFwdEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_port_fwd_entries_name_delete**
> cfg_type_port_fwd_entries_name_delete(type => $type, name => $name)

Remove a port forwarding entry

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $name = "name_example"; # string | Name of port forwarding entry

eval {
    $api_instance->cfg_type_port_fwd_entries_name_delete(type => $type, name => $name);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_port_fwd_entries_name_delete: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **name** | **string**| Name of port forwarding entry | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_port_fwd_entries_name_patch**
> cfg_type_port_fwd_entries_name_patch(type => $type, name => $name, patch_port_fwd_entry => $patch_port_fwd_entry)

Update a port forwarding entry

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $name = "name_example"; # string | Name of port forwarding entry to update
my $patch_port_fwd_entry = WWW::OpenAPIClient::Object::PatchPortFwdEntry->new(); # PatchPortFwdEntry | 

eval {
    $api_instance->cfg_type_port_fwd_entries_name_patch(type => $type, name => $name, patch_port_fwd_entry => $patch_port_fwd_entry);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_port_fwd_entries_name_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **name** | **string**| Name of port forwarding entry to update | 
 **patch_port_fwd_entry** | [**PatchPortFwdEntry**](PatchPortFwdEntry.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_port_fwd_entries_post**
> cfg_type_port_fwd_entries_post(type => $type, port_fwd_entry => $port_fwd_entry)

Add a port forwarding entry

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $port_fwd_entry = WWW::OpenAPIClient::Object::PortFwdEntry->new(); # PortFwdEntry | 

eval {
    $api_instance->cfg_type_port_fwd_entries_post(type => $type, port_fwd_entry => $port_fwd_entry);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_port_fwd_entries_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **port_fwd_entry** | [**PortFwdEntry**](PortFwdEntry.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_wifi_enabled_get**
> boolean cfg_type_wifi_enabled_get(type => $type)

Get the Wi-Fi enabled configuration

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_wifi_enabled_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_wifi_enabled_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_wifi_get**
> WiFiSettingsResponse cfg_type_wifi_get(type => $type)

Get the Wi-Fi configuration

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type

eval {
    my $result = $api_instance->cfg_type_wifi_get(type => $type);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_wifi_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 

### Return type

[**WiFiSettingsResponse**](WiFiSettingsResponse.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cfg_type_wifi_patch**
> cfg_type_wifi_patch(type => $type, wi_fi_settings_request => $wi_fi_settings_request)

Set the Wi-Fi configuration

Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::ConfigurationApi;
my $api_instance = WWW::OpenAPIClient::ConfigurationApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $type = new WWW::OpenAPIClient.CfgType(); # CfgType | The configuration type
my $wi_fi_settings_request = WWW::OpenAPIClient::Object::WiFiSettingsRequest->new(); # WiFiSettingsRequest | 

eval {
    $api_instance->cfg_type_wifi_patch(type => $type, wi_fi_settings_request => $wi_fi_settings_request);
};
if ($@) {
    warn "Exception when calling ConfigurationApi->cfg_type_wifi_patch: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**CfgType**](.md)| The configuration type | 
 **wi_fi_settings_request** | [**WiFiSettingsRequest**](WiFiSettingsRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

