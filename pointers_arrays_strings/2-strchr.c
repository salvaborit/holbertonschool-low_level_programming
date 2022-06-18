#include "main.h"
#include <stdio.h>
/**
* _strchr - locates a character in a string
* @s: string to be checked
* @c: character to be locaetd
* Return: pointer to first occurence of c, 0 if character not found
*/
char *_strchr(char *s, char c)
{
	int i;
	char *firstOcc;

	for (i = 0; !(s[i] == '\0'); i++)
		if (s[i] == c)
		{
			firstOcc = &s[i];
			return (firstOcc);
		}
	return (0);
}
