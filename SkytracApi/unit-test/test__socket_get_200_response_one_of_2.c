#ifndef _socket_get_200_response_one_of_2_TEST
#define _socket_get_200_response_one_of_2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _socket_get_200_response_one_of_2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_socket_get_200_response_one_of_2.h"
_socket_get_200_response_one_of_2_t* instantiate__socket_get_200_response_one_of_2(int include_optional);

#include "test_ird_constellation.c"


_socket_get_200_response_one_of_2_t* instantiate__socket_get_200_response_one_of_2(int include_optional) {
  _socket_get_200_response_one_of_2_t* _socket_get_200_response_one_of_2 = NULL;
  if (include_optional) {
    _socket_get_200_response_one_of_2 = _socket_get_200_response_one_of_2_create(
      quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_2_NAME_constellationStateUpdated,
       // false, not to have infinite recursion
      instantiate_ird_constellation(0)
    );
  } else {
    _socket_get_200_response_one_of_2 = _socket_get_200_response_one_of_2_create(
      quicksilver_web_api__socket_get_200_response_one_of_2_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_2_NAME_constellationStateUpdated,
      NULL
    );
  }

  return _socket_get_200_response_one_of_2;
}


#ifdef _socket_get_200_response_one_of_2_MAIN

void test__socket_get_200_response_one_of_2(int include_optional) {
    _socket_get_200_response_one_of_2_t* _socket_get_200_response_one_of_2_1 = instantiate__socket_get_200_response_one_of_2(include_optional);

	cJSON* json_socket_get_200_response_one_of_2_1 = _socket_get_200_response_one_of_2_convertToJSON(_socket_get_200_response_one_of_2_1);
	printf("_socket_get_200_response_one_of_2 :\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_2_1));
	_socket_get_200_response_one_of_2_t* _socket_get_200_response_one_of_2_2 = _socket_get_200_response_one_of_2_parseFromJSON(json_socket_get_200_response_one_of_2_1);
	cJSON* json_socket_get_200_response_one_of_2_2 = _socket_get_200_response_one_of_2_convertToJSON(_socket_get_200_response_one_of_2_2);
	printf("repeating _socket_get_200_response_one_of_2:\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_2_2));
}

int main() {
  test__socket_get_200_response_one_of_2(1);
  test__socket_get_200_response_one_of_2(0);

  printf("Hello world \n");
  return 0;
}

#endif // _socket_get_200_response_one_of_2_MAIN
#endif // _socket_get_200_response_one_of_2_TEST
