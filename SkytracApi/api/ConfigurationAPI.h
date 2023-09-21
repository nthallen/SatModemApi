#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cfg_type.h"
#include "../model/configuration_response.h"
#include "../model/dns_settings_request.h"
#include "../model/dns_settings_response.h"
#include "../model/eth_settings_request.h"
#include "../model/eth_settings_response.h"
#include "../model/gps_dyn_platform_model.h"
#include "../model/ird_mode.h"
#include "../model/outgoing_firewall_rule.h"
#include "../model/patch_outgoing_firewall_rule.h"
#include "../model/patch_port_fwd_entry.h"
#include "../model/port_fwd_entry.h"
#include "../model/wi_fi_settings_request.h"
#include "../model/wi_fi_settings_response.h"

// Enum  for ConfigurationAPI_cfgTypeDnsGet
typedef enum  { quicksilver_web_api_cfgTypeDnsGet__NULL = 0, quicksilver_web_api_cfgTypeDnsGet__runtime, quicksilver_web_api_cfgTypeDnsGet__startup } quicksilver_web_api_cfgTypeDnsGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeDnsPatch
typedef enum  { quicksilver_web_api_cfgTypeDnsPatch__NULL = 0, quicksilver_web_api_cfgTypeDnsPatch__runtime, quicksilver_web_api_cfgTypeDnsPatch__startup } quicksilver_web_api_cfgTypeDnsPatch_type_e;

// Enum  for ConfigurationAPI_cfgTypeEthGet
typedef enum  { quicksilver_web_api_cfgTypeEthGet__NULL = 0, quicksilver_web_api_cfgTypeEthGet__runtime, quicksilver_web_api_cfgTypeEthGet__startup } quicksilver_web_api_cfgTypeEthGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeEthPatch
typedef enum  { quicksilver_web_api_cfgTypeEthPatch__NULL = 0, quicksilver_web_api_cfgTypeEthPatch__runtime, quicksilver_web_api_cfgTypeEthPatch__startup } quicksilver_web_api_cfgTypeEthPatch_type_e;

// Enum  for ConfigurationAPI_cfgTypeGet
typedef enum  { quicksilver_web_api_cfgTypeGet__NULL = 0, quicksilver_web_api_cfgTypeGet__runtime, quicksilver_web_api_cfgTypeGet__startup } quicksilver_web_api_cfgTypeGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsDynPlatformModelGet
typedef enum  { quicksilver_web_api_cfgTypeGpsDynPlatformModelGet__NULL = 0, quicksilver_web_api_cfgTypeGpsDynPlatformModelGet__runtime, quicksilver_web_api_cfgTypeGpsDynPlatformModelGet__startup } quicksilver_web_api_cfgTypeGpsDynPlatformModelGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsDynPlatformModelPut
typedef enum  { quicksilver_web_api_cfgTypeGpsDynPlatformModelPut__NULL = 0, quicksilver_web_api_cfgTypeGpsDynPlatformModelPut__runtime, quicksilver_web_api_cfgTypeGpsDynPlatformModelPut__startup } quicksilver_web_api_cfgTypeGpsDynPlatformModelPut_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsKeepOnGet
typedef enum  { quicksilver_web_api_cfgTypeGpsKeepOnGet__NULL = 0, quicksilver_web_api_cfgTypeGpsKeepOnGet__runtime, quicksilver_web_api_cfgTypeGpsKeepOnGet__startup } quicksilver_web_api_cfgTypeGpsKeepOnGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsKeepOnPut
typedef enum  { quicksilver_web_api_cfgTypeGpsKeepOnPut__NULL = 0, quicksilver_web_api_cfgTypeGpsKeepOnPut__runtime, quicksilver_web_api_cfgTypeGpsKeepOnPut__startup } quicksilver_web_api_cfgTypeGpsKeepOnPut_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsSyncTimeGet
typedef enum  { quicksilver_web_api_cfgTypeGpsSyncTimeGet__NULL = 0, quicksilver_web_api_cfgTypeGpsSyncTimeGet__runtime, quicksilver_web_api_cfgTypeGpsSyncTimeGet__startup } quicksilver_web_api_cfgTypeGpsSyncTimeGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeGpsSyncTimePut
typedef enum  { quicksilver_web_api_cfgTypeGpsSyncTimePut__NULL = 0, quicksilver_web_api_cfgTypeGpsSyncTimePut__runtime, quicksilver_web_api_cfgTypeGpsSyncTimePut__startup } quicksilver_web_api_cfgTypeGpsSyncTimePut_type_e;

