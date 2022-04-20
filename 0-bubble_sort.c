#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: Array
 * @size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int x, y, temp;

	if (size < 2 && !array)
		return;
	for (y = 0; y < size - 1; y++)
	{
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				temp = array[i];
				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
						}
						}
						}
						}
