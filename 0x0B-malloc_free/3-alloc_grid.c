#include <stdlib.h>

/**
 * alloc_grid - creates 2D array of integers
 * @width: number of rows
 * @height: number of columns
 *
 * Return: pointer to 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			grid[b][c] = 0;
		}
	}
	return (grid);
}
