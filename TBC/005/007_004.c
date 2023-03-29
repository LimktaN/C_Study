#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int div, mod;

    div = 11 / 5;
    mod = 11 % 5;
    printf("div = %d, mod = %d\n", div, mod);

    div = 11 / -5;
    mod = 11 % -5;
    printf("div = %d, mod = %d\n", div, mod);

    div = -11 / -5;
    mod = -11 % -5;
    printf("div = %d, mod = %d\n", div, mod);

    div = -11 / 5;
    mod = -11 % 5;
    printf("div = %d, mod = %d\n", div, mod);

    return 0;
}