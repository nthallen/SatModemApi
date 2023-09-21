#ifndef _sessions_post_201_response_TEST
#define _sessions_post_201_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _sessions_post_201_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_sessions_post_201_response.h"
_sessions_post_201_response_t* instantiate__sessions_post_201_response(int include_optional);



_sessions_post_201_response_t* instantiate__sessions_post_201_response(int include_optional) {
  _sessions_post_201_response_t* _sessions_post_201_response = NULL;
  if (include_optional) {
    _sessions_post_201_response = _sessions_post_201_response_create(
      "0",
      "0"
    );
  } else {
    _sessions_post_201_response = _sessions_post_201_response_create(
      "0",
      "0"
    );
  }

  return _sessions_post_201_response;
}


#ifdef _sessions_post_201_response_MAIN

void test__sessions_post_201_response(int include_optional) {
    _sessions_post_201_response_t* _sessions_post_201_response_1 = instantiate__sessions_post_201_response(include_optional);

	cJSON* json_sessions_post_201_response_1 = _sessions_post_201_response_convertToJSON(_sessions_post_201_response_1);
	printf("_sessions_post_201_response :\n%s\n", cJSON_Print(json_sessions_post_201_response_1));
	_sessions_post_201_response_t* _sessions_post_201_response_2 = _sessions_post_201_response_parseFromJSON(json_sessions_post_201_response_1);
	cJSON* json_sessions_post_201_response_2 = _sessions_post_201_response_convertToJSON(_sessions_post_201_response_2);
	printf("repeating _sessions_post_201_response:\n%s\n", cJSON_Print(json_sessions_post_201_response_2));
}

int main() {
  test__sessions_post_201_response(1);
  test__sessions_post_201_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _sessions_post_201_response_MAIN
#endif // _sessions_post_201_response_TEST
