#include "main.h"

/**
 * *_strncat - concatanates n bytes from src
 *
 * @dest: Destination variable
 * @src: source variable
 * @n: number of src to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (i = 0; src[i] != '\0' && i <= n; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
