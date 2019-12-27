#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "clam_pizza.h"

static void clam_pizza_prepare(struct product_pizza *pizza)
{
    struct clam_pizza *clam = (struct clam_pizza *)pizza;
    printf("clam prepare %c\n", clam->c);
}

static void clam_pizza_bake(struct product_pizza *pizza)
{
    struct clam_pizza *clam = (struct clam_pizza *)pizza;
    printf("clam bake %c\n", clam->c);
}

static void clam_pizza_box(struct product_pizza *pizza)
{
    struct clam_pizza *clam = (struct clam_pizza *)pizza;
    printf("clam box %c\n", clam->c);
}

int clam_pizza_initialise(struct clam_pizza *clam, char c)
{
    clam->c = c;
    clam->product.prepare = clam_pizza_prepare;
    clam->product.bake = clam_pizza_bake;
    clam->product.box = clam_pizza_box;
    
    return 0;
}

struct clam_pizza *create_clam_pizza(char c)
{
    struct clam_pizza *clam = calloc(1, sizeof(struct clam_pizza));
    if (clam) {
        clam_pizza_initialise(clam, c);
    }
    return clam;
}
