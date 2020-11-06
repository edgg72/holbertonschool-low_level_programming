#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if len(grid) == 0 or len(grid[0]) == 0:
        return 0

    rl = len(grid)
    cl = len(grid[0])
    row_set = set()
    col_set = set()

    for row in range(rl):
        for col in range(cl):
            if grid[row][col] == 1:
                row_set.add(row)
                col_set.add(col)

    return (len(row_set) * 2) + (len(col_set) * 2)
