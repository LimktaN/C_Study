#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (int i = 10; i > 0; i--)
        printf("%d ", i);

    printf("\n");

    for (int i = 0; i < 100; i += 8)
        printf("%d ", i);

    printf("\n");

    for (char c = 'A'; c <= 'Z'; c++)
        printf("%c ", c);

    printf("\n");

    for (int i = 0; i * i < 0; i++)
        printf("%d ", i);

    printf("\n");

    for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
        printf("%d ", x);

    printf("\n");

    for (double d = 100.0; d < 300; d *= 1.1)
        printf("%d ", d);

    printf("\n");

    int i, n;
    n = 2;
    for (i = 2; n < 10; ){
        n = n * i;
        printf("%d\n", n);
    }

    for ( ; ; )
        printf("Hello\n");

    for (printf("Hi\n"); i != 7; scnaf("%d", &i))
        ;

    printf("\n");

    return 0;
}