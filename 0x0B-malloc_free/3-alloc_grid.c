#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2-dimension array
 * @width: number of element in the each array
 * @height: number if arrays
 * Returns: pointer to a 2-dimension array
 */

int **alloc_grid(int width, int height)
{
	int i, j, w, h;
	char **array;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(sizeof(int) * width * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
