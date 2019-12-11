#include <stdio.h>
#include "singleton.h"


struct singleton *get_instance()
{
    static struct singleton sgt = {
        .priv_x = 3,
        .priv_y = 4
    };

    return &sgt;
}
