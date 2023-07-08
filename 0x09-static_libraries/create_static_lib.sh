#!/bin/bash
gcc -Wall -pedantic -Werror -Wextre -c *.c
ar -rc liball.a *.o
rablib liball.a
