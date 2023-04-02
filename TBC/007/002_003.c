#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        if(ch == 'f')
            ch = 'X';
        else if(ch == 'F')
            ch = 'X';

        putchar(ch);
    }

    putchar(ch);

    return 0;
}