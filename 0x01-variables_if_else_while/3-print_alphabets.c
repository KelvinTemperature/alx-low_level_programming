#include <stdio.h>

/**
 * main - Prints all alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char calp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (calp = 'A'; calp <= 'Z'; calp++)
	{
		putchar(calp);
	}
	putchar('\n');
	return (0);
}
