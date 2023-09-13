#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print integer to 98
 *
 * @n: is the given number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d\n", n);
	}

}
