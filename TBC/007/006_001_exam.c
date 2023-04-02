#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned num;
    int i;
    bool isPrime = 1;

    scanf("%u", &num);

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is not a prime number.\n", num);

    return 0;
}