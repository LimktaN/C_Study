#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS    10
#define FIRST_CHAR  'A'
#define LAST_CHAR   'J'

int main()
{
    int r, c;

    for(r = 0; r < NUM_ROWS; ++r)
    {
        for (c = FIRST_CHAR + r; c <= LAST_CHAR; ++c)
            printf("%c", c);
        printf("\n");
    }

    return 0;
}