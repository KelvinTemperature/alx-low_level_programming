#include "main.h"

/**
 * get_bit - returns the value od a bit at a given index
 * @n: the integer
 * @index: the index
 * Return: value of bit at index or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
