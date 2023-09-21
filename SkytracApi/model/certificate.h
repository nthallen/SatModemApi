/*
 * certificate.h
 *
 * 
 */

#ifndef _certificate_H_
#define _certificate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct certificate_t certificate_t;




typedef struct certificate_t {
    char *cert; // string
    char *key; // string

} certificate_t;

certificate_t *certificate_create(
    char *cert,
    char *key
);

void certificate_free(certificate_t *certificate);

certificate_t *certificate_parseFromJSON(cJSON *certificateJSON);

cJSON *certificate_convertToJSON(certificate_t *certificate);

#endif /* _certificate_H_ */

