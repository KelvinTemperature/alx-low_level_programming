#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separators for the number
 * @n: number of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
