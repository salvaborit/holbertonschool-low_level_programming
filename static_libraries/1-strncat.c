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

	if (dest[0] == 0 || src[0] == 0)
		return (dest);
	else if (n > 0)
	{
		for (j = 0; dest[j] != 0; j++)
		{} /* dest length */
		for (i = 0; i < n; i++, j++)
			dest[j] = src[i];
		dest[j] = 0;
	}
	return (dest);
}
