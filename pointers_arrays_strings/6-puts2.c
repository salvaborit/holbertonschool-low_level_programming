#include "main.h"
#include <stdio.h>
/**
* puts2 - prints every other character of a string + \n
* @str: string to be modified
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
