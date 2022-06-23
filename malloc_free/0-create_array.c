#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars and initializes it with
* a specific char
* @size: size of array to be created
* @c: char to be used to fill memory
* Return: pointer to array, or NULL if failed
*/
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);
	unsigned int i;

	if (size == 0 || malloc(size) == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[i] = '\0';
	return (ar);
}
