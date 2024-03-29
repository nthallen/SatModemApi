=begin comment

Quicksilver Web API

Further detail about the available features and configuration options can be found in the User Guide.    # Authorization All API calls use bearer authorization except for the following. - POST /api/user/sessions - Uses basic authorization - GET /api/events - Uses query string authorization  # Errors Since the following errors can happen with any API call or with a broad group of API calls, they are documented here rather than for each API call. - 400 (Bad Request). This may occur for any API call, due to the authorization header being malformed. It may also occur due to malformed or incorrect JSON structure of the request body. Other more specific reasons are documented on a per API basis below. - 401 (Unauthenticated) - 403 (Unauthorized). If the user is authenticated as a user with the Standard role, but the API call requires the Admin role. - 500 (Internal Server Error) 

The version of the OpenAPI document: 0.2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by the OpenAPI Generator
# Please update the test cases below to test the model.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 2;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;


use_ok('WWW::OpenAPIClient::Object::ConfigurationResponseIrd');

# uncomment below and update the test
#my $instance = WWW::OpenAPIClient::Object::ConfigurationResponseIrd->new();
#
#isa_ok($instance, 'WWW::OpenAPIClient::Object::ConfigurationResponseIrd');

