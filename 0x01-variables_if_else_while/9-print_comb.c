#include <stdio.h>

/**
 * main - Prints Sigle digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
