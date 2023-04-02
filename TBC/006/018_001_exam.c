#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2, i, result;

    scanf("%d", &num1);
    scanf("%d", &num2);

    result = num1;

    for (i = 1; i < num2; i++)
    {
        result *= num1;
    }

    printf("%d", result);
    
    return 0;
}