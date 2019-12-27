#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "cheese_pizza.h"

#define MAX_NAME_LEN 23

static void cheese_pizza_prepare(struct product_pizza *product)
{
    struct cheese_pizza *cheese = (struct cheese_pizza *)product;

    printf("%s prepare\n", cheese->name);
}

static void cheese_pizza_bake(struct product_pizza *product)
{
    struct cheese_pizza *cheese = (struct cheese_pizza *)product;
    printf("%s bake\n", cheese->name);
}

static void cheese_pizza_box(struct product_pizza *product)
{
    struct cheese_pizza *cheese = (struct cheese_pizza *)product;
    printf("%s box\n", cheese->name);
}

#if 0
static product_pizza pizza = {
    .prepare = cheese_pizza_prepare,
    .bake = cheese_pizza_bake,
    .box = cheese_pizza_box
};
#endif

int cheese_pizza_initialise(struct cheese_pizza *cheese, char *name)
{
    int name_len = strlen(name);
    if (name_len > MAX_NAME_LEN) {
        printf("name len is too long, truncate it: %d\n", name_len);
        name_len = MAX_NAME_LEN - 1;
        name[name_len] = 0;
    }
    cheese->name = calloc(1, name_len + 1);
    assert(cheese->name != NULL);
    strcpy(cheese->name, name);
    cheese->product.prepare = cheese_pizza_prepare;
    cheese->product.bake = cheese_pizza_bake;
    cheese->product.box = cheese_pizza_box;

    return 0;
}

struct cheese_pizza *create_cheese_pizza(char *name)
{
    struct cheese_pizza *cheese = calloc(1, sizeof(struct cheese_pizza));
    if (cheese) {
        cheese_pizza_initialise(cheese, name);
    }
    return cheese;
}

