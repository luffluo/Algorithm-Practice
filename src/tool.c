#include <stdio.h>
#include "tool.h"

void print_int_arr(int *arr, int size)
{
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
}