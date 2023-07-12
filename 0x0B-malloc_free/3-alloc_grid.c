#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated 2D grid, or NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	/* Check if width or height is non-positive */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows of the grid */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			/**
			 * If memory allocation fails, free
			 * previously allocated memory and return NULL
			 */
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	/* Initialize each element in the grid to 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
