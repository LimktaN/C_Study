#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;

    ch = getchar();
    putchar(ch);

    while(ch != '\n')
    {
        putchar(ch);

        ch = getchar();
    }

    putchar(ch);

    return 0;
}