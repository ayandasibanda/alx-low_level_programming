#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c -fpic && gcc *.o -shared -o liball.so
