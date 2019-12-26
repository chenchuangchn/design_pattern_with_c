#ifndef __PRODUCT_PIZZA_H__
#define __PRODUCT_PIZZA_H__

struct product_pizza {
    void (*prepare)(struct product_pizza *product);
    void (*bake)(struct product_pizza *product);
    void (*box)(struct product_pizza *product);
};

#endif
