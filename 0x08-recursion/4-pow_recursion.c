#include "main.h"

/**
 * _pow_recursion - returns the value of x^y
 * @x: base integer
 * @y: operator
 * Return: the pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
