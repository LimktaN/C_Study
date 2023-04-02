#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count1, count2, num;
    char txt = 'A';

    scanf("%d", &num);

    for(count1 = 1; count1 <= num; count1++)
    {
        for(count2 = 0, txt = 'A'; count2 < count1; count2++)
        {
            printf("%c ", txt);
            txt++;
        }
        printf("\n");
    }

    return 0;
}