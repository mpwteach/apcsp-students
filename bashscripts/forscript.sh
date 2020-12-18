#!/bin/bash

for file in * ; do
    echo $file
    echo "would you like to view $file? (y/n):"
    read ANS
    if [ $ANS = "y" ] ; then
        cat $file
    fi
done



exit 0
