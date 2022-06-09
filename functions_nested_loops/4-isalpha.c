#include "main.h"
/**
* _isalpha - checks for alphabetic character
*
* Return: 0 if c is a letter, 1 if otherwise
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
