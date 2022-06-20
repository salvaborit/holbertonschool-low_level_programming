#include "main.h"
/**
* _pow_recursion - returns value of x to the y power
* @x: base number
* @y: exponent
* Return: result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (0);
	else if (x == 1)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
