#!/usr/bin/env bash

tail -n 5 /etc/services

head -n 45 /etc/services | tail -n 5

cat /etc/services | head -n 50 | tail -n 5
