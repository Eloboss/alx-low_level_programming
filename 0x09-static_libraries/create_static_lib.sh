#!/bin/bash
gcc -c -Wall -Werror -pedantic -Wextra -std=gnu89 *.c
ar -rc liball.a *.o
ranlib liball.a

