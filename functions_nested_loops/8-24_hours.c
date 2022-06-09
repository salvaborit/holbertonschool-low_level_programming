#include <stdio.h>
/**
* jack_bauer - prints every minute of the day
*
* Return: Always 0 (Success)
*/
int jack_bauer(void)
{
	int h;
	int m;

	for (m = 0; m <= 59; m++)
		_putchar(m + '0');
	return (0);
}
