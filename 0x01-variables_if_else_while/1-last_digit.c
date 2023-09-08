#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	m = n % 10;

	if (m > 5)
	{
		printf("The last digit of %d is %d and is greater than\n", n, m);
	}
	else if (m < 6)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else if (m == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n);
	}
	return (0);
}
