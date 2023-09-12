#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 *
 * @i: the number to evaluate
 *
 * Return:value of last digit
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
