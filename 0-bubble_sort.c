#include "sort.h"

/**
 * swap_ints - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap_ints(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool swapped = false;

    if (array == NULL || size < 2)
        return;
    
    while (swapped == false)
    {
        swapped = true;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(&array[i], &array[i + 1]);
                print_array(array, size);
                swapped = false;
            }
        }
        len--;
    }
}
