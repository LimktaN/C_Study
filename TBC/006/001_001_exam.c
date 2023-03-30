#define _CRT_SECURE_NO_WANINGS

#include <stdio.h>

int main()
{
    int num = 0, sum = 0, check;

    printf("Enter an integer (q to quit): ");
    check = scanf("%d", &num);

    while(check == 1)
    {
        sum += num;

        printf("Enter next integer (q to quit) : ");
        check = scanf("%d", &num);
    }

    printf("SUM = %d", sum);

    return 0;
}