#include "main.h"
/**
* print_triangle - prints a triangle
* @size: var that stores value of triangle size
*/
void print_triangle(int size)
{
	int spaces, hash;

	spaces = size - 1;
	hash = 1;	
	for (; size >= 0; size--)
	{
		for (i = 0; i <= spaces; i++)
			_putchar(32);
		spaces--;
		for (j = 0; j <= hash; j++)
			_putchar(35);
		hash++;
		_putchar('\n');
	}
}
