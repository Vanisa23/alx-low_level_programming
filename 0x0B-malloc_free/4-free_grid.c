#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description:
 * This function frees the memory of a 2D grid.
 * It iterates over each row in the grid and frees the
 * memory allocated for that row. Finally, it
 * frees the memory allocated for the grid itself.
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* Free memory for each row */
	}
	free(grid); /* Free memory for the grid itself */
}
