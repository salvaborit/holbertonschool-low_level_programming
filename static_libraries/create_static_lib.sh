#!/bin/bash
# creates a static library called liball. from all the .c files in the current dir

gcc -c -Wall -Werror -Wextra *.c | ar -rc liball.a *.o
