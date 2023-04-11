#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num, count = 0, min = 0, max = 0;
    float ave = 0;

    while(scanf("%d", &num) == 1)
    {
        if (num < min)
        {
            min = num;
        }
        else if (num > max)
        {
            max = num;
        }
        ave += num;
        count++;
    }
    ave /= count;

    printf("min = %d, max = %d, ave = %f", min, max, ave);

    return 0;
}