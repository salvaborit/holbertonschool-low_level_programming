#include "main.h"
/**
* _isalpha - checks for alphabetic character
*
* Return: 0 if c is a letter, 1 if otherwise
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
