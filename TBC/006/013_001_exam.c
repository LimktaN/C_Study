#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int pw;
    printf("Enter secret code : ");
    scanf("%d", &pw);

    while(pw != 123)
    {
        printf("Enter secret code : ");
        scanf("%d", &pw);
    }

    printf("Good !");

    return 0;
}