#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: bytes to allocate
* Return: void pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}
