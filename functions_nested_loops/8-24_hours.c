#include "main.h"
/**
* jack_bauer - prints every minute of the day
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int m;

	for (m = 0; m <= 59; m++)
		_putchar(m + '0');
}
