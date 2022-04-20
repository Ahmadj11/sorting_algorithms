#include "sort.h"
/*
 * void bubble_sort - func
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, temp;
	x = y = temp = 0;
	if (size < 2)
		return (void);
	for (x = 0; x < size; x++)
	{
	for (y = 1; y < (size - x); y++)
	{
		if (array[x] < array[x - 1])
		{
			temp = array[y - 1];
			array[y - 1] = array[y];
			array[y] = temp;
			print_array(arrat, size);
		}
	}
	}
}
