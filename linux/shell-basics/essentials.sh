#!/usr/bin/env bash

# print working directory
pwd

# list entry
ls /usr/local/

# change directory
cd .

# make directory
mkdir /tmp/directory

# create file
touch /tmp/file

# remove file or directory
rm /tmp/file
rm --recursive /tmp/directory

# echo back and write to file
echo "message" > /tmp/sample

# print contents of a file
cat /tmp/sample
