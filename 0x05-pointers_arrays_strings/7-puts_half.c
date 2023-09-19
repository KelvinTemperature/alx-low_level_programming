#include "main.h"

/**
 * puts_half - print2nd half of the character
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i = sizeof(str);
	int j = 0;
	int n;

	if (str[j] == '\0')
	{
		_putchar('\n');
	}
	else if (i  % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i + 1) / 2;
		for (j = n; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	}

}
