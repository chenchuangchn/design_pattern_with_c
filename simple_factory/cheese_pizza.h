#ifndef __CHEESE_PIZZA_H__
#define __CHEESE_PIZZA_H__

#include "product_pizza.h"

struct cheese_pizza {
    struct product_pizza product;
    char *name;
};

struct cheese_pizza *create_cheese_pizza();

#endif
