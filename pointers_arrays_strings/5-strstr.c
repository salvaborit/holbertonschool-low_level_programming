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
	int i, j, k, l;
	char *ret;

	/* needle string length */
	for (j = 0; needle[j]; j++)
	{}
	for (i = 0; haystack[i]; i++)
	{
		k = i;
		l = 0;
		while (needle[l] && haystack[k] == needle[l])
		{
			if (l == j)
			{
				ret = &haystack[i];
				return (ret);
			}
			k++;
			l++;
		}
	}
	return (0);
}
