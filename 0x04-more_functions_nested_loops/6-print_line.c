#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: number times _ will be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
