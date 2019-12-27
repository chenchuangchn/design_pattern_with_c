#include <stdio.h>
#include <string.h>
#include "cheese_pizza.h"
#include "clam_pizza.h"


struct product_pizza *create_pizza(char *type)
{
    struct product_pizza *pizza = NULL;
    
    if (!strcmp(type, "cheese")) {
        printf("create cheese\n");
        pizza = (struct product_pizza *)create_cheese_pizza("cheese");
    } else if (!strcmp(type, "clam")) {
        printf("create clam\n");
        pizza = (struct product_pizza *)create_clam_pizza('c');
    } else {
        printf("haven't support this type\n");
    }

    return pizza;
}

struct product_pizza *order_pizza(char *type)
{
    struct product_pizza *pizza = create_pizza(type);
   
    if (pizza) {
        pizza->prepare(pizza);
        pizza->bake(pizza);
        pizza->box(pizza);
    }
    return pizza;
}
