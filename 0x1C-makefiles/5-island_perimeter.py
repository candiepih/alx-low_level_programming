#!/usr/bin/python3
"""Contains function that returns the perimeter of the 
island described in grid
"""

def determine_soroundings(array, y, x):
    """Assuming that land is 0 and water is 1 using xor and
    water as mask we get if side has water
    """
    mask = 1
    top = array[y - 1][x] ^ mask
    bottom = array[y + 1][x] ^ mask
    left = array[y][x - 1] ^ mask
    right = array[y][x + 1] ^ mask

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
