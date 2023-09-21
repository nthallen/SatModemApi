# post_user_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **char \*** | Name of user. Must be 1-16 characters and contains only alphanumeric characters, &#39;_&#39;, &#39;-&#39;, &#39;.&#39;, and &#39;~&#39; so that it is URL safe.  | 
**role** | **quicksilver_web_api_post_user_ROLE_e** | Role | 
**pwd** | **char \*** | Must be 8-32 characters and include 3/4 of lower case letter, upper case letters, numeric, special. Cannot include username. | 
**locked** | **int** | Locked status | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


