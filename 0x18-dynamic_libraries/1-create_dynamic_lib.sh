#!/bin/bash

echo "create opject files from source files in current directory"
gcc -c -fPIC *.c

echo "stor all opject files in dynamic library"
gcc -shared *.o -o liball.so

echo "remove all object files from current directory"
rm *.o
