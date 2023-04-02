#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS    12
#define FIRST_CHAR  'A'

int main()
{
    int r, c;

    for(r = 0; r < NUM_ROWS; ++r)
    {
        for (c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS; ++c)
            printf("%c", c);
        printf("\n");
    }

    return 0;
}