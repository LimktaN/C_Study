#define _CRT_SECURE_NO_WANINGS

#include <stdio.h>

int main()
{
    int a = 0;
    while(a++ < 5)
        printf("%d", a);

    printf("\n");


    char b = 'A';
    while(b != 'Z')
        printf("%c ", b++);

    printf("\n");


    const double PI = 3.141592;
    double guess = 0.0;

    printf("Input pi : ");
    scanf("%lf", &guess);
    //while (fabs(guess - PI) > 0.01)
    while (guess < PI)
    {
        printf("Fool! Try again.\n");
        scanf("%lf", &guess);
    }
    printf("Good!");

    return 0;
}