#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* string_nconcat - concatenates s1 with n bytes of s2 + \0
* @s1: string 1
* @s2: string 2
* @n: number of bytes of s2 to copy
* Return: pointer to new array containing s1 + n bytes of s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int lenStr, i, j;

	lenStr = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) > 0)
		lenStr += strlen(s1);
	if (strlen(s2) > 0)
	{
		if (n > strlen(s2))
			lenStr += strlen(s2);
		else
			lenStr += n;
	}
	lenStr++;
	ar = malloc(lenStr * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (strlen(s1) > 0 || s1 != NULL)
		for (; s1[i]; i++)
			ar[i] = s1[i];
	if (strlen(s2) > 0 || s2 != NULL)
	{
		if (n > strlen(s2))
			for (; s2[j]; i++, j++)
				ar[i] = s2[j];
		else
			for (; j < n; i++, j++)
				ar[i] = s2[j];
	}
	ar[i] = '\0';
	return (ar);
}
