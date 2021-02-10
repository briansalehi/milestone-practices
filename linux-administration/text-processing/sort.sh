#!/usr/bin/env bash

cat << EOF > /tmp/sample
z
c
a
f
k
EOF

cat /tmp/sample | sort
