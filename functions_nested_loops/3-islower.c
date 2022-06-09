#include "main.h"
/**
* _islower - checks for lowercase letter
* @c: a variable that stores value to check
* Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
