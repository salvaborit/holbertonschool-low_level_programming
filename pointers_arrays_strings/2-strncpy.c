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
	int i, j;

	for (j = 0; dest[j]; j++)
	{}
	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
