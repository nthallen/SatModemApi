# DeviceAPI

All URIs are relative to *https://192.168.20.1/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeviceAPI_deviceBackupAvailableGet**](DeviceAPI.md#DeviceAPI_deviceBackupAvailableGet) | **GET** /device/backup/available | Get the user data backup available status
[**DeviceAPI_deviceBackupDataDelete**](DeviceAPI.md#DeviceAPI_deviceBackupDataDelete) | **DELETE** /device/backup/data | Delete the user data backup
[**DeviceAPI_deviceBackupDataGet**](DeviceAPI.md#DeviceAPI_deviceBackupDataGet) | **GET** /device/backup/data | Download the user data backup
[**DeviceAPI_deviceCertificatePost**](DeviceAPI.md#DeviceAPI_deviceCertificatePost) | **POST** /device/certificate | Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated
[**DeviceAPI_deviceClientsGet**](DeviceAPI.md#DeviceAPI_deviceClientsGet) | **GET** /device/clients | Get a list of currently connected LAN clients. A &#39;?&#39; hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it&#39;s DHCP lease since the board&#39;s last reboot.
[**DeviceAPI_deviceExportUsersGet**](DeviceAPI.md#DeviceAPI_deviceExportUsersGet) | **GET** /device/exportUsers | Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device
[**DeviceAPI_deviceFwImageDelete**](DeviceAPI.md#DeviceAPI_deviceFwImageDelete) | **DELETE** /device/fw/image | Remove the staged device firmware image
[**DeviceAPI_deviceFwImageGet**](DeviceAPI.md#DeviceAPI_deviceFwImageGet) | **GET** /device/fw/image | Get info about the currently staged device firmware image
[**DeviceAPI_deviceFwImagePut**](DeviceAPI.md#DeviceAPI_deviceFwImagePut) | **PUT** /device/fw/image | Upload an image to be used for updating the device firmware
[**DeviceAPI_deviceFwLastUpdateResultGet**](DeviceAPI.md#DeviceAPI_deviceFwLastUpdateResultGet) | **GET** /device/fw/lastUpdateResult | Gets the result of the last product firmware update
[**DeviceAPI_deviceFwUpdatePost**](DeviceAPI.md#DeviceAPI_deviceFwUpdatePost) | **POST** /device/fw/update | Update the device firmware using the staged image
[**DeviceAPI_deviceGpsFixGet**](DeviceAPI.md#DeviceAPI_deviceGpsFixGet) | **GET** /device/gps/fix | Get the last GPS fix
[**DeviceAPI_deviceGpsPowerGet**](DeviceAPI.md#DeviceAPI_deviceGpsPowerGet) | **GET** /device/gps/power | Get the GPS power state
[**DeviceAPI_deviceImportUsersPost**](DeviceAPI.md#DeviceAPI_deviceImportUsersPost) | **POST** /device/importUsers | Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password
[**DeviceAPI_deviceInSafeModeGet**](DeviceAPI.md#DeviceAPI_deviceInSafeModeGet) | **GET** /device/inSafeMode | Get whether the device booted up in safe mode
[**DeviceAPI_deviceInfoGet**](DeviceAPI.md#DeviceAPI_deviceInfoGet) | **GET** /device/info | Gets information about the device
[**DeviceAPI_deviceIrdApiVersionGet**](DeviceAPI.md#DeviceAPI_deviceIrdApiVersionGet) | **GET** /device/ird/apiVersion | Get the active API version for the Iridium modem
[**DeviceAPI_deviceIrdBootInfoGet**](DeviceAPI.md#DeviceAPI_deviceIrdBootInfoGet) | **GET** /device/ird/bootInfo | Get the boot info for the Iridium modem
[**DeviceAPI_deviceIrdConstellationGet**](DeviceAPI.md#DeviceAPI_deviceIrdConstellationGet) | **GET** /device/ird/constellation | Get the Iridium constellation state
[**DeviceAPI_deviceIrdFwImageDelete**](DeviceAPI.md#DeviceAPI_deviceIrdFwImageDelete) | **DELETE** /device/ird/fw/image | Remove the staged Iridium firmware image
[**DeviceAPI_deviceIrdFwImageGet**](DeviceAPI.md#DeviceAPI_deviceIrdFwImageGet) | **GET** /device/ird/fw/image | Get info about the currently staged Iridium firmware image
[**DeviceAPI_deviceIrdFwImagePut**](DeviceAPI.md#DeviceAPI_deviceIrdFwImagePut) | **PUT** /device/ird/fw/image | Upload an image to be used for updating the Iridium firmware
[**DeviceAPI_deviceIrdFwSlotSlotGet**](DeviceAPI.md#DeviceAPI_deviceIrdFwSlotSlotGet) | **GET** /device/ird/fw/slot/{slot} | Get information about an Iridium firmware slot
[**DeviceAPI_deviceIrdFwUpdatePost**](DeviceAPI.md#DeviceAPI_deviceIrdFwUpdatePost) | **POST** /device/ird/fw/update | Update the Iridium firmware using the staged image
[**DeviceAPI_deviceIrdHwGet**](DeviceAPI.md#DeviceAPI_deviceIrdHwGet) | **GET** /device/ird/hw | Get the hardware info for the Iridium modem
[**DeviceAPI_deviceIrdReportsHwtestGet**](DeviceAPI.md#DeviceAPI_deviceIrdReportsHwtestGet) | **GET** /device/ird/reports/hwtest | Get HW test report
[**DeviceAPI_deviceIrdSelfTestPost**](DeviceAPI.md#DeviceAPI_deviceIrdSelfTestPost) | **POST** /device/ird/selfTest | Run an Iridium self test
[**DeviceAPI_deviceIrdSimGet**](DeviceAPI.md#DeviceAPI_deviceIrdSimGet) | **GET** /device/ird/sim | Get SIM info
[**DeviceAPI_deviceIrdStateGet**](DeviceAPI.md#DeviceAPI_deviceIrdStateGet) | **GET** /device/ird/state | Get the state for the Iridium modem
[**DeviceAPI_deviceRebootPost**](DeviceAPI.md#DeviceAPI_deviceRebootPost) | **POST** /device/reboot | Reboot the device
[**DeviceAPI_deviceResetStartupConfigPost**](DeviceAPI.md#DeviceAPI_deviceResetStartupConfigPost) | **POST** /device/resetStartupConfig | Reset startup configuration to defaults
[**DeviceAPI_deviceSaveRuntimeConfigPost**](DeviceAPI.md#DeviceAPI_deviceSaveRuntimeConfigPost) | **POST** /device/saveRuntimeConfig | Copy the runtime configuration to the startup configuration
[**DeviceAPI_deviceTimeGet**](DeviceAPI.md#DeviceAPI_deviceTimeGet) | **GET** /device/time | Get time info
[**DeviceAPI_deviceUsageDayGet**](DeviceAPI.md#DeviceAPI_deviceUsageDayGet) | **GET** /device/usage/day | Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC
[**DeviceAPI_deviceUsageDelete**](DeviceAPI.md#DeviceAPI_deviceUsageDelete) | **DELETE** /device/usage | Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear
[**DeviceAPI_deviceUsageFiveGet**](DeviceAPI.md#DeviceAPI_deviceUsageFiveGet) | **GET** /device/usage/five | Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC
[**DeviceAPI_deviceUsageHourGet**](DeviceAPI.md#DeviceAPI_deviceUsageHourGet) | **GET** /device/usage/hour | Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC
[**DeviceAPI_deviceUsageMonthGet**](DeviceAPI.md#DeviceAPI_deviceUsageMonthGet) | **GET** /device/usage/month | Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC
[**DeviceAPI_deviceUsageYearGet**](DeviceAPI.md#DeviceAPI_deviceUsageYearGet) | **GET** /device/usage/year | Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC
[**DeviceAPI_deviceWifiAvailableGet**](DeviceAPI.md#DeviceAPI_deviceWifiAvailableGet) | **GET** /device/wifi/available | Get the Wi-Fi available status


# **DeviceAPI_deviceBackupAvailableGet**
```c
// Get the user data backup available status
//
int* DeviceAPI_deviceBackupAvailableGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceBackupDataDelete**
```c
// Delete the user data backup
//
void DeviceAPI_deviceBackupDataDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceBackupDataGet**
```c
// Download the user data backup
//
char* DeviceAPI_deviceBackupDataGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceCertificatePost**
```c
// Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated
//
void DeviceAPI_deviceCertificatePost(apiClient_t *apiClient, certificate_t * certificate);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**certificate** | **[certificate_t](certificate.md) \*** |  | [optional] 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceClientsGet**
```c
// Get a list of currently connected LAN clients. A '?' hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it's DHCP lease since the board's last reboot.
//
list_t* DeviceAPI_deviceClientsGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](client.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceExportUsersGet**
```c
// Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device
//
char* DeviceAPI_deviceExportUsersGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceFwImageDelete**
```c
// Remove the staged device firmware image
//
void DeviceAPI_deviceFwImageDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceFwImageGet**
```c
// Get info about the currently staged device firmware image
//
char* DeviceAPI_deviceFwImageGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceFwImagePut**
```c
// Upload an image to be used for updating the device firmware
//
void DeviceAPI_deviceFwImagePut(apiClient_t *apiClient, char * Content_Disposition, binary_t* body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Content_Disposition** | **char \*** |  | 
**body** | **binary_t*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/octet-stream
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceFwLastUpdateResultGet**
```c
// Gets the result of the last product firmware update
//
_device_fw_last_update_result_get_200_response_t* DeviceAPI_deviceFwLastUpdateResultGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[_device_fw_last_update_result_get_200_response_t](_device_fw_last_update_result_get_200_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceFwUpdatePost**
```c
// Update the device firmware using the staged image
//
_device_fw_update_post_200_response_t* DeviceAPI_deviceFwUpdatePost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[_device_fw_update_post_200_response_t](_device_fw_update_post_200_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceGpsFixGet**
```c
// Get the last GPS fix
//
// This does not turn on the GPS receiver nor does it wait for a fix. It simply returns the last fix obtained from the GPS receiver. The last GPS fix is lost when the device is power cycled.
//
gps_fix_t* DeviceAPI_deviceGpsFixGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[gps_fix_t](gps_fix.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceGpsPowerGet**
```c
// Get the GPS power state
//
int* DeviceAPI_deviceGpsPowerGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceImportUsersPost**
```c
// Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password
//
void DeviceAPI_deviceImportUsersPost(apiClient_t *apiClient, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **char \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceInSafeModeGet**
```c
// Get whether the device booted up in safe mode
//
int* DeviceAPI_deviceInSafeModeGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceInfoGet**
```c
// Gets information about the device
//
device_info_t* DeviceAPI_deviceInfoGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[device_info_t](device_info.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdApiVersionGet**
```c
// Get the active API version for the Iridium modem
//
char* DeviceAPI_deviceIrdApiVersionGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdBootInfoGet**
```c
// Get the boot info for the Iridium modem
//
ird_boot_info_t* DeviceAPI_deviceIrdBootInfoGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_boot_info_t](ird_boot_info.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdConstellationGet**
```c
// Get the Iridium constellation state
//
// This is available only when Iridium is in the available state.
//
ird_constellation_t* DeviceAPI_deviceIrdConstellationGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_constellation_t](ird_constellation.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdFwImageDelete**
```c
// Remove the staged Iridium firmware image
//
void DeviceAPI_deviceIrdFwImageDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdFwImageGet**
```c
// Get info about the currently staged Iridium firmware image
//
char* DeviceAPI_deviceIrdFwImageGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

char*



### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdFwImagePut**
```c
// Upload an image to be used for updating the Iridium firmware
//
void DeviceAPI_deviceIrdFwImagePut(apiClient_t *apiClient, char * Content_Disposition, binary_t* body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Content_Disposition** | **char \*** |  | 
**body** | **binary_t*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/octet-stream
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdFwSlotSlotGet**
```c
// Get information about an Iridium firmware slot
//
// This is available only when Iridium is in the available state.
//
_device_ird_fw_slot__slot__get_200_response_t* DeviceAPI_deviceIrdFwSlotSlotGet(apiClient_t *apiClient, quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e slot);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**slot** | **quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e** | The Iridium firmware slot to retrieve info about | 

### Return type

[_device_ird_fw_slot__slot__get_200_response_t](_device_ird_fw_slot__slot__get_200_response.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdFwUpdatePost**
```c
// Update the Iridium firmware using the staged image
//
// This is available only when Iridium is in the available, recovery mode or unsupported API state and is in the inactive mode.
//
void DeviceAPI_deviceIrdFwUpdatePost(apiClient_t *apiClient, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **char \*** |  | 

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdHwGet**
```c
// Get the hardware info for the Iridium modem
//
// This is available only when Iridium is in the available state.
//
ird_hw_t* DeviceAPI_deviceIrdHwGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_hw_t](ird_hw.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdReportsHwtestGet**
```c
// Get HW test report
//
// This is available only when Iridium is in the available state.
//
ird_hw_test_report_t* DeviceAPI_deviceIrdReportsHwtestGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_hw_test_report_t](ird_hw_test_report.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdSelfTestPost**
```c
// Run an Iridium self test
//
// This is available only when Iridium is in the available state and is in the inactive mode.
//
void DeviceAPI_deviceIrdSelfTestPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdSimGet**
```c
// Get SIM info
//
// This is available only when Iridium is in the available state.
//
ird_sim_t* DeviceAPI_deviceIrdSimGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_sim_t](ird_sim.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceIrdStateGet**
```c
// Get the state for the Iridium modem
//
ird_state_t* DeviceAPI_deviceIrdStateGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ird_state_t](ird_state.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceRebootPost**
```c
// Reboot the device
//
void DeviceAPI_deviceRebootPost(apiClient_t *apiClient, int recovery);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recovery** | **int** | Whether to reboot to recovery mode | [optional] [default to false]

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceResetStartupConfigPost**
```c
// Reset startup configuration to defaults
//
void DeviceAPI_deviceResetStartupConfigPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceSaveRuntimeConfigPost**
```c
// Copy the runtime configuration to the startup configuration
//
void DeviceAPI_deviceSaveRuntimeConfigPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceTimeGet**
```c
// Get time info
//
time_info_t* DeviceAPI_deviceTimeGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[time_info_t](time_info.md) *


### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageDayGet**
```c
// Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC
//
list_t* DeviceAPI_deviceUsageDayGet(apiClient_t *apiClient, char * start, char * end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** |  | [optional] 
**end** | **char \*** |  | [optional] 

### Return type

[list_t](data_usage_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageDelete**
```c
// Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear
//
void DeviceAPI_deviceUsageDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageFiveGet**
```c
// Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC
//
list_t* DeviceAPI_deviceUsageFiveGet(apiClient_t *apiClient, char * start, char * end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** |  | [optional] 
**end** | **char \*** |  | [optional] 

### Return type

[list_t](data_usage_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageHourGet**
```c
// Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC
//
list_t* DeviceAPI_deviceUsageHourGet(apiClient_t *apiClient, char * start, char * end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** |  | [optional] 
**end** | **char \*** |  | [optional] 

### Return type

[list_t](data_usage_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageMonthGet**
```c
// Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t* DeviceAPI_deviceUsageMonthGet(apiClient_t *apiClient, char * start, char * end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** |  | [optional] 
**end** | **char \*** |  | [optional] 

### Return type

[list_t](data_usage_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceUsageYearGet**
```c
// Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t* DeviceAPI_deviceUsageYearGet(apiClient_t *apiClient, char * start, char * end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** |  | [optional] 
**end** | **char \*** |  | [optional] 

### Return type

[list_t](data_usage_entry.md) *


### Authorization

[BearerAuthAdminOnly](../README.md#BearerAuthAdminOnly)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeviceAPI_deviceWifiAvailableGet**
```c
// Get the Wi-Fi available status
//
int* DeviceAPI_deviceWifiAvailableGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

int*



### Authorization

[BearerAuthAllRoles](../README.md#BearerAuthAllRoles)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

