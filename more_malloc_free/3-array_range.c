#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* array_range - creates an array of integers (from min to max)
* @min: min value
* @max: max value
* Return: pointer to new array
*/
int *array_range(int min, int max)
{
	int *ar, arLen, i;

	if (min > max)
		return (NULL);
	arLen = max - min;
	ar = malloc(arLen * sizeof(int) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	ar[i] = '\0';
	return (ar);
}
