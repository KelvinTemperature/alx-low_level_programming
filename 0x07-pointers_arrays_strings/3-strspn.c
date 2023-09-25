#include "main.h"

/**
 * _strspn - length of the prefix
 * @s: main string
 * @accept: string to check for
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	length = 0;

	while (s[length] != '\0' && strchr(accept, s[length]) != NULL)
	{
		length++;
	}
	return (length);
}
