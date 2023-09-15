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
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (i < (n - 1))
				_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
