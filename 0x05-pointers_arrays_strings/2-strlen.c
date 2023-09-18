#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
