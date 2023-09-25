#include "main.h"

/**
 * *_memset - function to fill memory with a constant byte b
 *
 * @s: memory area
 * @b: constant byte to fill
 * @n: number of bytes to fill
 *
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (*s);
}
