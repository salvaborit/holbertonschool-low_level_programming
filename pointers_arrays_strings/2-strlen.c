#include <stdio.h>
#include "main.h"
/**
* _strlen - returns length of string
* @s: stores string to be checked
* Return: length of string
*/
int _strlen(char *s)
{
	int i, spaces;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] == '\0')
			spaces++;
		else
			i++;
	}
	i = i + spaces;
	return (i);
}
