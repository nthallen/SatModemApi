#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notification.h"



notification_t *notification_create(
    double id,
    char *time,
    char *title,
    char *msg
    ) {
    notification_t *notification_local_var = malloc(sizeof(notification_t));
    if (!notification_local_var) {
        return NULL;
    }
    notification_local_var->id = id;
    notification_local_var->time = time;
    notification_local_var->title = title;
    notification_local_var->msg = msg;

    return notification_local_var;
}


void notification_free(notification_t *notification) {
    if(NULL == notification){
        return ;
    }
    listEntry_t *listEntry;
    if (notification->time) {
        free(notification->time);
        notification->time = NULL;
    }
    if (notification->title) {
        free(notification->title);
        notification->title = NULL;
    }
    if (notification->msg) {
        free(notification->msg);
        notification->msg = NULL;
    }
    free(notification);
}

cJSON *notification_convertToJSON(notification_t *notification) {
    cJSON *item = cJSON_CreateObject();

    // notification->id
    if(notification->id) {
    if(cJSON_AddNumberToObject(item, "id", notification->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // notification->time
    if(notification->time) {
    if(cJSON_AddStringToObject(item, "time", notification->time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // notification->title
    if(notification->title) {
    if(cJSON_AddStringToObject(item, "title", notification->title) == NULL) {
    goto fail; //String
    }
    }


    // notification->msg
    if(notification->msg) {
    if(cJSON_AddStringToObject(item, "msg", notification->msg) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notification_t *notification_parseFromJSON(cJSON *notificationJSON){

    notification_t *notification_local_var = NULL;

    // notification->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(notificationJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // notification->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(notificationJSON, "time");
    if (time) { 
    if(!cJSON_IsString(time) && !cJSON_IsNull(time))
    {
    goto end; //DateTime
    }
    }

    // notification->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(notificationJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // notification->msg
    cJSON *msg = cJSON_GetObjectItemCaseSensitive(notificationJSON, "msg");
    if (msg) { 
    if(!cJSON_IsString(msg) && !cJSON_IsNull(msg))
    {
    goto end; //String
    }
    }


    notification_local_var = notification_create (
        id ? id->valuedouble : 0,
        time && !cJSON_IsNull(time) ? strdup(time->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        msg && !cJSON_IsNull(msg) ? strdup(msg->valuestring) : NULL
        );

    return notification_local_var;
end:
    return NULL;

}
