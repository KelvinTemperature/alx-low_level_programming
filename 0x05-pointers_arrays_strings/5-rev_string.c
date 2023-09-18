#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string
 */

void rev_string(char *s);
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
		i++
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
}
