#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for an integer using jump search
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, step, i;

	if (array == NULL)
		return (-1);

	step = (size_t)sqrt(size);
	low = 0;
	high = step;

	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value > array[high])
		{
			low += step;
			high += step;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i <= high && i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return ((int)i);
			}
		}
	}

	return (-1);
}
