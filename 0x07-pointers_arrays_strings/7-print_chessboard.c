#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array pointer
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int n = strlen(*a);

	for (i = 0; i < n; i++)
	{
		j = 0;
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
