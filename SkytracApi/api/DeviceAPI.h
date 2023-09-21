#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/_device_fw_last_update_result_get_200_response.h"
#include "../model/_device_fw_update_post_200_response.h"
#include "../model/_device_ird_fw_slot__slot__get_200_response.h"
#include "../model/certificate.h"
#include "../model/client.h"
#include "../model/data_usage_entry.h"
#include "../model/device_info.h"
#include "../model/gps_fix.h"
#include "../model/ird_boot_info.h"
#include "../model/ird_constellation.h"
#include "../model/ird_hw.h"
#include "../model/ird_hw_test_report.h"
#include "../model/ird_sim.h"
#include "../model/ird_state.h"
#include "../model/time_info.h"

// Enum SLOT for DeviceAPI_deviceIrdFwSlotSlotGet
typedef enum  { quicksilver_web_api_deviceIrdFwSlotSlotGet_SLOT_NULL = 0, quicksilver_web_api_deviceIrdFwSlotSlotGet_SLOT_primary, quicksilver_web_api_deviceIrdFwSlotSlotGet_SLOT_fallback } quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e;


// Get the user data backup available status
//
int*
DeviceAPI_deviceBackupAvailableGet(apiClient_t *apiClient);


// Delete the user data backup
//
void
DeviceAPI_deviceBackupDataDelete(apiClient_t *apiClient);


// Download the user data backup
//
char*
DeviceAPI_deviceBackupDataGet(apiClient_t *apiClient);


// Update the HTTPS certificate. If certificate and key are not provided they will be automatically generated
//
void
DeviceAPI_deviceCertificatePost(apiClient_t *apiClient, certificate_t * certificate );


// Get a list of currently connected LAN clients. A '?' hostname value indicates that the client has not shared their hostname with the modem. Perhaps the client connected with a static IP or has not yet refreshed it's DHCP lease since the board's last reboot.
//
list_t*
DeviceAPI_deviceClientsGet(apiClient_t *apiClient);


// Export the users to a file with the encrypted passwords. This file can be used to import the users to any Quicksilver device
//
char*
DeviceAPI_deviceExportUsersGet(apiClient_t *apiClient);


// Remove the staged device firmware image
//
void
DeviceAPI_deviceFwImageDelete(apiClient_t *apiClient);


// Get info about the currently staged device firmware image
//
char*
DeviceAPI_deviceFwImageGet(apiClient_t *apiClient);


// Upload an image to be used for updating the device firmware
//
void
DeviceAPI_deviceFwImagePut(apiClient_t *apiClient, char * Content_Disposition , binary_t* body );


// Gets the result of the last product firmware update
//
_device_fw_last_update_result_get_200_response_t*
DeviceAPI_deviceFwLastUpdateResultGet(apiClient_t *apiClient);


// Update the device firmware using the staged image
//
_device_fw_update_post_200_response_t*
DeviceAPI_deviceFwUpdatePost(apiClient_t *apiClient);


// Get the last GPS fix
//
// This does not turn on the GPS receiver nor does it wait for a fix. It simply returns the last fix obtained from the GPS receiver. The last GPS fix is lost when the device is power cycled.
//
gps_fix_t*
DeviceAPI_deviceGpsFixGet(apiClient_t *apiClient);


// Get the GPS power state
//
int*
DeviceAPI_deviceGpsPowerGet(apiClient_t *apiClient);


// Add and modify users from the import file. Does not remove any users and does not modify the user doing the import. Cannot be used to modify passwords or set a new password
//
void
DeviceAPI_deviceImportUsersPost(apiClient_t *apiClient, char * body );


// Get whether the device booted up in safe mode
//
int*
DeviceAPI_deviceInSafeModeGet(apiClient_t *apiClient);


// Gets information about the device
//
device_info_t*
DeviceAPI_deviceInfoGet(apiClient_t *apiClient);


// Get the active API version for the Iridium modem
//
char*
DeviceAPI_deviceIrdApiVersionGet(apiClient_t *apiClient);


