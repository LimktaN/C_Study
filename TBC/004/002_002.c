#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sizeof arrays

    int int_arr[30];
    int* int_ptr = NULL;
    int_ptr = (int*)malloc(sizeof(int) * 30);

    printf("Size of array = %zu bytes\n", sizeof(int_arr));
    printf("Size of pointer = %u bytes\n", sizeof(int_ptr));

    return 0;
}