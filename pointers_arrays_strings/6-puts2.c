#include "main.h"
#include <stdio.h>
/**
* puts2 - prints every other character of a string + \n
* @str: string to be modified
*/
void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
