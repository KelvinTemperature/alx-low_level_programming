#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (j = 0; s2[j] != '\0'; j++)
		len++;
	len = len + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
