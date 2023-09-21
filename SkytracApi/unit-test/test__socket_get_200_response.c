#ifndef _socket_get_200_response_TEST
#define _socket_get_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _socket_get_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_socket_get_200_response.h"
_socket_get_200_response_t* instantiate__socket_get_200_response(int include_optional);

#include "test_gps_fix.c"


_socket_get_200_response_t* instantiate__socket_get_200_response(int include_optional) {
  _socket_get_200_response_t* _socket_get_200_response = NULL;
  if (include_optional) {
    _socket_get_200_response = _socket_get_200_response_create(
      quicksilver_web_api__socket_get_200_response_TYPE_event,
      quicksilver_web_api__socket_get_200_response_NAME_gpsUpdated,
       // false, not to have infinite recursion
      instantiate_gps_fix(0)
    );
  } else {
    _socket_get_200_response = _socket_get_200_response_create(
      quicksilver_web_api__socket_get_200_response_TYPE_event,
      quicksilver_web_api__socket_get_200_response_NAME_gpsUpdated,
      NULL
    );
  }

  return _socket_get_200_response;
}


#ifdef _socket_get_200_response_MAIN

void test__socket_get_200_response(int include_optional) {
    _socket_get_200_response_t* _socket_get_200_response_1 = instantiate__socket_get_200_response(include_optional);

	cJSON* json_socket_get_200_response_1 = _socket_get_200_response_convertToJSON(_socket_get_200_response_1);
	printf("_socket_get_200_response :\n%s\n", cJSON_Print(json_socket_get_200_response_1));
	_socket_get_200_response_t* _socket_get_200_response_2 = _socket_get_200_response_parseFromJSON(json_socket_get_200_response_1);
	cJSON* json_socket_get_200_response_2 = _socket_get_200_response_convertToJSON(_socket_get_200_response_2);
	printf("repeating _socket_get_200_response:\n%s\n", cJSON_Print(json_socket_get_200_response_2));
}

int main() {
  test__socket_get_200_response(1);
  test__socket_get_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _socket_get_200_response_MAIN
#endif // _socket_get_200_response_TEST
