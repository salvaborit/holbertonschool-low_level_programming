#include "main.h"
/**
* print_square - prints a square of # (hash) on the terminal
* @size: var that stores size of square
*/
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
			_putchar(35);
	_putchar('\n');
}
