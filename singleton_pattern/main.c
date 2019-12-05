#include <stdio.h>
#include "singleton.h"

int main(int argc, char *argv[])
{
    struct singleton *sig = get_instance();
    printf("x:%d\n", sig->priv_x);
}
