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
		i = 1;
		while (i <= n)
		{
			j = 1;
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}

	}
	else
	{
		_putchar('\n');
	}

}
