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
	for (n = n; n < 99; n++)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
	}

}
