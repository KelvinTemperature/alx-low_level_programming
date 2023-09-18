#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int j = sizeof(s);

	for (j = j + 1; j >= 0; j--)
		if (j < 9)
		_putchar(s[j / 10]);
	_putchar(s[j % 10]);
}
