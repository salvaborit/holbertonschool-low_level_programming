#include "main.h"
/**
* _strcat - concatenates two strings
* @src: pointer to string to be appended
* @dest: pointer to string that will have *src appended
* Return: pointer to string dest
*/
char *_strcat(char *dest, char *src)
{
	int lenDest, lenSrc, i, j;

	for (lenDest = 0; dest[lenDest] != '\0'; lenDest++)
	{}
	for (lenSrc = 0; src[lenSrc] != '\0'; lenSrc++)
	{}
	j = 0;
	for (i = lenDest + 1; i < lenSrc; i++)
	{
		dest[i] = src[j];
		j++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
