#ifndef _session_refresh_post_200_response_TEST
#define _session_refresh_post_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _session_refresh_post_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_session_refresh_post_200_response.h"
_session_refresh_post_200_response_t* instantiate__session_refresh_post_200_response(int include_optional);



_session_refresh_post_200_response_t* instantiate__session_refresh_post_200_response(int include_optional) {
  _session_refresh_post_200_response_t* _session_refresh_post_200_response = NULL;
  if (include_optional) {
    _session_refresh_post_200_response = _session_refresh_post_200_response_create(
      "BBBBBBCCCDDDEEEFFF00011122233344455566677788",
      "CCCBBBCCCDDDEEEFFF00011122233344455566677788"
    );
  } else {
    _session_refresh_post_200_response = _session_refresh_post_200_response_create(
      "BBBBBBCCCDDDEEEFFF00011122233344455566677788",
      "CCCBBBCCCDDDEEEFFF00011122233344455566677788"
    );
  }

  return _session_refresh_post_200_response;
}


#ifdef _session_refresh_post_200_response_MAIN

void test__session_refresh_post_200_response(int include_optional) {
    _session_refresh_post_200_response_t* _session_refresh_post_200_response_1 = instantiate__session_refresh_post_200_response(include_optional);

	cJSON* json_session_refresh_post_200_response_1 = _session_refresh_post_200_response_convertToJSON(_session_refresh_post_200_response_1);
	printf("_session_refresh_post_200_response :\n%s\n", cJSON_Print(json_session_refresh_post_200_response_1));
	_session_refresh_post_200_response_t* _session_refresh_post_200_response_2 = _session_refresh_post_200_response_parseFromJSON(json_session_refresh_post_200_response_1);
	cJSON* json_session_refresh_post_200_response_2 = _session_refresh_post_200_response_convertToJSON(_session_refresh_post_200_response_2);
	printf("repeating _session_refresh_post_200_response:\n%s\n", cJSON_Print(json_session_refresh_post_200_response_2));
}

int main() {
  test__session_refresh_post_200_response(1);
  test__session_refresh_post_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // _session_refresh_post_200_response_MAIN
#endif // _session_refresh_post_200_response_TEST
