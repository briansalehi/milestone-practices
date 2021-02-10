#!/usr/bin/env bash

cat << EOF > /tmp/sample
line 1
line 2
line 3
EOF

split -l 1 /tmp/sample
