# WWW::OpenAPIClient::DeviceApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::DeviceApi;
```

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**device_backup_available_get**](DeviceApi.md#device_backup_available_get) | **GET** /device/backup/available | Get the user data backup available status
[**device_backup_data_delete**](DeviceApi.md#device_backup_data_delete) | **DELETE** /device/backup/data | Delete the user data backup
[**device_backup_data_get**](DeviceApi.md#device_backup_data_get) | **GET** /device/backup/data | Download the user data backup
[**device_certificate_post**](DeviceApi.md#device_certificate_post) | **POST** /device/certificate | Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated
[**device_clients_get**](DeviceApi.md#device_clients_get) | **GET** /device/clients | Get a list of currently connected LAN clients. A &#39;?&#39; hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it&#39;s DHCP lease since the board&#39;s last reboot.
[**device_export_users_get**](DeviceApi.md#device_export_users_get) | **GET** /device/exportUsers | Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device
[**device_fw_image_delete**](DeviceApi.md#device_fw_image_delete) | **DELETE** /device/fw/image | Remove the staged device firmware image
[**device_fw_image_get**](DeviceApi.md#device_fw_image_get) | **GET** /device/fw/image | Get info about the currently staged device firmware image
[**device_fw_image_put**](DeviceApi.md#device_fw_image_put) | **PUT** /device/fw/image | Upload an image to be used for updating the device firmware
[**device_fw_last_update_result_get**](DeviceApi.md#device_fw_last_update_result_get) | **GET** /device/fw/lastUpdateResult | Gets the result of the last product firmware update
[**device_fw_update_post**](DeviceApi.md#device_fw_update_post) | **POST** /device/fw/update | Update the device firmware using the staged image
[**device_gps_fix_get**](DeviceApi.md#device_gps_fix_get) | **GET** /device/gps/fix | Get the last GPS fix
[**device_gps_power_get**](DeviceApi.md#device_gps_power_get) | **GET** /device/gps/power | Get the GPS power state
[**device_import_users_post**](DeviceApi.md#device_import_users_post) | **POST** /device/importUsers | Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password
[**device_in_safe_mode_get**](DeviceApi.md#device_in_safe_mode_get) | **GET** /device/inSafeMode | Get whether the device booted up in safe mode
[**device_info_get**](DeviceApi.md#device_info_get) | **GET** /device/info | Gets information about the device
[**device_ird_api_version_get**](DeviceApi.md#device_ird_api_version_get) | **GET** /device/ird/apiVersion | Get the active API version for the Iridium modem
[**device_ird_boot_info_get**](DeviceApi.md#device_ird_boot_info_get) | **GET** /device/ird/bootInfo | Get the boot info for the Iridium modem
[**device_ird_constellation_get**](DeviceApi.md#device_ird_constellation_get) | **GET** /device/ird/constellation | Get the Iridium constellation state
[**device_ird_fw_image_delete**](DeviceApi.md#device_ird_fw_image_delete) | **DELETE** /device/ird/fw/image | Remove the staged Iridium firmware image
[**device_ird_fw_image_get**](DeviceApi.md#device_ird_fw_image_get) | **GET** /device/ird/fw/image | Get info about the currently staged Iridium firmware image
[**device_ird_fw_image_put**](DeviceApi.md#device_ird_fw_image_put) | **PUT** /device/ird/fw/image | Upload an image to be used for updating the Iridium firmware
[**device_ird_fw_slot_slot_get**](DeviceApi.md#device_ird_fw_slot_slot_get) | **GET** /device/ird/fw/slot/{slot} | Get information about an Iridium firmware slot
[**device_ird_fw_update_post**](DeviceApi.md#device_ird_fw_update_post) | **POST** /device/ird/fw/update | Update the Iridium firmware using the staged image
[**device_ird_hw_get**](DeviceApi.md#device_ird_hw_get) | **GET** /device/ird/hw | Get the hardware info for the Iridium modem
[**device_ird_reports_hwtest_get**](DeviceApi.md#device_ird_reports_hwtest_get) | **GET** /device/ird/reports/hwtest | Get HW test report
[**device_ird_self_test_post**](DeviceApi.md#device_ird_self_test_post) | **POST** /device/ird/selfTest | Run an Iridium self test
[**device_ird_sim_get**](DeviceApi.md#device_ird_sim_get) | **GET** /device/ird/sim | Get SIM info
[**device_ird_state_get**](DeviceApi.md#device_ird_state_get) | **GET** /device/ird/state | Get the state for the Iridium modem
[**device_reboot_post**](DeviceApi.md#device_reboot_post) | **POST** /device/reboot | Reboot the device
[**device_reset_startup_config_post**](DeviceApi.md#device_reset_startup_config_post) | **POST** /device/resetStartupConfig | Reset startup configuration to defaults
[**device_save_runtime_config_post**](DeviceApi.md#device_save_runtime_config_post) | **POST** /device/saveRuntimeConfig | Copy the runtime configuration to the startup configuration
[**device_time_get**](DeviceApi.md#device_time_get) | **GET** /device/time | Get time info
[**device_usage_day_get**](DeviceApi.md#device_usage_day_get) | **GET** /device/usage/day | Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC
[**device_usage_delete**](DeviceApi.md#device_usage_delete) | **DELETE** /device/usage | Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear
[**device_usage_five_get**](DeviceApi.md#device_usage_five_get) | **GET** /device/usage/five | Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC
[**device_usage_hour_get**](DeviceApi.md#device_usage_hour_get) | **GET** /device/usage/hour | Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC
[**device_usage_month_get**](DeviceApi.md#device_usage_month_get) | **GET** /device/usage/month | Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC
[**device_usage_year_get**](DeviceApi.md#device_usage_year_get) | **GET** /device/usage/year | Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC
[**device_wifi_available_get**](DeviceApi.md#device_wifi_available_get) | **GET** /device/wifi/available | Get the Wi-Fi available status


# **device_backup_available_get**
> boolean device_backup_available_get()

Get the user data backup available status

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_backup_available_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_backup_available_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_backup_data_delete**
> device_backup_data_delete()

Delete the user data backup

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_backup_data_delete();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_backup_data_delete: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_backup_data_get**
> string device_backup_data_get()

Download the user data backup

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_backup_data_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_backup_data_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_certificate_post**
> device_certificate_post(certificate => $certificate)

Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $certificate = WWW::OpenAPIClient::Object::Certificate->new(); # Certificate | 

eval {
    $api_instance->device_certificate_post(certificate => $certificate);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_certificate_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **certificate** | [**Certificate**](Certificate.md)|  | [optional] 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_clients_get**
> ARRAY[Client] device_clients_get()

Get a list of currently connected LAN clients. A '?' hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it's DHCP lease since the board's last reboot.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_clients_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_clients_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[Client]**](Client.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_export_users_get**
> string device_export_users_get()

Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_export_users_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_export_users_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_fw_image_delete**
> device_fw_image_delete()

Remove the staged device firmware image

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_fw_image_delete();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_fw_image_delete: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_fw_image_get**
> string device_fw_image_get()

Get info about the currently staged device firmware image

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_fw_image_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_fw_image_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_fw_image_put**
> device_fw_image_put(content_disposition => $content_disposition, body => $body)

Upload an image to be used for updating the device firmware

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $content_disposition = attachment; filename="Image.bin"; # string | 
my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->device_fw_image_put(content_disposition => $content_disposition, body => $body);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_fw_image_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_disposition** | **string**|  | 
 **body** | **string****string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/octet-stream
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_fw_last_update_result_get**
> DeviceFwLastUpdateResultGet200Response device_fw_last_update_result_get()

Gets the result of the last product firmware update

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_fw_last_update_result_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_fw_last_update_result_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DeviceFwLastUpdateResultGet200Response**](DeviceFwLastUpdateResultGet200Response.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_fw_update_post**
> DeviceFwUpdatePost200Response device_fw_update_post()

Update the device firmware using the staged image

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_fw_update_post();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_fw_update_post: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DeviceFwUpdatePost200Response**](DeviceFwUpdatePost200Response.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_gps_fix_get**
> GpsFix device_gps_fix_get()

Get the last GPS fix

This does not turn on the GPS receiver nor does it wait for a fix. It simply returns the last fix obtained from the GPS receiver. The last GPS fix is lost when the device is power cycled.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_gps_fix_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_gps_fix_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GpsFix**](GpsFix.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_gps_power_get**
> boolean device_gps_power_get()

Get the GPS power state

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_gps_power_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_gps_power_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_import_users_post**
> device_import_users_post(body => $body)

Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->device_import_users_post(body => $body);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_import_users_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_in_safe_mode_get**
> boolean device_in_safe_mode_get()

Get whether the device booted up in safe mode

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_in_safe_mode_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_in_safe_mode_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_info_get**
> DeviceInfo device_info_get()

Gets information about the device

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_info_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_info_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DeviceInfo**](DeviceInfo.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_api_version_get**
> string device_ird_api_version_get()

Get the active API version for the Iridium modem

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_api_version_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_api_version_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_boot_info_get**
> IrdBootInfo device_ird_boot_info_get()

Get the boot info for the Iridium modem

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_boot_info_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_boot_info_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdBootInfo**](IrdBootInfo.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_constellation_get**
> IrdConstellation device_ird_constellation_get()

Get the Iridium constellation state

This is available only when Iridium is in the available state.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_constellation_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_constellation_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdConstellation**](IrdConstellation.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_fw_image_delete**
> device_ird_fw_image_delete()

Remove the staged Iridium firmware image

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_ird_fw_image_delete();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_fw_image_delete: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_fw_image_get**
> string device_ird_fw_image_get()

Get info about the currently staged Iridium firmware image

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_fw_image_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_fw_image_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**string**

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_fw_image_put**
> device_ird_fw_image_put(content_disposition => $content_disposition, body => $body)

Upload an image to be used for updating the Iridium firmware

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $content_disposition = attachment; filename="Image.bin"; # string | 
my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->device_ird_fw_image_put(content_disposition => $content_disposition, body => $body);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_fw_image_put: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **content_disposition** | **string**|  | 
 **body** | **string****string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/octet-stream
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_fw_slot_slot_get**
> DeviceIrdFwSlotSlotGet200Response device_ird_fw_slot_slot_get(slot => $slot)

Get information about an Iridium firmware slot

This is available only when Iridium is in the available state.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $slot = "slot_example"; # string | The Iridium firmware slot to retrieve info about

eval {
    my $result = $api_instance->device_ird_fw_slot_slot_get(slot => $slot);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_fw_slot_slot_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **slot** | **string**| The Iridium firmware slot to retrieve info about | 

### Return type

[**DeviceIrdFwSlotSlotGet200Response**](DeviceIrdFwSlotSlotGet200Response.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_fw_update_post**
> device_ird_fw_update_post(body => $body)

Update the Iridium firmware using the staged image

This is available only when Iridium is in the available, recovery mode or unsupported API state and is in the inactive mode.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $body = WWW::OpenAPIClient::Object::string->new(); # string | 

eval {
    $api_instance->device_ird_fw_update_post(body => $body);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_fw_update_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **string**|  | 

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_hw_get**
> IrdHw device_ird_hw_get()

Get the hardware info for the Iridium modem

This is available only when Iridium is in the available state.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_hw_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_hw_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdHw**](IrdHw.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_reports_hwtest_get**
> IrdHwTestReport device_ird_reports_hwtest_get()

Get HW test report

This is available only when Iridium is in the available state.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_reports_hwtest_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_reports_hwtest_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdHwTestReport**](IrdHwTestReport.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_self_test_post**
> device_ird_self_test_post()

Run an Iridium self test

This is available only when Iridium is in the available state and is in the inactive mode.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_ird_self_test_post();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_self_test_post: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_sim_get**
> IrdSim device_ird_sim_get()

Get SIM info

This is available only when Iridium is in the available state.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_sim_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_sim_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdSim**](IrdSim.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_ird_state_get**
> IrdState device_ird_state_get()

Get the state for the Iridium modem

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_ird_state_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_ird_state_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**IrdState**](IrdState.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_reboot_post**
> device_reboot_post(recovery => $recovery)

Reboot the device

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $recovery = false; # boolean | Whether to reboot to recovery mode

eval {
    $api_instance->device_reboot_post(recovery => $recovery);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_reboot_post: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **recovery** | **boolean**| Whether to reboot to recovery mode | [optional] [default to false]

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_reset_startup_config_post**
> device_reset_startup_config_post()

Reset startup configuration to defaults

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_reset_startup_config_post();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_reset_startup_config_post: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_save_runtime_config_post**
> device_save_runtime_config_post()

Copy the runtime configuration to the startup configuration

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_save_runtime_config_post();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_save_runtime_config_post: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_time_get**
> TimeInfo device_time_get()

Get time info

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_time_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_time_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TimeInfo**](TimeInfo.md)

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_day_get**
> ARRAY[DataUsageEntry] device_usage_day_get(start => $start, end => $end)

Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $start = 2020-01-01; # string | 
my $end = 2021-02-20; # string | 

eval {
    my $result = $api_instance->device_usage_day_get(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_day_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  | [optional] 
 **end** | **string**|  | [optional] 

### Return type

[**ARRAY[DataUsageEntry]**](DataUsageEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_delete**
> device_usage_delete()

Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->device_usage_delete();
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_delete: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_five_get**
> ARRAY[DataUsageEntry] device_usage_five_get(start => $start, end => $end)

Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $start = 2020-01-01T05:00; # string | 
my $end = 2021-02-20T23:59; # string | 

eval {
    my $result = $api_instance->device_usage_five_get(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_five_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  | [optional] 
 **end** | **string**|  | [optional] 

### Return type

[**ARRAY[DataUsageEntry]**](DataUsageEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_hour_get**
> ARRAY[DataUsageEntry] device_usage_hour_get(start => $start, end => $end)

Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $start = 2020-01-01T05; # string | 
my $end = 2021-02-20T23; # string | 

eval {
    my $result = $api_instance->device_usage_hour_get(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_hour_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  | [optional] 
 **end** | **string**|  | [optional] 

### Return type

[**ARRAY[DataUsageEntry]**](DataUsageEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_month_get**
> ARRAY[DataUsageEntry] device_usage_month_get(start => $start, end => $end)

Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $start = 2020-01; # string | 
my $end = 2021-02; # string | 

eval {
    my $result = $api_instance->device_usage_month_get(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_month_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  | [optional] 
 **end** | **string**|  | [optional] 

### Return type

[**ARRAY[DataUsageEntry]**](DataUsageEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_usage_year_get**
> ARRAY[DataUsageEntry] device_usage_year_get(start => $start, end => $end)

Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAdminOnly
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $start = 2020; # string | 
my $end = 2021; # string | 

eval {
    my $result = $api_instance->device_usage_year_get(start => $start, end => $end);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_usage_year_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **string**|  | [optional] 
 **end** | **string**|  | [optional] 

### Return type

[**ARRAY[DataUsageEntry]**](DataUsageEntry.md)

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **device_wifi_available_get**
> boolean device_wifi_available_get()

Get the Wi-Fi available status

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::DeviceApi;
my $api_instance = WWW::OpenAPIClient::DeviceApi->new(

    # Configure bearer access token for authorization: BearerAuthAllRoles
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->device_wifi_available_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling DeviceApi->device_wifi_available_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

**boolean**

### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

