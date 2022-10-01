#!/bin/bash

/**
 * create_static_lib.sh: script creates a 
 * static library called liball.a from all the .c
 */

gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
