#include "main.h"

/**
 * print_times_table - prints times table of any number
 *
 * @n: the number of times to supply table
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int a, b, op;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);
				op = a * b;
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op >= 100)
				{
					_putchar(((op / 10) / 10) + 48);
					_putchar(((op / 10) % 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}

}
