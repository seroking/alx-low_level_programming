#!/bin/bash

gcc -c -Wall -Werror -Wextra *.c
ar -rcs libname.a *.o
rm *.o
