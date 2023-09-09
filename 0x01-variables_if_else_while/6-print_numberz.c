#include <stdio.h>

/**
 * main - Print numbers with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '1';

	for (num = '1'; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
