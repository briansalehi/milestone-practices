#!/usr/bin/env python3

D = {'a': 1, 'b': 2, 'c': 3}

## Element retrieval
value = D['x'] if 'x' in D else 0
# or
value = D.get('x', 0)


## Sorting keys
D = {'a': 1, 'b': 2, 'c': 3}

Ks = list(D.keys())
Ks.sort()
for key in Ks:
    print(key, '=>', D[key])

# or
for key in sorted(D):
    print(key, '=>', D[key])


## Iteration
squares = []
for x in [1, 2, 3, 4, 5]:
    squares.append(x ** 2)

# or
squares = [x ** 2 for x in [1, 2, 3, 4, 5]]

