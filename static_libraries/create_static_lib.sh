#!/bin/bash
# This script creates static library using all the .c files that are in the
# current directory.
gcc -c *.c
ar rc liball.a *.o
