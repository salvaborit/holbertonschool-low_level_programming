#include "main.h"
/**
* print_sign - prints sign of a number
* @n: var that stores int to be checked
* Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(44);
		_putchar(32);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		_putchar(44);
		_putchar(32);
		return (-1);
	}
	else
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		return (0);
	}
}
