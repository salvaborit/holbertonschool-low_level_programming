#include "main.h"
#include <stdio.h>
/**
* _memcpy - copies memory area to another memory area
* @dest: destination area
* @src: source area
* @n: bytes of memory to be copied
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
