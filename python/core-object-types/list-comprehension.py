#!/usr/bin/env python3

# A 3 × 3 matrix, as nested lists
# Code can span lines if bracketed
M = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

# Collect the items in column 2
[row[1] for row in M]

# Collect only even items in column 2
[row[1] for row in M if row[1] % 2 == 0]

# Collect a diagonal from matrix
[M[i][i] for i in [0, 1, 2]]

# Repeat characters in a string
[c * 2 for c in 'spam']

# Multiple values, "if" filters
[[x ** 2, x **  3] for x in range(4)]
[[x, x / 2, x * 2] for x in range(-6, 7, 2) if x > 0]

# Generate sets and dictionaries
{sum(row) for row in M}
{i : sum(M[i]) for i in range(3)}

# List of character ordinals
[ord(x) for x in 'spaam']

# Sets remove duplicates
{ord(x) for x in 'spaam'}

# Dictionary keys are unique
{x: ord(x) for x in 'spaam'}

# Generator of values
(ord(x) for x in 'spaam')