// Enum  for ConfigurationAPI_cfgTypeIrdModeGet
typedef enum  { quicksilver_web_api_cfgTypeIrdModeGet__NULL = 0, quicksilver_web_api_cfgTypeIrdModeGet__runtime, quicksilver_web_api_cfgTypeIrdModeGet__startup } quicksilver_web_api_cfgTypeIrdModeGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeIrdModePut
typedef enum  { quicksilver_web_api_cfgTypeIrdModePut__NULL = 0, quicksilver_web_api_cfgTypeIrdModePut__runtime, quicksilver_web_api_cfgTypeIrdModePut__startup } quicksilver_web_api_cfgTypeIrdModePut_type_e;

// Enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet
typedef enum  { quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet__NULL = 0, quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet__runtime, quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet__startup } quicksilver_web_api_cfgTypeOutgoingFirewallRulesGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete
typedef enum  { quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete__NULL = 0, quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete__runtime, quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete__startup } quicksilver_web_api_cfgTypeOutgoingFirewallRulesNameDelete_type_e;

// Enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch
typedef enum  { quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch__NULL = 0, quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch__runtime, quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch__startup } quicksilver_web_api_cfgTypeOutgoingFirewallRulesNamePatch_type_e;

// Enum  for ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost
typedef enum  { quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost__NULL = 0, quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost__runtime, quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost__startup } quicksilver_web_api_cfgTypeOutgoingFirewallRulesPost_type_e;

// Enum  for ConfigurationAPI_cfgTypePortFwdEntriesGet
typedef enum  { quicksilver_web_api_cfgTypePortFwdEntriesGet__NULL = 0, quicksilver_web_api_cfgTypePortFwdEntriesGet__runtime, quicksilver_web_api_cfgTypePortFwdEntriesGet__startup } quicksilver_web_api_cfgTypePortFwdEntriesGet_type_e;

// Enum  for ConfigurationAPI_cfgTypePortFwdEntriesNameDelete
typedef enum  { quicksilver_web_api_cfgTypePortFwdEntriesNameDelete__NULL = 0, quicksilver_web_api_cfgTypePortFwdEntriesNameDelete__runtime, quicksilver_web_api_cfgTypePortFwdEntriesNameDelete__startup } quicksilver_web_api_cfgTypePortFwdEntriesNameDelete_type_e;

// Enum  for ConfigurationAPI_cfgTypePortFwdEntriesNamePatch
typedef enum  { quicksilver_web_api_cfgTypePortFwdEntriesNamePatch__NULL = 0, quicksilver_web_api_cfgTypePortFwdEntriesNamePatch__runtime, quicksilver_web_api_cfgTypePortFwdEntriesNamePatch__startup } quicksilver_web_api_cfgTypePortFwdEntriesNamePatch_type_e;

// Enum  for ConfigurationAPI_cfgTypePortFwdEntriesPost
typedef enum  { quicksilver_web_api_cfgTypePortFwdEntriesPost__NULL = 0, quicksilver_web_api_cfgTypePortFwdEntriesPost__runtime, quicksilver_web_api_cfgTypePortFwdEntriesPost__startup } quicksilver_web_api_cfgTypePortFwdEntriesPost_type_e;

// Enum  for ConfigurationAPI_cfgTypeWifiEnabledGet
typedef enum  { quicksilver_web_api_cfgTypeWifiEnabledGet__NULL = 0, quicksilver_web_api_cfgTypeWifiEnabledGet__runtime, quicksilver_web_api_cfgTypeWifiEnabledGet__startup } quicksilver_web_api_cfgTypeWifiEnabledGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeWifiGet
typedef enum  { quicksilver_web_api_cfgTypeWifiGet__NULL = 0, quicksilver_web_api_cfgTypeWifiGet__runtime, quicksilver_web_api_cfgTypeWifiGet__startup } quicksilver_web_api_cfgTypeWifiGet_type_e;

// Enum  for ConfigurationAPI_cfgTypeWifiPatch
typedef enum  { quicksilver_web_api_cfgTypeWifiPatch__NULL = 0, quicksilver_web_api_cfgTypeWifiPatch__runtime, quicksilver_web_api_cfgTypeWifiPatch__startup } quicksilver_web_api_cfgTypeWifiPatch_type_e;


// Get the DNS settings
//
dns_settings_response_t*
ConfigurationAPI_cfgTypeDnsGet(apiClient_t *apiClient, cfg_type_e type );


