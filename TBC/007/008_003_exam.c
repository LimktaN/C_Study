#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '.'

int main()
{
    char c;
    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;

    bool word_flag = false;
    bool line_flag = false;

    printf("Enter text : \n");

    while ((c = getchar()) != STOP)
    {
        if (putchar(c) == ' ')
            n_words++;
        else if (putchar(c) == '\n')
            n_lines++;
        else
            n_chars++;
    }

    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}