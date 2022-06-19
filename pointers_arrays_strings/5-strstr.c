#include "main.h"
#include <stdio.h>
/**
* _strstr - finds first occurrence of substring needle in string haystack
* @needle: substring to be found
* @haystack: string to be checked for substring needle
* Return: pointer to beginning of located substring, 0 if substring not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, eqChars;

	if (needle[0] == '\0')
		return (&haystack[0]);
	/* needle string length */
	for (j = 0; needle[j]; j++)
	{}
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[i])
		{
			k = 0;
			l = i;
			eqChars = 0;
			while (needle[k])
			{
				if (haystack[l] == needle[k])
					eqChars++;
				k++;
				l++;
			}
			if (eqChars == j)
			i	return (&haystack[i]);
		}
	}
	return (NULL);
}
