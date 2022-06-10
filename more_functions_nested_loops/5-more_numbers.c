#include "main.h"
/**
* more_numbers - prints numbers 0-14 10 times
*/
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			_putchar(num + '0');
		}
	}
}
