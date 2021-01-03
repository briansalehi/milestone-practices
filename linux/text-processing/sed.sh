#!/usr/bin/env bash

cat << EOF > /tmp/sample
You can not belive how amazing Sed can be
until you used it!
EOF

# deleting line
sed '2d' /tmp/sample

# printing line
sed -n '1p' /tmp/sample

# substitution of string
sed 's/amazing/useful/' /tmp/sample
