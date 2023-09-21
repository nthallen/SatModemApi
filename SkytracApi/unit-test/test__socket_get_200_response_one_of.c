#ifndef _socket_get_200_response_one_of_TEST
#define _socket_get_200_response_one_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _socket_get_200_response_one_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_socket_get_200_response_one_of.h"
_socket_get_200_response_one_of_t* instantiate__socket_get_200_response_one_of(int include_optional);



_socket_get_200_response_one_of_t* instantiate__socket_get_200_response_one_of(int include_optional) {
  _socket_get_200_response_one_of_t* _socket_get_200_response_one_of = NULL;
  if (include_optional) {
    _socket_get_200_response_one_of = _socket_get_200_response_one_of_create(
      quicksilver_web_api__socket_get_200_response_one_of_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_NAME_id,
      "33AA33BB33AA33BB33AA33BB33AA33BB"
    );
  } else {
    _socket_get_200_response_one_of = _socket_get_200_response_one_of_create(
      quicksilver_web_api__socket_get_200_response_one_of_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_NAME_id,
      "33AA33BB33AA33BB33AA33BB33AA33BB"
    );
  }

  return _socket_get_200_response_one_of;
}


#ifdef _socket_get_200_response_one_of_MAIN

void test__socket_get_200_response_one_of(int include_optional) {
    _socket_get_200_response_one_of_t* _socket_get_200_response_one_of_1 = instantiate__socket_get_200_response_one_of(include_optional);

	cJSON* json_socket_get_200_response_one_of_1 = _socket_get_200_response_one_of_convertToJSON(_socket_get_200_response_one_of_1);
	printf("_socket_get_200_response_one_of :\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_1));
	_socket_get_200_response_one_of_t* _socket_get_200_response_one_of_2 = _socket_get_200_response_one_of_parseFromJSON(json_socket_get_200_response_one_of_1);
	cJSON* json_socket_get_200_response_one_of_2 = _socket_get_200_response_one_of_convertToJSON(_socket_get_200_response_one_of_2);
	printf("repeating _socket_get_200_response_one_of:\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_2));
}

int main() {
  test__socket_get_200_response_one_of(1);
  test__socket_get_200_response_one_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // _socket_get_200_response_one_of_MAIN
#endif // _socket_get_200_response_one_of_TEST
