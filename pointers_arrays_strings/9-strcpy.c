#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies string pointed by src (inc \0) to buffer pointed to by dest
* @dest: destination
* @src: source
* Return: pointer to best (char)
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
