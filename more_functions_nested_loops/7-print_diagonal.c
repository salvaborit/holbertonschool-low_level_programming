#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal for n spaces
* @n: var that stores number of lines the line will measure
*/
void print_diagonal(int n)
{
	int spaces, s, t;

	t = 0;
	for (; n > 0; n--)
	{
		for (s = 0; s <= t ; s++)
			if (sp != 0)
				_putchar(32);
		_putchar(92);
		_putchar('\n');
		t++;
	}
}
