#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; (i < n / 2) && a[i] != '\0'; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
