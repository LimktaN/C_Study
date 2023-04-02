#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int base, int exp)
{
    int i, result;

    result = 1;
    for (i = 0; i < exp; ++i)
        result *= base;

    return result;
}

int main()
{
    int base, exp, i, result = 1;
    while(scanf("%d %d", &base, &exp) == 2)
    {
    //     int result = 1;
    //     for (i = 0; i < exp; ++i)
    //         result *= base;

        result = compute_pow(base, exp);

        printf("Result = %d\n", result);
    }
    
    return 0;
}