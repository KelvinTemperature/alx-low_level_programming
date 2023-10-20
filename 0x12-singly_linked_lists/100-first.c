#include "lists.h"

/**
 * print_first - print this before the main function
 * @(constructor): condition to print before main
 */

void print_first(void) __attribute__((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
