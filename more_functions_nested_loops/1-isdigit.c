#include "main.h"
/**
* _isdigit - checks for a digit
* @c: var that stores value to be checked
* Return: 1 if digit, 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
