#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: stores input value n
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (; n != 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				putchar(32);
		}
	}
	else if (n > 98)
	{
		for (; n!= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				putchar(32);
		}
	}
	else
		printf("%d", n);
	putchar('\n');
}
