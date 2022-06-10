#include "main.h"
/**
* print_most_numbers - prints 0-9 except 2 and 4
*/
void print_most_numbers(void)
{
	int i:

	for (i = 0; i <= 9; i++0)
	{
		if (i = 2)
			continue;
		else if (i = 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
