#!/usr/bin/env bash

dpkg -G --install package.deb

dpkg --remove package

dpkg --purge package

dpkg --innfo package.deb

dpkg --list pattern

