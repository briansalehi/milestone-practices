#!/usr/bin/env python3

M = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

# Create a generator of row sums
G = (sum(row) for row in M)

next(G)

next(G)

next(G)
