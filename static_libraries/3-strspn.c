#include "main.h"
#include <stdio.h>
/**
* _strspn - gets length of initial substring of s that has == bytes in accept
* @s: string to be checked
* @accept: characters to be compared to
* Return: length of initial segment which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, charFound;

	charFound = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0, charFound = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				charFound = 1;
		}
		if (charFound == 0)
			return (i);
	}
	return (i);
}
