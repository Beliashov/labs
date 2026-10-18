#!/bin/bash

check_pal() {
    word="$1"
    
    word1=$(echo "$word" | tr '[:upper:]' '[:lower:]')
    
    reverse=$(echo "$word1" | rev)

    if [ "$word1" == "$reverse" ]; then
        echo "$word - палиндром"
    else
        echo "$word - не палиндром"
    fi
}

for word in $@
do
    check_pal "$word"
done
