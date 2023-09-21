#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "certificate.h"



certificate_t *certificate_create(
    char *cert,
    char *key
    ) {
    certificate_t *certificate_local_var = malloc(sizeof(certificate_t));
    if (!certificate_local_var) {
        return NULL;
    }
    certificate_local_var->cert = cert;
    certificate_local_var->key = key;

    return certificate_local_var;
}


void certificate_free(certificate_t *certificate) {
    if(NULL == certificate){
        return ;
    }
    listEntry_t *listEntry;
    if (certificate->cert) {
        free(certificate->cert);
        certificate->cert = NULL;
    }
    if (certificate->key) {
        free(certificate->key);
        certificate->key = NULL;
    }
    free(certificate);
}

cJSON *certificate_convertToJSON(certificate_t *certificate) {
    cJSON *item = cJSON_CreateObject();

    // certificate->cert
    if (!certificate->cert) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cert", certificate->cert) == NULL) {
    goto fail; //String
    }


    // certificate->key
    if (!certificate->key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key", certificate->key) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

certificate_t *certificate_parseFromJSON(cJSON *certificateJSON){

    certificate_t *certificate_local_var = NULL;

    // certificate->cert
    cJSON *cert = cJSON_GetObjectItemCaseSensitive(certificateJSON, "cert");
    if (!cert) {
        goto end;
    }

    
    if(!cJSON_IsString(cert))
    {
    goto end; //String
    }

    // certificate->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(certificateJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }


    certificate_local_var = certificate_create (
        strdup(cert->valuestring),
        strdup(key->valuestring)
        );

    return certificate_local_var;
end:
    return NULL;

}
