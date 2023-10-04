#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of char
 * @size: size of the array
 * @c: character to fill the array
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
	free(s);
}
