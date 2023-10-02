#include <stdio.h>

/**
 * main - the entry function
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
