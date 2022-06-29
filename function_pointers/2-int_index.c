#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: array to search
* @size: number of elements in array
* @cmp: func pointer to func used to compare values
* Return: index of first element for which cmp doesn't return 0, -1 if no match
* 0 if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; array[i]; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
