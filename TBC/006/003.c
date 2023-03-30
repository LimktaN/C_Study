#define _CRT_SECURE_NO_WANINGS

#include <stdio.h>

int main()
{
    int a;
    a = 1;
    while(a++<5)
        printf("Hi\n");
    

    int b;
    b = 1;
    while(b < 5)
    {
        printf("b before = %d\n", b);
        b++;
        printf("b after = %d\n", b);
    }

    return 0;
}