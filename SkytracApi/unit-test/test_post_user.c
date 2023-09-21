#ifndef post_user_TEST
#define post_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define post_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/post_user.h"
post_user_t* instantiate_post_user(int include_optional);



post_user_t* instantiate_post_user(int include_optional) {
  post_user_t* post_user = NULL;
  if (include_optional) {
    post_user = post_user_create(
      "John",
      quicksilver_web_api_post_user_ROLE_admin,
      "B@12abc!!!",
      1
    );
  } else {
    post_user = post_user_create(
      "John",
      quicksilver_web_api_post_user_ROLE_admin,
      "B@12abc!!!",
      1
    );
  }

  return post_user;
}


#ifdef post_user_MAIN

void test_post_user(int include_optional) {
    post_user_t* post_user_1 = instantiate_post_user(include_optional);

	cJSON* jsonpost_user_1 = post_user_convertToJSON(post_user_1);
	printf("post_user :\n%s\n", cJSON_Print(jsonpost_user_1));
	post_user_t* post_user_2 = post_user_parseFromJSON(jsonpost_user_1);
	cJSON* jsonpost_user_2 = post_user_convertToJSON(post_user_2);
	printf("repeating post_user:\n%s\n", cJSON_Print(jsonpost_user_2));
}

int main() {
  test_post_user(1);
  test_post_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // post_user_MAIN
#endif // post_user_TEST
