#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - clears a 2d grid
 * @grid: pointer to the grid
 * @height: height of the grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
