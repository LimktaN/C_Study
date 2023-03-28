#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    // round-off errors (ex1)
    float a, b;
    a = 1.0E20f + 1.0f;
    b = a - 1.0E20f;
    printf("%f\n", b);

    // round-off errors (ex2)
    float c = 0.0f;
    c = c + 0.01f;
    printf("%f\n", c);

    // overflow
    float max = 3.402823466e+38F;
    printf("%f\n", max);
    max = max * 100.0f;
    printf("%f\n", max);

    //underflow
    float min = 1.401298464e-45F;
    printf("%e\n", min);
    min = min / 2.0f; //subnormal
    printf("%e\n", min);


    float f = 104.0f;
    printf("%f\n", f);
    f = f / 0.0f;
    printf("%f\n", f);


    float ff = asinf(1.0f);
    printf("%f\n", f);
    ff = asinf(2.0f);
    printf("%f\n", f);

    return 0;
}