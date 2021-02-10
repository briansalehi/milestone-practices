#!/usr/bin/env bash

cat << EOF > /tmp/sample
a1,a2,a3
b1,b2,b3
c1,c2,c3
EOF

awk 'BEGIN{ FS = "," } NR == 2 { print $2 }' /tmp/sample
