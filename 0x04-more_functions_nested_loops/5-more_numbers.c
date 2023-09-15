#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int m;

	for (m = 1; m <= 10; m++)
	{

	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
			_putchar((n / 10) + 48);

		_putchar((n % 10) + 48);

	}
	_putchar('\n');
	}

}
