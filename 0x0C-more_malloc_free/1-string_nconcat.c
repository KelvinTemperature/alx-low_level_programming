#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
		str[i] = s2[i];
	str[i] = '\0';

	return (str);

}
