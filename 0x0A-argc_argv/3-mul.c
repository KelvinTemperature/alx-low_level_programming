#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry function
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
