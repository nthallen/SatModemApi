#ifndef certificate_TEST
#define certificate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define certificate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/certificate.h"
certificate_t* instantiate_certificate(int include_optional);



certificate_t* instantiate_certificate(int include_optional) {
  certificate_t* certificate = NULL;
  if (include_optional) {
    certificate = certificate_create(
      "0",
      "0"
    );
  } else {
    certificate = certificate_create(
      "0",
      "0"
    );
  }

  return certificate;
}


#ifdef certificate_MAIN

void test_certificate(int include_optional) {
    certificate_t* certificate_1 = instantiate_certificate(include_optional);

	cJSON* jsoncertificate_1 = certificate_convertToJSON(certificate_1);
	printf("certificate :\n%s\n", cJSON_Print(jsoncertificate_1));
	certificate_t* certificate_2 = certificate_parseFromJSON(jsoncertificate_1);
	cJSON* jsoncertificate_2 = certificate_convertToJSON(certificate_2);
	printf("repeating certificate:\n%s\n", cJSON_Print(jsoncertificate_2));
}

int main() {
  test_certificate(1);
  test_certificate(0);

  printf("Hello world \n");
  return 0;
}

#endif // certificate_MAIN
#endif // certificate_TEST
