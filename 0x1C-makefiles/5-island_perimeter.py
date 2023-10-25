#!/usr/bin/env python3
"""
island perimeter
"""


def island_perimeter(grid):
    """ return island perimeter """
    square_count = 0
    for row in grid:
        for elem in row:
            if elem == 1:
                square_count += 1

    square_count += 1
    perimeter = square_count * 2


    return (perimeter)
