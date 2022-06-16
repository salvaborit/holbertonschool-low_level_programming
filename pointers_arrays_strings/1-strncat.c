#include "main.h"
/**
* _strncat - concatenates 2 strings using n bytes from src
* @src: source string
* @dest: destination string
* @n: bytes to be copied
* Return: pointer to string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != 0; j++)
	{}
	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
	}
	return (dest);
}
