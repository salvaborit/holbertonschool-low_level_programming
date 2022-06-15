#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string
* @str: string to be printed
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] =! '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
}
