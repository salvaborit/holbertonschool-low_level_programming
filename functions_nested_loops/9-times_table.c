#include "main.h"
/**
* times_table - prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
	int num;
	int mult;
	int res;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
		res = num * mult;
		_putchar(res + '0');
		_putchar(44);
		_putchar(32);
		}
	_putchar('\n');
	}
}
