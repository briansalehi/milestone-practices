#!/usr/bin/env bash

cat << EOF > /tmp/sample
a
a
b
b
b
c
b
b
a
EOF

# truncates neighbours only
uniq /tmp/sample

# to truncate all duplicates, sort first
sort /tmp/sample | uniq
