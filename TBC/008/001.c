#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <conio.h>

int main()
{
    char c;

    while ((c = _getche()) != '.')
        putchar(c);

    return 0;
}