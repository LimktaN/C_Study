#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main()
{
    int num, sum, i;
    int num_arr[SIZE];

    sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &num);
        num_arr[i] = num;
        sum += num;
    }

    printf("SUM = %d\n", sum);

    return 0;
}