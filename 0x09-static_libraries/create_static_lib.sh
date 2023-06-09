#!/bin/bash

# Compile each .c file into a .o file
gcc -c *.c

# Create the static library using all .o files
ar rcs liball.a *.o

# Cleanup: remove the .o files
rm *.o
