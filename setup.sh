#!/bin/bash

root_directory=milextone
service=server.js
logfile=/tmp/$root_directory.log
port=21000
# color codes
GREEN="\e[32m"
BLUE="\e[34m"
BOLD="\e[1m"
DEFAULT="\e[39m\e[49m\e[0m"

if [ "$UID" -eq 0 ]
then
    echo -e "${BOLD}you cannot be root, run by an unprivilaged user${DEFAULT}"
    exit 1
else
    echo -e "${BLUE}running, this might take a few seconds...${DEFAULT}"
fi

pid="$(sudo netstat -antp 2>/dev/null | grep -E "$port.*\/node" | sed -r 's/^.*\ ([0-9]*)\/node.*$/\1/')"

if [ -n "$pid" ]
then
    if sudo kill "$pid" 2>/dev/null
	then
        echo -e "${BLUE}process ${pid} was killed on port ${port}${DEFAULT}"
    else
        echo -e "${BOLD}failed to kill process ${pid}, something went wrong!${DEFAULT}"
        exit 3
    fi
else
    echo -e "${BLUE}no services are already running! skipping...${DEFAULT}"
fi

echo -e "${BLUE}installing node packages, this might take a few seconds...${DEFAULT}"
if sudo npm install &>"$logfile"
then
    echo -e "${BOLD}something went wrong while installing npm packages, cannot ignore it${DEFAULT}"
    echo "log -> $logfile"
    exit 5
else
    echo -e "${GREEN}npm packages installed${DEFAULT}"
fi

if node "$service" &
then
    echo -e "${GREEN}service is running in background${DEFAULT}"
    if [ -f "$logfile" ]
	then
		rm -f "$logfile"
	fi
else
    echo -e "${BOLD}failed to run server${DEFAULT}"
    exit 6
fi
