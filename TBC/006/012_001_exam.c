#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // speed = 1.0 m/s
    // dt = 1.0 s
    // distance traveled during dt = Speed * dt

    double speed = 0, dt = 0, distance = 0;

    for(speed = 1; dt <= 10; dt++)
    {
        distance = (speed * dt);
        printf("Elapsed time = %f, Distance = %f\n", dt, distance);
    }

    return 0;
}