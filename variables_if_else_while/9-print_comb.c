#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(44);
		if (i != 9)
			putchar(127);
	}
	putchar('\n');
	return (0);
}
