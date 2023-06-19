#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC *.c
gcc -shared -o liball.so *.o
export LB_LIBRARY_PATH=.:$LD_LIBRARY_PATH
