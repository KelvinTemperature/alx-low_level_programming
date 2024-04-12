#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value using interpolation
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0, high = size - 1;
	pos = (size_t)(low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low])));
	if (array == NULL)
		return (-1);
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	if (array[pos] != value)
	{
		while (array[pos] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] > value)
			{
				high = pos - 1;
				pos = (size_t)(low + (((double)(high - low) / (array[high] - array[low]))
							* (value - array[low])));
			}
			else
			{
				low = pos + 1;
				pos = (size_t)(low + (((double)(high - low) / (array[high] - array[low]))
							* (value - array[low])));
			}
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return ((int)pos);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	return ((int)pos);
}
