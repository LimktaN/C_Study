#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, characters = 0, words = 0, lines = 0;
    char ch;

    printf("Enter text : \n");
    while((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            words++;
        else if (ch == '\n')
            lines++;
        else
            characters++;
    }

    printf("Characters = %d, Words = %d, Lines = %d\n", characters, words, lines);

    return 0;
}