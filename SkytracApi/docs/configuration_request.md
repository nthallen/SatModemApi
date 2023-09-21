# configuration_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**web_api_version** | **char \*** | {major}.{minor}.{patch}. The web API version that produced this configuration. | [optional] 
**dns** | [**dns_settings_request_t**](dns_settings_request.md) \* |  | [optional] 
**eth** | [**eth_settings_request_t**](eth_settings_request.md) \* |  | [optional] 
**gps** | [**configuration_request_gps_t**](configuration_request_gps.md) \* |  | [optional] 
**wifi** | [**wi_fi_settings_request_t**](wi_fi_settings_request.md) \* |  | [optional] 
**ird** | [**configuration_request_ird_t**](configuration_request_ird.md) \* |  | [optional] 
**outgoing_firewall** | [**configuration_request_outgoing_firewall_t**](configuration_request_outgoing_firewall.md) \* |  | [optional] 
**port_fwd** | [**configuration_request_port_fwd_t**](configuration_request_port_fwd.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


