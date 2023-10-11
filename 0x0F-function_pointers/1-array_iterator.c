#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterate through array
 * @action: function to execute
 * @array: the array
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
