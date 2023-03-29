#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float seed = 1;
    float target = 1;
    float annual = 1;
    int year = 0;
    
    printf("Input seed money : ");
    scanf("%f", &seed);
    printf("Input target money : ");
    scanf("%f", &target);
    printf("Input annual interest (%%) : ");
    scanf("%f", &annual);

    while(seed < target)
    {
        printf("%f\n", seed);
        seed = seed + (seed * annual / 100);
        year += 1;
    }

    printf("%f\n", seed);
    printf("It takes %d years.\n", year);

    return 0;
}