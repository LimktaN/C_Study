#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c;
    int num, count;

    while(1)
    {
        printf("Enter the letter of your choice:\n");
        printf("a. avengers\t\tb. beep\n");
        printf("c. count\t\tq. quit\n");
        scanf("%c", &c);

        if(c == 'a') {
            printf("Avengers assemble!\n");
        } else if(c == 'b') {
            printf("Beep!\n");
        } else if(c == 'c') {
            printf("Enter an integer : ");
            scanf("%d", &num);
            for(count = 1; count <= num; count++)
            {
                printf("%d\n", count);
            }
        } else if(c == 'q')
        {
            break;
        }
    }

    return 0;
}