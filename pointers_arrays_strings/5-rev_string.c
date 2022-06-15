#include "main.h"
#include <stdio.h>
/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
	int length, i; 
	char *firstDig, *lastDig, temp;

	for (length = 0; s[length] != '\0'; length++){}
	firstDig = s;
	lastDig = s;
	for (i = 0; i < length - 1; i++)
		lastDig++;
	for (i = 0; i < length / 2; i++)
	{
		temp = *lastDig;
		*lastDig = *firstDig;
		*firstDig = temp;
		firstDig++;
		lastDig--;
	}
}
