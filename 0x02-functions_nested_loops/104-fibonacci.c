#include <stdio.h>

/**
 * main - the first function
 *
 * Return: Always 0
 */

int main(void)
{
	double n1, n2, next;
	int n;

	n1 = 1;
	n2 = 2;

	printf("%d, %d", n1, n2);

	for (n = 0; n < 96; n++)
	{
		next = n1 + n2;
		printf(", %d", next);
		n1 = n2;
		n2 = next;
	}
	printf("\n");

	return (0);
}
