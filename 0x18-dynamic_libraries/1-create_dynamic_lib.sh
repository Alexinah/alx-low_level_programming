#!/bin/bash
gcc *.c -c -fPIC
gcc -shared -WI,-soname,liball.so -o liball.so *.o
