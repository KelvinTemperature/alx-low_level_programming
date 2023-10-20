#include "lists.h"

/**
 * print_first - print this before the main function
 * @(constructor): condition to print before main
 */

void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
