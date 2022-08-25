#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(const int *array, size_t size);

#endif /*SEARCH_ALGOS_H */
