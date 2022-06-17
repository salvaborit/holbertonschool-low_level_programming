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

	/* copies src to dest */
	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	/* if any extra bytes available in dest, fill with '\0' */
	for (; i < n; i++)
		dest[i] = 0;
	return (dest);
}
