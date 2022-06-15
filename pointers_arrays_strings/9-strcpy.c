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
	int length, i;

	for (length = 0; src[length] <= '\0'; length++)
	{}
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
