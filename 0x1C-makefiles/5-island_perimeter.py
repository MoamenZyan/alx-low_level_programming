#!/usr/bin/python3

"""island_primeter function."""


def island_perimeter(grid):
    """Grid Function that calculate perimeter of a grid."""
    if (len(grid) == 0):
        return 0
    horizontal = 0
    vertical = 0
    max = 0
    for r in range(0, len(grid)):
        horizontal = 0
        if (1 in grid[r]):
            vertical += 1
        for c in range(0, len(grid[r])):
            if (grid[r][c] == 1):
                horizontal += 1
        if (max <= horizontal):
            max = horizontal
    return 2 * (max + vertical)
