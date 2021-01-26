#!/usr/bin/env python3

# write to file
f = open('data.txt', 'w')
f.write('Hello\n')
f.write('world\n')
f.close()

# read from file
f = open('data.txt')
text = f.read()
print(text)
text.split()

# compact
for line in open('data.txt'):
    print(line)
