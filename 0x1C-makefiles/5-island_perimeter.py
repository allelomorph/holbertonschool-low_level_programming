#!/usr/bin/python3
"""0x1C. C - Makefiles, task 5. Island Perimeter

"""


def island_perimeter(grid):
    """Find the perimeter of an "island" of 1s in an "ocean" of 0s.

    For a 2D grid of 0s and 1s, find the perimeter of the contiguous area of
    1, with negative space in 0s.

    Args:
        grid (list of lists of ints): 2D list representation of island

    Attributes:
        perimeter (int): total units of cell length around island edge

    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y]:
                if y == 0 or not grid[x][y - 1]:
                    perimeter += 1
                if y == len(grid[0]) - 1 or not grid[x][y + 1]:
                    perimeter += 1
                if x == 0 or not grid[x - 1][y]:
                    perimeter += 1
                if x == len(grid) - 1 or not grid[x + 1][y]:
                    perimeter += 1
    return perimeter
