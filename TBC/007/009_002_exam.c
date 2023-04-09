#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    scanf("%d", &number);

    const bool is_even = (number % 2 == 0) ? true : false;

    // if (number % 2 == 0)
    //     is_even = true;
    // else   
    //     is_even = false;

    if (is_even)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}