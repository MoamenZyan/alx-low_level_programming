#!/usr/bin/python3


"""island_primeter function."""


def island_perimeter(grid):
    """Grid Function that calculate perimeter of a grid."""
    horizontal = 0
    vertical = 0
    max = 0
    for r in range(len(grid)):
        horizontal = 0
        for c in range(len(grid)):
            if (grid[r][c] == 1):
                horizontal += 1
        if (1 in grid[r]):
            vertical += 1
        if (max < horizontal):
            max = horizontal
    return 2 * (max + vertical)
