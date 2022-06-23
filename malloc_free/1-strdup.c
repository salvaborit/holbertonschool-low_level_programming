#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* _strdup - fills newly allocated space in memory with a string
* @str: string given to fill newly allocated space in memory
* Return: pointer to newly allocated memory, NULL if failed
*/
char *_strdup(char *str)
{
	char *ar;
	int i, len;

	len = strlen(str);
	if (str == NULL)
		return (NULL);
	ar = malloc(strlen(str));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
