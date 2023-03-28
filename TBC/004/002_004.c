#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
    int i;
    float f;
};

int main()
{
    // sizeof structure

    printf("%zu bytes.\n",sizeof(struct MyStruct));

    return 0;
}