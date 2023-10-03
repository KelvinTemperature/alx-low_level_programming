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
	int i, sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] >= 58) && (*argv[i] <= 126))
		{
			printf("Error\n");

			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
