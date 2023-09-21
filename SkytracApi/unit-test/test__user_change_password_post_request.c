#ifndef _user_change_password_post_request_TEST
#define _user_change_password_post_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _user_change_password_post_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_user_change_password_post_request.h"
_user_change_password_post_request_t* instantiate__user_change_password_post_request(int include_optional);



_user_change_password_post_request_t* instantiate__user_change_password_post_request(int include_optional) {
  _user_change_password_post_request_t* _user_change_password_post_request = NULL;
  if (include_optional) {
    _user_change_password_post_request = _user_change_password_post_request_create(
      "B@12abc!!!",
      "B@12abc!!!"
    );
  } else {
    _user_change_password_post_request = _user_change_password_post_request_create(
      "B@12abc!!!",
      "B@12abc!!!"
    );
  }

  return _user_change_password_post_request;
}


#ifdef _user_change_password_post_request_MAIN

void test__user_change_password_post_request(int include_optional) {
    _user_change_password_post_request_t* _user_change_password_post_request_1 = instantiate__user_change_password_post_request(include_optional);

	cJSON* json_user_change_password_post_request_1 = _user_change_password_post_request_convertToJSON(_user_change_password_post_request_1);
	printf("_user_change_password_post_request :\n%s\n", cJSON_Print(json_user_change_password_post_request_1));
	_user_change_password_post_request_t* _user_change_password_post_request_2 = _user_change_password_post_request_parseFromJSON(json_user_change_password_post_request_1);
	cJSON* json_user_change_password_post_request_2 = _user_change_password_post_request_convertToJSON(_user_change_password_post_request_2);
	printf("repeating _user_change_password_post_request:\n%s\n", cJSON_Print(json_user_change_password_post_request_2));
}

int main() {
  test__user_change_password_post_request(1);
  test__user_change_password_post_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // _user_change_password_post_request_MAIN
#endif // _user_change_password_post_request_TEST
