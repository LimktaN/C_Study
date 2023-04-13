#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

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

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }    
}