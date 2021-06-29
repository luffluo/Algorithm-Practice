#include <stdio.h>
#include "bubble.h"
#include "./../tool.h"

int main()
{
    int arr[7] = {4, 3, 5, 1, 2, 0, 3};

    bubble_sort(arr, 7);
    print_int_arr(arr, 7);

    return 0;
}