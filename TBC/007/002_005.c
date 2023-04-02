#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        else if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        
        putchar(ch);
    }

    putchar(ch);

    return 0;
}