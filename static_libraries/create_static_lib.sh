#!/bin/bash
find . -type f -name '*.c' -exec gcc -c {} \;
ar rcs liball.a *.o