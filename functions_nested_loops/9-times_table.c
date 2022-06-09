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
	int dig1;
	int dig2;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			res = num * mult;
			dig1 = res / 10;
			dig2 = res % 10;	
			if (dig1 == 0)
			{
				if (mult == 0)
				{
					_putchar(dig2 + '0');
						if (mult < 9)
							_putchar(44);
						else
							_putchar('\n');
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar(dig2 + '0');
						if (mult < 9)
							_putchar(44);
						else
							_putchar('\n');
			}
			else
			{
			_putchar(32);
			_putchar(dig1 + '0');
			_putchar(dig2 + '0');
				if (mult < 9)
					_putchar(44);
				else
					_putchar('\n');
			}
		}
	}
}
