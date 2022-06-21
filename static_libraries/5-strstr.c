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
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
