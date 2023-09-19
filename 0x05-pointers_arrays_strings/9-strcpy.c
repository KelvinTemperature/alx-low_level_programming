#include "main.h"

/**
 * _strcpy - pointer copies string
 *
 * @dest: pointer variable
 * @src: pointer variable
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
