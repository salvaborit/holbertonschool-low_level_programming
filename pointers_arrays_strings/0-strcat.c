#include "main.h"
/**
* _strcat - concatenates two strings
* @src: pointer to string to be appended
* @dest: pointer to string that will have *src appended
* Return: pointer to string dest
*/
char *_strcat(char *dest, char *src)
{
	int lenDest, lenSrc;

	for (lenDest = 0; dest[lenDest]; lenDest++)
	{
	}
	for (lenSrc = 0; src[lenSrc]; lenSrc++)
	{
		dest[lenDest] = src[lenSrc];
		lenDest++;
	}
	src[lenSrc] = '\0';
	return (dest);
}
