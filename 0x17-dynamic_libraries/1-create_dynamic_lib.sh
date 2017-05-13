#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fpic -c *.c;
gcc -shared -o liball.so *.o;
