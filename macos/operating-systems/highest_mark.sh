#!/bin/bash

while read number grade name;
do
    max="$grade"
    if [$grade -gt $m ]
    then
        max="$grade"
        break
    else
        continue
    fi
done < marks.txt

echo "Your highest quiz score is" $max
