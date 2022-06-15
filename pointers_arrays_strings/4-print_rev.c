#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @s: string to be printed in reverse
*/
void print_rev(char *s)
{
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	i = len - 1;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
