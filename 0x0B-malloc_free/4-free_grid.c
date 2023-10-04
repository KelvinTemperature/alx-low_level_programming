#include "main.h"
#include <stdlib.h>

/**
 * fre_grid - free allocated grid bytes
 * @grid: pointed grid
 * @height: each array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid);

	free(grid);
}
