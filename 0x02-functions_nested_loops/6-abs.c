#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: the number to be evaluated
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		n = n / -1;
		_putchar(n);
	}

}
