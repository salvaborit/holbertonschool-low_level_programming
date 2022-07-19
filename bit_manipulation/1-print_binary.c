#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: integer to convert to binary
*/
void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