// Set the DNS settings
//
void
ConfigurationAPI_cfgTypeDnsPatch(apiClient_t *apiClient, cfg_type_e type , dns_settings_request_t * dns_settings_request );


// Get the Ethernet settings
//
eth_settings_response_t*
ConfigurationAPI_cfgTypeEthGet(apiClient_t *apiClient, cfg_type_e type );


// Set the Ethernet settings. Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask
//
void
ConfigurationAPI_cfgTypeEthPatch(apiClient_t *apiClient, cfg_type_e type , eth_settings_request_t * eth_settings_request );


// Get the complete configuration
//
configuration_response_t*
ConfigurationAPI_cfgTypeGet(apiClient_t *apiClient, cfg_type_e type );


// Get the GPS dynamic platform model setting
//
gps_dyn_platform_model_t*
ConfigurationAPI_cfgTypeGpsDynPlatformModelGet(apiClient_t *apiClient, cfg_type_e type );


// Set the GPS dynamic platform model setting
//
void
ConfigurationAPI_cfgTypeGpsDynPlatformModelPut(apiClient_t *apiClient, cfg_type_e type ,  body );


// Get the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
int*
ConfigurationAPI_cfgTypeGpsKeepOnGet(apiClient_t *apiClient, cfg_type_e type );


// Set the GPS keep on setting. This indicates whether GPS will remain on or turn off and on automatically as needed
//
void
ConfigurationAPI_cfgTypeGpsKeepOnPut(apiClient_t *apiClient, cfg_type_e type , int body );


// Get the GPS sync time setting.
//
int*
ConfigurationAPI_cfgTypeGpsSyncTimeGet(apiClient_t *apiClient, cfg_type_e type );


// Set the GPS sync time setting. If set to true this will synchronize system time with the time received from the GPS fix.
//
void
ConfigurationAPI_cfgTypeGpsSyncTimePut(apiClient_t *apiClient, cfg_type_e type , int body );


// Get the Iridium mode
//
ird_mode_t*
ConfigurationAPI_cfgTypeIrdModeGet(apiClient_t *apiClient, cfg_type_e type );


// Set the Iridium mode. Please make sure device's system time is synced before turning on data mode.
//
void
ConfigurationAPI_cfgTypeIrdModePut(apiClient_t *apiClient, cfg_type_e type ,  body );


// Get the outgoing firewall rules
//
list_t*
ConfigurationAPI_cfgTypeOutgoingFirewallRulesGet(apiClient_t *apiClient, cfg_type_e type );


// Remove a rule from the outgoing firewall
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesNameDelete(apiClient_t *apiClient, cfg_type_e type , char * name );


// Update an outgoing firewall rule
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesNamePatch(apiClient_t *apiClient, cfg_type_e type , char * name , patch_outgoing_firewall_rule_t * patch_outgoing_firewall_rule );


// Inserts a rule into the outgoing firewall
//
void
ConfigurationAPI_cfgTypeOutgoingFirewallRulesPost(apiClient_t *apiClient, cfg_type_e type , outgoing_firewall_rule_t * outgoing_firewall_rule , char * before );


// Get the port forwarding entries
//
list_t*
ConfigurationAPI_cfgTypePortFwdEntriesGet(apiClient_t *apiClient, cfg_type_e type );


// Remove a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesNameDelete(apiClient_t *apiClient, cfg_type_e type , char * name );


// Update a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesNamePatch(apiClient_t *apiClient, cfg_type_e type , char * name , patch_port_fwd_entry_t * patch_port_fwd_entry );


// Add a port forwarding entry
//
void
ConfigurationAPI_cfgTypePortFwdEntriesPost(apiClient_t *apiClient, cfg_type_e type , port_fwd_entry_t * port_fwd_entry );


// Get the Wi-Fi enabled configuration
//
int*
ConfigurationAPI_cfgTypeWifiEnabledGet(apiClient_t *apiClient, cfg_type_e type );


// Get the Wi-Fi configuration
//
wi_fi_settings_response_t*
ConfigurationAPI_cfgTypeWifiGet(apiClient_t *apiClient, cfg_type_e type );


// Set the Wi-Fi configuration
//
// Please note that if you change the address at which you are accessing the server you WILL LOSE connection and have to reconnect at the new address. DHCP settings should be updated to ensure that the range falls within the network defined by the address and mask.
//
void
ConfigurationAPI_cfgTypeWifiPatch(apiClient_t *apiClient, cfg_type_e type , wi_fi_settings_request_t * wi_fi_settings_request );


