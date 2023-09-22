# WWW::OpenAPIClient::Object::PatchOutgoingFirewallRule

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PatchOutgoingFirewallRule;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **string** | Unique display name. Must be 1-15 characters and only contain alphanumeric characters, &#39;_&#39;, &#39;-&#39;, &#39;.&#39;, and &#39;~&#39;.  | [optional] 
**protocol** | **string** | The protocol that this rule matches. \&quot;any\&quot; will match any protocol. | [optional] 
**dest_addr** | **string** | Either \&quot;any\&quot;, an IPv4 address in dotted notation, or a subnet specified using an IPv4 address followed by a forward slash and prefix between 0 and 32. When specifying a subnet, the IP address can be any address in the subnet and will be converted to the subnet&#39;s network address (first address of the subnet). | [optional] 
**dest_addr_neg** | **boolean** | Whether the rule matches every address not specified by destAddr. Must be false if destAddr is \&quot;any\&quot;. | [optional] 
**dest_port** | **string** | Either \&quot;any\&quot;, a single port, or a port range specified with a dash and no spaces. The ports must be 0-65535. | [optional] 
**dest_port_neg** | **boolean** | Whether the rule matches every port not specified by destPort. Must be false if destPort is \&quot;any\&quot;. | [optional] 
**action** | **string** | What to do when a packet is matched by this rule. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


