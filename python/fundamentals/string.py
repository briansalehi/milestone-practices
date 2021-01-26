#!/usr/bin/env python3

name = 'Jane Doe'

# length of string
len(name) # 8

# first index
name[0] # 'J'

# index backward, both equivalent
name[-1] # 'e'
name[len(name)-1] # 'e'

# slice string
name[0:4] # 'Jane'
name[5:] # 'Doe'

# entire string
name[:] # 'Jane Doe'

# concatanation
'John' + name[4:] # 'John Doe'

# repetition
'!' * 3 # '!!!'

# change in place
expanded = list(name)
expanded[4] = '-'
''.join(expanded) # 'Jane-Doe'

# encoding into bytearray
name.encode('utf8') # b'Jane Doe'

# decode from bytearray
b'Jane Doe'.decode('utf16') # 'Jane Doe'

# find and replace
name.find('D') # 6
name.replace('D', 'J') # 'Jane Joe'

# expanding string into list
name.split(' ') # ['Jane', 'Doe']

# change case
name.upper() # 'JANE DOE'
name.lower() # 'jane doe'
name.title() # 'Jane Doe'

# content test
name.isalpha() # False, holds space
name.isalnum() # False
name.isprintable() # True

# space strip
name.rstrip() # 'Jane Doe'
name.lstrip() # 'Jane Doe'
name.strip() # 'Jane Doe'

# format string
'{}, {}'.format('A', 'B') # 'A B'
