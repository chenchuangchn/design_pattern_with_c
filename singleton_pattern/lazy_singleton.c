#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>

#include "singleton.h"


static pthread_mutex_t singleton_mutex;

static void singleton_initialize(struct singleton *psg, int x, int y)
{
    psg->priv_x = x;
    psg->priv_y = y;
}

struct singleton *get_instance()
{
    static struct singleton *instance = NULL;

    /*DCL*/
    if (NULL == instance) {
        pthread_mutex_lock(&singleton_mutex);
        if (NULL == instance) {
            printf("malloc instance\n");
            instance = malloc(sizeof(struct singleton));
            assert(NULL != instance);
            singleton_initialize(instance, 1, 2);
        }
        pthread_mutex_unlock(&singleton_mutex);
    }
    return instance;
}
