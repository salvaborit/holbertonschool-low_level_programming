#include "main.h"
/**
* _isupper - checks if stored value is an uppercase letter
* @c: var that stores letter to be checked
* Return: 1 if uppercase, 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
