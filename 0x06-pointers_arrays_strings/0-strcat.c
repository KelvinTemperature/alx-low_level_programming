#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * @dest: destination variable
 * @src: source variable
 *
 * Return: pointer to dest variable
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{

	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
