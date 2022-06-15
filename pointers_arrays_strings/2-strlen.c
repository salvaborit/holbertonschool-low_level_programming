#include <stdio.h>
#include "main.h"
/**
* _strlen - returns length of string
* @s: stores string to be checked
* Return: length of string
*/
int _strlen(char *s)
{
	int i, spaces, length;

	for (i = 0; (s[i] != '\0'; i++)
		if (s[i] == ' ')
			spaces++;
		else
			length++;
	return (spaces + length);
}
