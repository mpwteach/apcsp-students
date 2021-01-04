#!/bin/bash

echo "Exploring Raspberry Pi Chapter 5 Performance Test Code"
echo "By Derek Molloy, using code from benchmarksgame.alioth.debian.org"
echo "Please see the source files for the author details."
echo "All source code has been edited to remove proccessor specific optimizations"
echo "Running the Tests:"
echo "*** Please ensure that you do not have the ondemand governor enabled ***"

Duration="10000000"

echo -e "\nThe C Code Example"
time (./n-body $Duration) 


echo -e "\nThe Java Example"
time (java nbody $Duration)


echo -e "\nThe Python Code Example"
time (python n-body.py $Duration)


echo "Finished Running the Benchmarks"
