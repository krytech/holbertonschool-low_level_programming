#!/usr/bin/python3
"""Function that returns the perimeter of an island."""


def island_perimeter(grid):
    """Calculates the perimeter when '1' is found"""
    beaches = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col]:
                    beaches += 1  # north beach
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    beaches += 1  # south beach
                if col == 0 or grid[row][col - 1] == 0:
                    beaches += 1  # west beach
                if col == (len(grid[0]) + 1) or grid[row][col + 1] == 0:
                    beaches += 1  # east beach
    return beaches
