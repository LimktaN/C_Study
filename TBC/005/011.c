#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    short a = 64;
    int b = a;

    float c = 3.14f;
    double d = c;


    d = 1.25;
    c = 1.25;
    c = 1.123;


    d = c + 1.234;
    c = c + 1.234;


    d = (double)3.14f;
    b = 1.6 + 1.7;
    b = (int)1.6 + (int)1.7;


    char e;
    int f;
    float g;

    g = f = e = 'A'; // 65
    printf("%c %d %f\n", g, f, e);
    
    e = e + 2;      // C 67
    f = g + 2 * e;  // 65.0f + 2 * 67
    printf("%c %d %f\n", g, f, e);

    e = 1106;
    printf("%c\n", c);
    e = 83.99;
    printf("%c\n", c);

    return 0;
}