#include "main.h"
#include <stdio.h>
/**
* _strpbrk - locates first occurrence in the string s of any of the
* bytes in the string accept
* @s: string to be checked
* @accept: string to be compared to
* Return: pointer to the byte in s that matches byte in accept, or
* NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	return (0);
}
