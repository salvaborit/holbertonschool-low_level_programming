#include "main.h"
#include <stdio.h>
/**
* rot13 - encodes a string using rot13
* @c: - string to be encoded
* Return: encoded string
*/
char *rot13(char *c)
{
	int i, j;
	char *abc = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *rot = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; c[i]; i++)
		for (j = 0; abc[j]; j++)
			if (c[i] == abc[j])
				c[i] = rot[j];
	return (c);
}
