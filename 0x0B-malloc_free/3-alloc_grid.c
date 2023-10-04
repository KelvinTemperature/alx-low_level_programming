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

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * width);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		if (arr[i] == 0)
		{
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
