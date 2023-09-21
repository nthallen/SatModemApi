#ifndef _socket_get_200_response_one_of_1_TEST
#define _socket_get_200_response_one_of_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _socket_get_200_response_one_of_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_socket_get_200_response_one_of_1.h"
_socket_get_200_response_one_of_1_t* instantiate__socket_get_200_response_one_of_1(int include_optional);

#include "test_notification.c"


_socket_get_200_response_one_of_1_t* instantiate__socket_get_200_response_one_of_1(int include_optional) {
  _socket_get_200_response_one_of_1_t* _socket_get_200_response_one_of_1 = NULL;
  if (include_optional) {
    _socket_get_200_response_one_of_1 = _socket_get_200_response_one_of_1_create(
      quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_1_NAME_notificationAdded,
       // false, not to have infinite recursion
      instantiate_notification(0)
    );
  } else {
    _socket_get_200_response_one_of_1 = _socket_get_200_response_one_of_1_create(
      quicksilver_web_api__socket_get_200_response_one_of_1_TYPE_event,
      quicksilver_web_api__socket_get_200_response_one_of_1_NAME_notificationAdded,
      NULL
    );
  }

  return _socket_get_200_response_one_of_1;
}


#ifdef _socket_get_200_response_one_of_1_MAIN

void test__socket_get_200_response_one_of_1(int include_optional) {
    _socket_get_200_response_one_of_1_t* _socket_get_200_response_one_of_1_1 = instantiate__socket_get_200_response_one_of_1(include_optional);

	cJSON* json_socket_get_200_response_one_of_1_1 = _socket_get_200_response_one_of_1_convertToJSON(_socket_get_200_response_one_of_1_1);
	printf("_socket_get_200_response_one_of_1 :\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_1_1));
	_socket_get_200_response_one_of_1_t* _socket_get_200_response_one_of_1_2 = _socket_get_200_response_one_of_1_parseFromJSON(json_socket_get_200_response_one_of_1_1);
	cJSON* json_socket_get_200_response_one_of_1_2 = _socket_get_200_response_one_of_1_convertToJSON(_socket_get_200_response_one_of_1_2);
	printf("repeating _socket_get_200_response_one_of_1:\n%s\n", cJSON_Print(json_socket_get_200_response_one_of_1_2));
}

int main() {
  test__socket_get_200_response_one_of_1(1);
  test__socket_get_200_response_one_of_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // _socket_get_200_response_one_of_1_MAIN
#endif // _socket_get_200_response_one_of_1_TEST
