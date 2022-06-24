#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements in the array
* @size: bytes per array element
* Return: pointer to allocated memory, NULL if size/nmemb = 0 || malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
