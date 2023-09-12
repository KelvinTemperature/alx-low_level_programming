#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: the number to be evaluated
 *
 * Return: zero (0)
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(48 + n);
	}
	else
	{
		n = n / -1;
		_putchar(48 + n);
	}
	return (n);

}
