#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: var that stores value to check
* Return: value of var lastDigit
*/
int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = i % 10;
	if (i < 0)
	{
		lastDigit = -lastDigit;
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
	else
	{
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
}
