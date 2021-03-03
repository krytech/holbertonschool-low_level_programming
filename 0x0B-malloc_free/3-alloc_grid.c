#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional arrays of integers
 * @width: 2d array width
 * @height: 2d array height
 * Return: pointer to the array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

		if (!grid)
			return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

			if (!grid[row])
			{
				while (row)
				{
					free(grid[row]);
					row--;
				}
				free(grid);
				return (NULL);
			}
	for (col = 0; col < width; col++)
		grid[row][col] = 0;
	}
	return (grid);
}
