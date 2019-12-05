#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "singleton.h"


static void singleton_initialize(struct singleton *psg, int x, int y)
{
    psg->priv_x = x;
    psg->priv_y = y;
}

struct singleton *get_instance()
{
    static struct singleton *sgt = NULL;

    if (NULL == sgt) {
        printf("malloc instance\n");
        sgt = malloc(sizeof(struct singleton));
        assert(NULL != sgt);
        singleton_initialize(sgt, 1, 2);
    }
    return sgt;
}
