#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1
		else
			high = mid - 1;
	}

	return (-1);
}
/**
 * print_array - prints the given array
 * @array: the array
 * @a: start of the array
 * @b: end of array
 */

void print_array(int *array, size_t a, size_t b)
{
	size_t i;

	for (i = a; i <= b; i++)
	{
		printf("%d", array[i]);
		if (i != b)
			printf(", ");
	}
	printf("\n");
}
