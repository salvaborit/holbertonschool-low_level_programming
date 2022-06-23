#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to newly allocated space in memory (s1 then s2)
*/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int lenStr, i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lenStr = strlen(s1);
	lenStr += strlen(s2);
	ar = malloc(lenStr);
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		ar[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i]; i++)
	{
		ar[j] = s2[i];
		j++;
	}
	ar[j] = '\0';
	return (ar);
}
