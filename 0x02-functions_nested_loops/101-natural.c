#include <stdio.h>
#include "main.h"

/**
 * main - this is the first function
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
