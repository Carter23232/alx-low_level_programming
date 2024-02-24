#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so -Wl,-soname,liball.so *.o
