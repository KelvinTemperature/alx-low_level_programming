#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the integer
 * @index: the index
 * Return: 1 or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	c = 1;
	c = c << index;

	*n = (*n) | c;

	return (1);
}
