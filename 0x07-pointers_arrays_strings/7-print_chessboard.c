#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints chessboard
 * @a: array pointer
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
