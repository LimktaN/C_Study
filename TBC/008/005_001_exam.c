#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char c, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    while(1)
    {
        scanf("%c %d %d", &c, &rows, &cols);
        display(c, rows, cols);
        if(c == '\n')
            break;
    }
}

void display(char c, int lines, int width)
{
    for(int i = 0; i < width; i++)
    {
        for(int i = 0; i < lines; i++)
        {   
        printf("%c", c);
        }
        printf("\n");
    }    
}