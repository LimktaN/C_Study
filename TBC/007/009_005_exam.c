#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    scanf("%d", &number);

    const bool is_even = (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}