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

	while (i != 0)
	{
	if ((i + 1) % 2 == 0)
	{
		n = (i - 1) / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	}
	_putchar('\n');
}
