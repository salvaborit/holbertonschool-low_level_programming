#include <stdio.h>
#include "main.h"
/**
* strlen - returns length of string
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		i++;
	return (i);
}
