/*
 * notification.h
 *
 * 
 */

#ifndef _notification_H_
#define _notification_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notification_t notification_t;




typedef struct notification_t {
    double id; //numeric
    char *time; //date time
    char *title; // string
    char *msg; // string

} notification_t;

notification_t *notification_create(
    double id,
    char *time,
    char *title,
    char *msg
);

void notification_free(notification_t *notification);

notification_t *notification_parseFromJSON(cJSON *notificationJSON);

cJSON *notification_convertToJSON(notification_t *notification);

#endif /* _notification_H_ */

