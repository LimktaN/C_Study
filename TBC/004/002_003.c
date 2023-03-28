#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sizeof character array

    char c = 'a';
    char string[10];

    size_t char_size = sizeof(char);
    size_t str_size = sizeof(string);

    printf("Size of char type is %zu bytes.\n", char_size);
    printf("Size of string type is %zu bytes.\n", str_size);

    return 0;
}