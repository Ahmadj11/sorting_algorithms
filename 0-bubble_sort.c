#include "sort.h"

/**
 * bubble_sort - sort function
 * @size: size
 * @array: array
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, temp;

	x = y = temp = 0;


	if (size < 2)
	return;
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
