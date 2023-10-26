#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > sizeof(unsigned int) * 8 || n == NULL)
		return (-1);
	c = 1;
	c = c << index;

	if (((*n >> index) & 1) == 1)
		*n = c ^ *n;
	return (1);
}
