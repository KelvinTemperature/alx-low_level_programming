#include "main.h"

/**
 * binary_to_uint - converts a binary number to integer
 * @b: the number to convert
 * Return: the converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k, uinum = 0, power = 1, base = 2;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	if (i == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		for (k = i - 1; k > 0; k--)
			power = power * base;
		uinum = uinum + (power * (b[j] - 48));
		i--;
		power = 1;
	}
	return (uinum);
}
