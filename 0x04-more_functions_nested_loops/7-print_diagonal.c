#include "main.h"

/**
 * print_diagonal - prints \ diagonally
 *
 * @n: number of times to print it
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}

}
