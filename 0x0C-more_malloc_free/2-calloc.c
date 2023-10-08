#include "main.h"
#include <stdlib.h>

/**
 * _calloc - assigns memory for an array
 * @nmemb: number of members
 * @size: size of each member
 * Return: pointer to alloted memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(unsigned int) * nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
