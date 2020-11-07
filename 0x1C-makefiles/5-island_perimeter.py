#!/usr/bin/python3
""" Module for calculated island perimeter """


def island_perimeter(grid):
    """ Function that returns the perimeter """
    perimeter = 0

    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                perimeter += 2
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 1
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 1

    return perimeter * 2
