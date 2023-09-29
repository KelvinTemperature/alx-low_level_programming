#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @a: input number.
 * @b: iterator.
 * Return: square root or -1.
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
