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
	int i = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
	}
}
