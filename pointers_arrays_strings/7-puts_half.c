#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string + \n
* @str: string to be cut
*/
void puts_half(char *str)
{
	int length, c;

	for (length = 0; str[length] != '\0'; length++)
	{}
	for (c = length - 1; c > length / 2; c++)
		putchar(str[c]);
	putchar('\n');
}
