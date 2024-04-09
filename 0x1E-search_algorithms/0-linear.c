#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search for a value using linear search
 * @array: the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
