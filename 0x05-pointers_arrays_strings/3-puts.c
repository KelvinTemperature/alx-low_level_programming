#include "main.h"

/**
 * _puts - print string to stdout
 *
 * @str: string
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*str[i]);
		i++;
	}

}
