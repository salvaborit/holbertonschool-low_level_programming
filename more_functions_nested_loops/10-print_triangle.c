#include "main.h"
/**
* print_triangle - prints a triangle
* @size: var that stores value of triangle size
*/
void print_triangle(int size)
{
	int spaces, hash, i, j;

	spaces = size - 1;
	hash = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; size > 0; size--)
		{
			for (i = 0; i < spaces; i++)
				_putchar(32);
			spaces--;
			for (j = 0; j < hash; j++)
				_putchar(35);
			hash++;
			_putchar('\n');
		}
	}
}
