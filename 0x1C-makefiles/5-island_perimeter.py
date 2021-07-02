#!/usr/bin/python3
"""Function that returns the perimeter of an island."""


def island_perimeter(grid):
    """Calculates the perimeter when '1' is found"""
    beaches = 0
    for row in range(len(grid)):
        for col in range (len(grid[0])):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0 or row == 0:
                    beaches += 1 # north beach
                if grid[row + 1][col] == 0 or row == (len(grid) - 1):
                    beaches += 1 # south beach
                if grid[row][col - 1] == 0 or col == 0:
                    beaches += 1 # west beach
                if grid[row][col + 1] == 0 or col == (len(grid[0]) + 1):
                    beaches += 1 # east beach
    return beaches
