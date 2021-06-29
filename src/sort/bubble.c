/**
 * 冒泡排序
 * 
 * 让每一个数都和其它的数两两比较，找出最小的放到第一位
 * 每一次都是把两个数做比较，它俩单独于其它，就像冒泡一样
 * 
 * @author luffluo <luffluo@outlook.com>
 */

#include "bubble.h"

void bubble_sort(int *arr, int size)
{
    if (0 == size) {
        return;
    }

    int i, j, tmp;

    for (i = 0; i < size; i++) {

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

    }
}
