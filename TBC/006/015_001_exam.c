#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count1, count2, num1, num2;
    char txt = 'A';

    scanf("%d", &num1);
    scanf("%d", &num2);

    for(count2=0; count2<num2; count2++)
    {
        for(count1=0, txt='A'; count1<num1; count1++)
        {
            printf("%c ", txt);
            txt++;
        }
        printf("\n");
    }

    return 0;
}