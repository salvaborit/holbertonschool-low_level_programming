#include "main.h"
/**
* _isalpha - prints the last digit of a number
* Return: Always 0 (Success)
*/
int print_last_digit(int i)
{
	lastDigit = i % 10;

	_putchar(lastDigit);
	return (lastDigit);
}
