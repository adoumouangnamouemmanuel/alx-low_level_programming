#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -o -shared liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
