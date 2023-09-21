#include "main.h"

/**
 * _strncpy - copies string of n bytes
 *
 * @dest: destination variable
 * @src: source variable
 * @n: number of strings to copy
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
}
