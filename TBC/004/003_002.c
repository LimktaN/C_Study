#include <stdio.h>

int main()
{
    char c = 'a';
    char str1[10] = "Hello";
    char str2[10] = { 'H', 'i'};

    printf("%c\n", c);
    printf("%c\n", str1);
    printf("%c\n", str2);

    printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[3], str2[4], str2[4]);

    char str3[10] = "Hello, World!";
    char str4[20] = "Hello, \0World!";
    printf("%s\n", str3);
    printf("%s\n", str4);

    return 0;
}