#include "main.h"
/**
* leet - encodes a string into 1337 (leet slang)
* @c: string to be encoded
* Return: encoded string in leet
*/
char *leet(char *c)
{
	int i, j;
	char *l = "AaEeOoTtLl";
	char *n = "4433007711";

	for (i = 0; c[i]; i++)
		for (j = 0; l[j]; j++)
			if (l[j] == c[i])
				c[i] = n[j];
	return (c);
}
