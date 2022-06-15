#include <stdio.h>
#include "main.h"
/**
* _strlen - returns length of string
* @s: stores string to be checked
* Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
