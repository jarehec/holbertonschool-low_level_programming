#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fpic *.c;
gcc -shared -o gcc liball.so *.o;
