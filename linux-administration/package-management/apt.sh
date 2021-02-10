#!/usr/bin/env bash

# updates apt repository
apt update

# lists upgradable packages
apt list --upgradable

# upgrades installed packages
apt upgrade

# upgrades Debian
apt dist-upgrade

# searches through all packages
apt search gedit

# prints package information
apt show gedit

# installs packages
apt install gedit

# remove packages
apt remove gedit

# removes packages with dependencies
apt purge gedit

# removes unnecessary packages
apt autoremove

# installs missing packages
apt install --fix-missing
