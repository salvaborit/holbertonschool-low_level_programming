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

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	return ('\0');
}
