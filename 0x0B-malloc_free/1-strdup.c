#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @str: string to duplicate
 * Return: pointer to new allocation space
 */

char *_strdup(char *str)
{
	int i, len;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len = len + 1;

	if (*str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * len);
	if (s == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
