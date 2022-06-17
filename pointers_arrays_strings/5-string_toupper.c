#include <stdio.h>
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* 
* Return: Always 0 (Success)
*/
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i])
		if (c[i] < 122 && c[i] > 97)
			c[i] = c[i] - 32;
	return (c);
	
}
