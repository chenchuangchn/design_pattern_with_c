#ifndef __USER_H__
#define __USER_H__

//#undef offsetof
#ifndef offsetof
#define offsetof(TYPE, MEMBER) \
    (size_t)&(((TYPE *)0)->MEMBER)
#endif

#ifdef __GNUC__
#define container_of(ptr, type, member) ({\
    const typeof(((type *)0)->member) *__mptr = (ptr); \
    (type *)((char *)__mptr - offsetof(type, member));})
#else
#define container_of(ptr, type, member) (type *)((char *)(ptr) - offsetof(type, member))
#endif

#endif
