#!/bin/bash

#compile all C files
gcc -c -Wall -Werror -Wextra *.c
#create the static library from all .object fie
ar -rc liball.a *.o
#clean the object files
rm *.o
