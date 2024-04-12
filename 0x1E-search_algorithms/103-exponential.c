#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - search for a value using exponential method
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
		i = 1;
	else
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	if (i >= size)
		high = size - 1;
	else
		high = i;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
