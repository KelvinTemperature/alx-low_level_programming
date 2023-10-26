#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value, flips;

	value = n ^ m;
	for (flips = 0; value > 0;)
	{
		if ((value & 1) == 1)
			flips++;
		value = value >> 1;
	}
	return (flips);
}
