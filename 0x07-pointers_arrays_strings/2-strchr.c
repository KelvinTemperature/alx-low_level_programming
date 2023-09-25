#include "main.h"

/**
 * *_strchr - function that locates the first occurence of c
 * @s: string to search
 * @c: character to search
 * Return: *s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
