#!/bin/bash

echo "Performance Test Code"
echo " - using code from benchmarksgame.alioth.debian.org"
echo "Please see the source files for the author details."
echo "All source code has been edited to remove processor specific optimizations"
echo "Running the Tests:"
echo "*** Please ensure that you do not have the ondemand governor enabled ***"

Duration="5000000"

echo -e "\nThe C Code Example"
T="$(date +%s%N)"
./n-body $Duration
T="$(($(date +%s%N)-T))"
T=$((T/1000000))
echo "It took ${T} milliseconds to run the C test"

echo -e "\nThe Java Example"
T="$(date +%s%N)"
java -XX:+AggressiveOpts nbody $Duration
T="$(($(date +%s%N)-T))"
T=$((T/1000000))
echo "It took ${T} milliseconds to run the Java test"

echo -e "\nThe Python Code Example"
T="$(date +%s%N)"
python n-body.py $Duration
T="$(($(date +%s%N)-T))"
T=$((T/1000000))
echo "It took ${T} milliseconds to run the Python test"

echo "Finished Running the Benchmarks"


