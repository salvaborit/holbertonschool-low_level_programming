#include "main.h"
#include <stdio.h>
/**
* _abs - computes absolute value of an integer
* @i: var that stores number to be unsigned
* Return: absolute value of var i
*/
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
