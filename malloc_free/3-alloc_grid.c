#include "stdlib.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional arr of int
 * @width: width
 * @height: height
 *
 * Return: NULL on failure. if either is 0 or -ve, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int column = 0;
	int row = 0;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	while (row < height)
	{
	grid[row] = malloc(sizeof(int) * width);
	if (grid[row] == NULL)
	{
	while (row > 0)
	{
	row--;
	free(grid[row]);
	}
	free(grid);
	return (NULL);
	}

	column = 0;
	while (column < width)
	{
	grid[row][column] = 0;
	column++;
	}
	row++;
	}

	return (grid);
}