// Get the boot info for the Iridium modem
//
ird_boot_info_t*
DeviceAPI_deviceIrdBootInfoGet(apiClient_t *apiClient);


// Get the Iridium constellation state
//
// This is available only when Iridium is in the available state.
//
ird_constellation_t*
DeviceAPI_deviceIrdConstellationGet(apiClient_t *apiClient);


// Remove the staged Iridium firmware image
//
void
DeviceAPI_deviceIrdFwImageDelete(apiClient_t *apiClient);


// Get info about the currently staged Iridium firmware image
//
char*
DeviceAPI_deviceIrdFwImageGet(apiClient_t *apiClient);


// Upload an image to be used for updating the Iridium firmware
//
void
DeviceAPI_deviceIrdFwImagePut(apiClient_t *apiClient, char * Content_Disposition , binary_t* body );


// Get information about an Iridium firmware slot
//
// This is available only when Iridium is in the available state.
//
_device_ird_fw_slot__slot__get_200_response_t*
DeviceAPI_deviceIrdFwSlotSlotGet(apiClient_t *apiClient, quicksilver_web_api_deviceIrdFwSlotSlotGet_slot_e slot );


// Update the Iridium firmware using the staged image
//
// This is available only when Iridium is in the available, recovery mode or unsupported API state and is in the inactive mode.
//
void
DeviceAPI_deviceIrdFwUpdatePost(apiClient_t *apiClient, char * body );


// Get the hardware info for the Iridium modem
//
// This is available only when Iridium is in the available state.
//
ird_hw_t*
DeviceAPI_deviceIrdHwGet(apiClient_t *apiClient);


// Get HW test report
//
// This is available only when Iridium is in the available state.
//
ird_hw_test_report_t*
DeviceAPI_deviceIrdReportsHwtestGet(apiClient_t *apiClient);


// Run an Iridium self test
//
// This is available only when Iridium is in the available state and is in the inactive mode.
//
void
DeviceAPI_deviceIrdSelfTestPost(apiClient_t *apiClient);


// Get SIM info
//
// This is available only when Iridium is in the available state.
//
ird_sim_t*
DeviceAPI_deviceIrdSimGet(apiClient_t *apiClient);


// Get the state for the Iridium modem
//
ird_state_t*
DeviceAPI_deviceIrdStateGet(apiClient_t *apiClient);


// Reboot the device
//
void
DeviceAPI_deviceRebootPost(apiClient_t *apiClient, int recovery );


// Reset startup configuration to defaults
//
void
DeviceAPI_deviceResetStartupConfigPost(apiClient_t *apiClient);


// Copy the runtime configuration to the startup configuration
//
void
DeviceAPI_deviceSaveRuntimeConfigPost(apiClient_t *apiClient);


// Get time info
//
time_info_t*
DeviceAPI_deviceTimeGet(apiClient_t *apiClient);


// Get a daily summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 95 days in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageDayGet(apiClient_t *apiClient, char * start , char * end );


// Clear all data usage records. Please expect some unrecorded if this command is run during an active data session. It will take at least 5 minutes for new records to appear
//
void
DeviceAPI_deviceUsageDelete(apiClient_t *apiClient);


// Get a summary of data usage recorded in five minute increments. Time frame can be specified by the user, please note we can currently only display this information for 48 hours in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageFiveGet(apiClient_t *apiClient, char * start , char * end );


// Get an hourly summary of data usage. Time frame can be specified by the user, please note we can currently only display this information for 64 days in the past. Always in UTC
//
list_t*
DeviceAPI_deviceUsageHourGet(apiClient_t *apiClient, char * start , char * end );


// Get a monthly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t*
DeviceAPI_deviceUsageMonthGet(apiClient_t *apiClient, char * start , char * end );


// Get a yearly summary of data usage. Time frame can be specified by the user. Always in UTC
//
list_t*
DeviceAPI_deviceUsageYearGet(apiClient_t *apiClient, char * start , char * end );


// Get the Wi-Fi available status
//
int*
DeviceAPI_deviceWifiAvailableGet(apiClient_t *apiClient);


