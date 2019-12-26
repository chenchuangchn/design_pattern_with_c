#include <stdio.h>
#include "user.h"

struct student {
    char name[9];
    int age;
};

int main(int argc, char *argv[])
{
    struct student std = {
        .name = "chuang",
        .age = 30
    };

    struct student *pstd = container_of(&std.age, struct student, age);
    printf("name:%s\n", pstd->name);
    printf("%d\n", __GNUC__);
}
