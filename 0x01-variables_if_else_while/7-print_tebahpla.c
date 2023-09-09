#include <stdio.h>

/**
 * main - Print reverse alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ralp;

	for (ralp = 'z'; ralp >= 'a'; ralp--)
	{
		putchar(ralp);
	}
	putchar('\n');
	return (0);
}
