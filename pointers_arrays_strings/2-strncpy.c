#include "main.h"
/**
* _strncpy - copies a string
* @dest: pointer to destination string
* @src: pointer to source string
* @n: number of ch
* Return: pointer to string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = dest[i];
	for (; i < n; i++)
		dest[i] = 0;
	return (dest);
}
