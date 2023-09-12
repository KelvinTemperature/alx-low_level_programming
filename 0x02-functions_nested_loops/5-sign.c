#include "main.h"

/**
 * print_sign - prints the sign associated with a number
 *
 * @n: the number yo be tested
 *
 * Return: 1 for +, 0 for 0, -1 for -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}

}
