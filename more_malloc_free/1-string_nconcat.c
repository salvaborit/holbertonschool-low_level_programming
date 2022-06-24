#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* string_nconcat - concatenates s1 with n bytes of s2 + \0
* @s1: string 1
* @s2: string 2
* Return: pointer to new array containing s1 + n bytes of s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int lenStr, i, j;

	lenStr = 0;
	if (s1 != NULL)
		lenStr += strlen(s1);
	if (s2 != NULL)
	{
		if (n >= strlen(s2))
			lenStr += strlen(s2);
		else
			lenStr += n;
	}
	lenStr++;
	ar = malloc(lenStr * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		ar[i] = s2[j];
	ar[i] = '\0';
	return (ar);
}
