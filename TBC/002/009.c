#include <stdio.h>

void say_hello(); // prototyping, function declaration

int main()
{
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");

    say_hello();
    say_hello();
    say_hello();

    return 0;
}

void say_hello() // function definition
{
    printf("Hello, World!\n");

    return;
}