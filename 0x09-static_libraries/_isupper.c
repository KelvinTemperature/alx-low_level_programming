#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *
 * @c:the variable to check
 *
 * Return: 1 for positive case and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
