#ifndef __CLAM_PIZZA_H__
#define __CLAM_PIZZA_H__

#include "product_pizza.h"

struct clam_pizza {
    struct product_pizza product;
    char c;
};

extern struct clam_pizza *create_clam_pizza(char c);

#endif
