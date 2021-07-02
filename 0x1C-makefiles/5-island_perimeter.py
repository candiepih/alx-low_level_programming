#!/usr/bin/python3
"""Contains function that returns the perimeter of the 
island described in grid
"""

def determine_soroundings(array, y, x):
    """Determines whether soroundings has water or not
    Assuming that land is 0 and water is 1 using xor and
    land as mask we get value as either 1 or 0 to add to
    perimeter
    """
    mask = 1
    top = array[y - 1][x] ^ mask if y > 0 else 1
    bottom = array[y + 1][x] ^ mask if y < (len(array) - 1) else 1
    left = array[y][x - 1] ^ mask if x > 0 else 1
    right = array[y][x + 1] ^ mask if x < (len(array[y]) - 1) else 1

    perimeter = top + bottom + right + left
    return perimeter

def island_perimeter(grid):
    """Gets the perimeter determined by sorounding.
    all sides that do not have water we increase perimeter.
    """
    land = 1
    p = 0
    for i, y in enumerate(grid):
        for j, x in enumerate(grid[i]):
            if x == land:
                p += determine_soroundings(grid, i, j)
    return p
