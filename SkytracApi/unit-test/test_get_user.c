#ifndef get_user_TEST
#define get_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_user.h"
get_user_t* instantiate_get_user(int include_optional);



get_user_t* instantiate_get_user(int include_optional) {
  get_user_t* get_user = NULL;
  if (include_optional) {
    get_user = get_user_create(
      "John",
      quicksilver_web_api_get_user_ROLE_admin,
      "B@12abc!!!",
      1,
      1.337
    );
  } else {
    get_user = get_user_create(
      "John",
      quicksilver_web_api_get_user_ROLE_admin,
      "B@12abc!!!",
      1,
      1.337
    );
  }

  return get_user;
}


#ifdef get_user_MAIN

void test_get_user(int include_optional) {
    get_user_t* get_user_1 = instantiate_get_user(include_optional);

	cJSON* jsonget_user_1 = get_user_convertToJSON(get_user_1);
	printf("get_user :\n%s\n", cJSON_Print(jsonget_user_1));
	get_user_t* get_user_2 = get_user_parseFromJSON(jsonget_user_1);
	cJSON* jsonget_user_2 = get_user_convertToJSON(get_user_2);
	printf("repeating get_user:\n%s\n", cJSON_Print(jsonget_user_2));
}

int main() {
  test_get_user(1);
  test_get_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_user_MAIN
#endif // get_user_TEST
