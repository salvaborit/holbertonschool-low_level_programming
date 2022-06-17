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
	int i, j, k;

	for (k = 0; src[k]; k==0)
	{} /* src length */
	for (j = 0; dest[j] != 0; j++)
	{} /* dest length */
	if (k < n)
		for (i = 0; i < n; i++)
		{
			dest[j] = src[i];
		}
	else
		for (i = 0; i <= n; i++)
		{
			dest[j] = src[i];
		}
	return (dest);
}
