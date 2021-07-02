#!/usr/bin/python3

def island_perimeter(grid):
    water = 0
    land = 1
    perimeter

    for i, y in enumerate(grid):
        for j, x in enumerate(grid[i]):
            if x == 0 or grid[i][j+1] == water:
                perimeter += 1
