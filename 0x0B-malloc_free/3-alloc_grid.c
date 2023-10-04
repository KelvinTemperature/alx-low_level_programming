#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2-dimension array
 * @width: number of element in the each array
 * @height: number if arrays
 * Return: pointer to a 2-dimension array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
