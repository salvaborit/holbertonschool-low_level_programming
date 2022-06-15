#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string + \n
* @str: string to be cut
*/
void puts_half(char *str)
{
	int length, n;

	for (length = 0; str[length] != '\0'; length++)
	{}
	if (length % 2 == 0)
		for (n = ((length - 1) / 2) + 1; n <= length - 1; n++)
			putchar(str[n]);
	else if (length % 2 != 0)
		for (n = ((length - 2) / 2) + 2; n <= length - 1; n++)
			putchar(str[n]);
	putchar('\n');
}
