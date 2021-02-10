#!/usr/bin/env bash

echo "Name Number" > /tmp/numbers
echo "Jane +12345" >> /tmp/numbers
echo "John +16789" >> /tmp/numbers

echo "Name Country" > /tmp/country
echo "Jane US" >> /tmp/country
echo "John Ca" >> /tmp/country

join /tmp/numbers /tmp/country
