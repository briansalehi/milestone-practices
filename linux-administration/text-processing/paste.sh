#!/usr/bin/env bash

echo "Name" > /tmp/name
echo "Jane" >> /tmp/name
echo "John" >> /tmp/name

echo "Number" > /tmp/number
echo "+12345" >> /tmp/number
echo "+16789" >> /tmp/number

echo "Country" > /tmp/country
echo "US" >> /tmp/country
echo "Ca" >> /tmp/country

paste /tmp/name /tmp/number /tmp/country
