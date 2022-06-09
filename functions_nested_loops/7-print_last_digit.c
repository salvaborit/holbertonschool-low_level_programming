#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* Return: value of var lastDigit
*/
int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = i % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
