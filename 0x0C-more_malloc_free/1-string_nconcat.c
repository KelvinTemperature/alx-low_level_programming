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
	unsigned int len1, len2;
	/*unsigned int len1 = strlen(s1);*/
	/*unsigned int len2 = strlen(s2);*/
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);

}
