#include "main.h"

/**
 * print_alphabet - print alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
