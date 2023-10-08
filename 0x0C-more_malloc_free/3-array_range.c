#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: lower number
 * @max: highest number
 * Return: pointer to array of intgers
 */

int *array_range(int min, int max)
{
	int i, k = 0;
	int *arr_int;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		k++;
	arr_int = malloc(sizeof(*arr_int) * k);

	if (arr_int == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr_int[i] = min;

	return (arr_int);
}
