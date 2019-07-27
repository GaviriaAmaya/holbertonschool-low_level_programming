#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c && gcc -fPIC -c *.c && gcc -shared -o liball.so *.o
