#!/usr/bin/env python3

# set implementation
X = set('spam')
Y = {'h', 'a', 'm'}

# A tuple of two sets without parentheses
X, Y

# Intersection
X & Y

# Union
X | Y

# Difference
X - Y

# Superset
X > Y

# Set comprehensions in 3.X and 2.7
{n ** 2 for n in [1, 2, 3, 4]}

# Remove duplicates
list(set([1, 2, 1, 3, 1]))

# Finding differences
set('spam') - set('ham')

# Order-neutral equality tests (== is False)
set('spam') == set('asmp')

# Membership test
'p' in set('spam')
'p' in 'spam'
'ham' in ['eggs', 'spam', 'ham']
