#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>

int main()
{
    // multiple inputs with blank separators
    int i;
    float f;
    char str[30];

    scanf("%d %f %s", &i, &f, str);
    printf("%d %f %s\n", i, f, str);

    // character
    char c;
    scanf("%c", &c);
    printf("%c\n", c);

    // insigned as signed
    unsigned a;
    scanf("%i", &a);
    printf("%i\n", a);

    // insigned as unsigned
    unsigned a2;
    scanf("%u", &a2);
    printf("%u\n", a2);

    // floating point numbers
    double d = 0.0;
    scanf("%lf", &d);
    printf("%f", d);

    // Width
    char str[30];
    scanf("%5s", str);
    printf("%s\n", str);

    // h modifier
    char a3;
    scanf("%hhd", &a3);
    printf("%i\n", a3);

    // integer with characters
    int n;
    scanf("%i", n);
    printf("%i\n", n);

    // j modifier
    intmax_t i3;
    scanf("%ji", &i3);
    printf("%ji", i);

    // Regular characters
    int z, x;
    scnaf("%d,%d", &z, &x);
    printf("%d %d\n", z, x);

    // char receives blank
    int ix1, ix2;
    char cx1;
    scanf("%d%c%d", &ix1, &cx1, &ix2);
    printf("%d|%c|%d", ix1, cx1, ix2);

    // return value of scanf()
    int ia1, ib1;
    int ic = scanf("%d%d", ia1, ib1);
    printf("%d", ic);

    // modifier for printf()
    int ia2 = 123;
    int width = 5;
    printf("Input width : ");
    scanf("%d", &width);
    printf("%*d\n", width, ia2);

    // modifier for scanf()
    int ia3;
    scanf("%*d%*d%d", &ia3);
    printf("Your third input = %d", ia3);

    return 0;
}