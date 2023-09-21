#include "main.h"

/**
 * _strcmp - comapres s2 to s1
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: the value of s1-s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return (s1 - s2);
		}
		else if (*s1 == *s2)
		{
			return (0);
		}
	}
}
