#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char c = 'A';
    char d = 65; // d = 'A'

    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);

    printf("%c \n", c + 1);


    char a = '\a';
    printf("%c", a);


    printf("\07\n");
    printf("\x23\n");


    float salary;
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);


    printf("AB\tCDEF\n");
    printf("ABC\tDEF\n");


    printf("\\ \'HA+\' \"Hello\" \?\n");

    return 0;
}