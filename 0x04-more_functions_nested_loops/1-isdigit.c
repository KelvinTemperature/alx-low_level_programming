#include "main.h"

/**
 * _isdigit - check for digits
 *
 * @c: the variable to check
 *
 * Return: 1 for positive case 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
