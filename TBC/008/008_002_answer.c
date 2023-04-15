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