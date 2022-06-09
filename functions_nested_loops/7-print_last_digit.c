#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* Return: value of var lastDigit
*/
int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = i % 10;
	if (i < 0)
	{
		lastDigit = -lastDigit;
		_putchar(lastDigit);
		return (lastDigit);
	}
	else
	{
		_putchar(lastDigit);
		return (lastDigit);
	}
}
