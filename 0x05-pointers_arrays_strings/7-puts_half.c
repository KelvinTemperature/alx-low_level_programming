#include "main.h"

/**
 * puts_half - print2nd half of the character
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i = sizeof(str);
	int j;
	int n;

	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		n = (i + 1) / 2;
		for (j = n; j <= i; j++)
		{
			_putchar(s[j]);
		}
	}
}
