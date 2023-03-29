#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int hours, minutes, seconds;

    printf("Input second : ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    hours = minutes / 60;
    minutes %= 60;
    hours %= 60;
    seconds %= 60;

    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    printf("Good bye\n\n");

    return 0;
}