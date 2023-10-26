#include "main.h"

/**
 * get_endianness - check endianness in memory
 * Return: 0 for big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return ((int) *c);
}
