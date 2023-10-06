#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: variable to assign memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ab;

	ab = malloc(b);
	if (ab == NULL)
		exit(98);

	return (ab);
}
