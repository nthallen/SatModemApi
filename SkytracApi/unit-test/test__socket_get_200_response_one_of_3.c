#ifndef _socket_get_200_response_one_of_3_TEST
#define _socket_get_200_response_one_of_3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _socket_get_200_response_one_of_3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_socket_get_200_response_one_of_3.h"
_socket_get_200_response_one_of_3_t* instantiate__socket_get_200_response_one_of_3(int include_optional);

#include "test_gps_fix.c"


_socket_get_200_response_one_of_3_t* instantiate__socket_get_200_response_one_of_3(int include_optional) {
  _socket_get_200_response_one_of_3_t* _socket_get_200_response_one_of_3 = NULL;
  if (include_optional) {
    _socket_get_200_response_one_of_3 = _socket_get_200_response_one_of_3_create(
      quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_3_NAME_gpsUpdated,
       // false, not to have infinite recursion
      instantiate_gps_fix(0)
    );
  } else {
    _socket_get_200_response_one_of_3 = _socket_get_200_response_one_of_3_create(
      quicksilver_web_api__socket_get_200_response_one_of_3_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_3_NAME_gpsUpdated,
      NULL
    );
  }

  return _socket_get_200_response_one_of_3;
}


#ifdef _socket_get_200_response_one_of_3_MAIN

void test__socket_get_200_response_one_of_3(int include_optional) {
    _socket_get_200_response_one_of_3_t* _socket_get_200_response_one_of_3_1 = instantiate__socket_get_200_response_one_of_3(include_optional);

	cJSON* json_socket_get_200_response_one_of_3_1 = _socket_get_200_response_one_of_3_convertToJSON(_socket_get_200_response_one_of_3_1);
	printf("_socket_get_200_response_one_of_3 :\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_3_1));
	_socket_get_200_response_one_of_3_t* _socket_get_200_response_one_of_3_2 = _socket_get_200_response_one_of_3_parseFromJSON(json_socket_get_200_response_one_of_3_1);
	cJSON* json_socket_get_200_response_one_of_3_2 = _socket_get_200_response_one_of_3_convertToJSON(_socket_get_200_response_one_of_3_2);
	printf("repeating _socket_get_200_response_one_of_3:\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_3_2));
}

int main() {
  test__socket_get_200_response_one_of_3(1);
  test__socket_get_200_response_one_of_3(0);

  printf("Hello world \n");
  return 0;
}

#endif // _socket_get_200_response_one_of_3_MAIN
#endif // _socket_get_200_response_one_of_3_TEST
