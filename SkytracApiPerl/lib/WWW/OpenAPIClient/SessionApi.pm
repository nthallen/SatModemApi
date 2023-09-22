=begin comment

Quicksilver Web API

Further detail about the available features and configuration options can be found in the User Guide.    # Authorization All API calls use bearer authorization except for the following. - POST /api/user/sessions - Uses basic authorization - GET /api/events - Uses query string authorization  # Errors Since the following errors can happen with any API call or with a broad group of API calls, they are documented here rather than for each API call. - 400 (Bad Request). This may occur for any API call, due to the authorization header being malformed. It may also occur due to malformed or incorrect JSON structure of the request body. Other more specific reasons are documented on a per API basis below. - 401 (Unauthenticated) - 403 (Unauthorized). If the user is authenticated as a user with the Standard role, but the API call requires the Admin role. - 500 (Internal Server Error) 

The version of the OpenAPI document: 0.2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::SessionApi;

require 5.6.0;
use strict;
use warnings;
use utf8;
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::OpenAPIClient::ApiClient;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class = shift;
    my $api_client;

    if ($_[0] && ref $_[0] && ref $_[0] eq 'WWW::OpenAPIClient::ApiClient' ) {
        $api_client = $_[0];
    } else {
        $api_client = WWW::OpenAPIClient::ApiClient->new(@_);
    }

    bless { api_client => $api_client }, $class;

}


#
# session_delete
#
# Delete the session so that the tokens will no longer work
#
{
    my $params = {
    };
    __PACKAGE__->method_documentation->{ 'session_delete' } = {
        summary => 'Delete the session so that the tokens will no longer work',
        params => $params,
        returns => undef,
        };
}
# @return void
#
sub session_delete {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/session';

    my $_method = 'DELETE';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(BearerAuthAllRoles )];

    # make the API Call
    $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    return;
}

#
# session_refresh_post
#
# Generate new tokens for the current session and resets the session timeout
#
# @param string $body  (required)
{
    my $params = {
    'body' => {
        data_type => 'string',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'session_refresh_post' } = {
        summary => 'Generate new tokens for the current session and resets the session timeout',
        params => $params,
        returns => 'SessionRefreshPost200Response',
        };
}
# @return SessionRefreshPost200Response
#
sub session_refresh_post {
    my ($self, %args) = @_;

    # verify the required parameter 'body' is set
    unless (exists $args{'body'}) {
      croak("Missing the required parameter 'body' when calling session_refresh_post");
    }

    # parse inputs
    my $_resource_path = '/session/refresh';

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type('application/json');

    my $_body_data;
    # body params
    if ( exists $args{'body'}) {
        $_body_data = $args{'body'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(BearerAuthAllRoles )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('SessionRefreshPost200Response', $response);
    return $_response_object;
}

#
# sessions_post
#
# Generate a new session for the user which will timeout and be deleted after 15 minutes
#
{
    my $params = {
    };
    __PACKAGE__->method_documentation->{ 'sessions_post' } = {
        summary => 'Generate a new session for the user which will timeout and be deleted after 15 minutes',
        params => $params,
        returns => 'SessionsPost201Response',
        };
}
# @return SessionsPost201Response
#
sub sessions_post {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/sessions';

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(BasicAuthAllRoles )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('SessionsPost201Response', $response);
    return $_response_object;
}

1;
