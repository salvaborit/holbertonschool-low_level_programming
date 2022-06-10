#include "main.h"
/**
* print_line - draws a straight line in the terminal for n spaces
* @n: var that stores number os spaces line will measure
*/
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
