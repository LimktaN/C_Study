#include <stdio.h>

int main()
{
    int a = 0;
    a++;
    printf("%d\n", a);

    ++a;
    printf("%d\n", a);


    double b = 0;
    b++;
    printf("%f\n", b);

    b--;
    printf("%f\n", b);


    int c = 0;
    while (c < 10) // ++c or c++
    {
        printf("%d ", c); // ++c or c++
        c++; // ++c or c++
    }

    printf("\n");


    int d = 1, e = 1;
    int d_post, pre_e;

    d_post = d++;
    pre_e = ++e;

    printf("%d %d\n", d, e);
    printf("%d %d\n", d_post, pre_e);


    int f = 3;
    int g = 2 * --f;
    printf("%d %d\n", f, g);
    
    f = 1;
    g = 2 * f--;
    printf("%d %d\n", f, g);


    int h, i, j;
    h = 3, i =4;
    j = (h + i++) * 5;
    printf("%d %d %d", h, i, j);


    int k = 1, l = 1, m;
    m = k * l++;

    return 0;
}