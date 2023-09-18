#include "main.h"

/**
 * swap_int - swaps two variables
 *
 * @a: variable to swap
 * @b: variable to swap
 *
 */

void swap_int(int *a, int *b)
{
	int j = *a;
	int k = *b;

	*a = k;
	*b = j;
}
