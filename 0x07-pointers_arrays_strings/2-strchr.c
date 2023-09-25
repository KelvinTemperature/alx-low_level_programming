#include "main.h"

/**
 * *_strchr - function that locates the first occurence of c
 * @s: string to search
 * @c: character to search
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < strlen(*s); i++)
		if (*(s + i) == c)
			return (s + i);
			break;
		else if (*(s + i) == '\0')
			return (NULL);
}
