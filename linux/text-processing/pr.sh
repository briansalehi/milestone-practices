#!/usr/bin/env bash

cat << EOF > /tmp/sample
This is a sample letter to dear users.
The page you are reading is a notebook for Linux administrators.
You have probably finished text processing tutorials before you read this.
Make sure you practice notebooks regularly in order to prevent losing details
of first chapters while you are making progress.
EOF

pr /tmp/sample
