#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        // for(int i = '0'; i <= '9'; ++i)
        // {
        //     if(ch == i)
        //         ch = '*';
        // }

        if (ch >= '0' && ch <= '9')
            ch = '*';
        
        putchar(ch);
    }

    putchar(ch);

    return 0;
}