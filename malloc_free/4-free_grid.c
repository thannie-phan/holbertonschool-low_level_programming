#include "stdlib.h"

/**
 * free_grid - frees a 2D grid prev created by alloc_grid
 * @grid: address location of 2D grid
 * @height: no of rows in grid
 *
 * Return:
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	if (grid == NULL || height <= 0)
	return;

	while (row < height)
	{
	free(grid[row]);
	row++;
	}

	free(grid);
}
