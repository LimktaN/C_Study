#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp;
    temp = true ? 1024 : 7;
    printf("%d\n", temp);

    temp = false ? 1024 : 7;
    printf("%d\n", temp);

    return 0;
}