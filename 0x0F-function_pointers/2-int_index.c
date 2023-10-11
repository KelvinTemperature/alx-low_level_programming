#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for  an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare values
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
