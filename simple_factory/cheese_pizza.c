#include <stdio.h>
#include <stdlib.h>
#include "cheese_pizza.h"

#define MAX_NAME_LEN 23

static void cheese_pizza_prepare(struct product_pizza *product)
{
    struct cheese_pizza *cheese = (struct cheese_pizza *)product;

    printf("%s prepare\n", cheese->name);
}

static void cheese_pizza_prepare(struct product_pizza *product)


static product_pizza pizza = {
    .prepare = cheese_pizza_prepare,
    .bake = cheese_pizza_bake,
    .box = cheese_pizza_box
};

int cheese_pizza_initialise(struct cheese_pizza *cheese, char *name)
{
   cheese->name = calloc(1, strlen(name_len + 1));
   assert(cheese->name != NULL);
   strcpy(cheese->name, name);
}

struct cheese_pizza *create_cheese_pizza(char *name)
{
    int name_len = strlen(name);
    if (name_len > MAX_NAME_LEN) {
        printf("name len is too long: %d\n", name_len);
    }
    struct cheese_pizza *cheese = calloc(1, sizeof(struct cheese_pizza));
    if (cheese) {
        cheese_pizza_initialise(cheese, name);
    }
    return cheese;
}

