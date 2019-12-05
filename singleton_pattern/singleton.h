#ifndef __SINGLETON_H__
#define __SINGLETON_H__

struct singleton {
    struct singleton *instance;
    int priv_x, priv_y;
};

extern struct singleton *get_instance();

#endif
