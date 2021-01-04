#!/bin/bash
echo "Performance Test Code"
echo "Building the Executables"

echo "cleaning old stuff:"
rm -f *.class 
rm -f n-body

echo "Building the C Executable"
gcc -O3 n-body.c -o n-body -lm

echo "Building the Java Executable"
javac nbody.java

echo "Finished Building the Compiled Programs"

