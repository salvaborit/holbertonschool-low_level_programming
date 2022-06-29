#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - executes func given as parameter on each element of array
* @array: array to fill
* @size: size of array
* @action: func pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
