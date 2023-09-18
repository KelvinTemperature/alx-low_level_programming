#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	int j;

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n);
}
