#include <stdio.h>

/**
 * main - Print numbers with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1;

	for (num = 1; num < 10; num++)
	{
		putchar(48+num);
	}
	putchar('\n');
	return (0);
}
