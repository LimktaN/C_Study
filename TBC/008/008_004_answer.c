#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main()
{
    int user_choice;

    while ((user_choice = get_choice()) != 'q')
    {
        switch (user_choice)
        {
            case 'a':
                printf("Avengers assemble!\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default:
                printf("Error with %d.\n", user_choice);
                exit(1);
                break;
        }
    }

    return 0;
}

char get_choice()
{
    int user_input;

    printf("Enter the letter of your choice:\n");
    printf("a. avengers\t\tb. beep\n");
    printf("c. count\t\tq. quit\n");

    user_input = get_first_char();

    while((user_input < 'a' || user_input > 'c') && user_input != 'q')
    {
        printf("Please try again.\n");
        user_input = get_first_char();
    }

    return user_input;
}

char get_first_char()
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    
    return ch;
}

void count()
{
    int num, count;

    printf("Enter an integer : ");
    num = get_integer();

    for(count = 0; count <= num; ++count)
        printf("%d\n", count);
    
    while (getchar() != '\n')
        continue;
}

int get_integer()
{
    int input;
    char c;

    while(scanf("%d", &input) != 1)
    {
        while ((c = getchar()) != '\n')
            putchar(c);
        printf(" is not an integer.\nPlease try again.\n");
    }

    return input;
}