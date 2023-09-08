#include <stdio.h>

/**
 * main - Print alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
	putchar('\n');
	return (0);
}
