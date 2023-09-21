#ifndef patch_user_TEST
#define patch_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_user.h"
patch_user_t* instantiate_patch_user(int include_optional);



patch_user_t* instantiate_patch_user(int include_optional) {
  patch_user_t* patch_user = NULL;
  if (include_optional) {
    patch_user = patch_user_create(
      "John",
      quicksilver_web_api_patch_user_ROLE_admin,
      "B@12abc!!!",
      1
    );
  } else {
    patch_user = patch_user_create(
      "John",
      quicksilver_web_api_patch_user_ROLE_admin,
      "B@12abc!!!",
      1
    );
  }

  return patch_user;
}


#ifdef patch_user_MAIN

void test_patch_user(int include_optional) {
    patch_user_t* patch_user_1 = instantiate_patch_user(include_optional);

	cJSON* jsonpatch_user_1 = patch_user_convertToJSON(patch_user_1);
	printf("patch_user :\n%s\n", cJSON_Print(jsonpatch_user_1));
	patch_user_t* patch_user_2 = patch_user_parseFromJSON(jsonpatch_user_1);
	cJSON* jsonpatch_user_2 = patch_user_convertToJSON(patch_user_2);
	printf("repeating patch_user:\n%s\n", cJSON_Print(jsonpatch_user_2));
}

int main() {
  test_patch_user(1);
  test_patch_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_user_MAIN
#endif // patch_user_TEST
