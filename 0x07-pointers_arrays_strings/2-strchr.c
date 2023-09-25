#include "main.h"

/**
 * *_strchr - function that locates the first occurence of c
 * @s: string to search
 * @c: character to search
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
