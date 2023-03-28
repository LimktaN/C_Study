#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char fruit_name; // stores only one character.

    printf("What is your favorate fruit?\n");

    scanf("%c", &fruit_name); // be careful with &

    printf("You like %c!\n", fruit_name);

    return 0;
}