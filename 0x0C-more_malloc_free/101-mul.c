#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry function that collects argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isdigit(num1) || !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = malloc(sizeof(int) * 2);

	if (result == NULL)
		return (NULL);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
