#include "main.h"
/**
* jack_bauer - prints every minute of the day
* @h: var that stores value for hours
* @m: var that stores value for minutes
* Return: void
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(58);
		for (m = 0; m <= 59; m++)
		{
			_putchar((m / 10) + '0');
    			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
