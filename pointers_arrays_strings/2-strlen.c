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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			spaces++;
		else
			i++;
	}
	i = i + spaces;
	return (i);
}
