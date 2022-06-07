#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int caps = 'A';
	int lower = 'a';

	for (; lower <= 'z'; lower++)
		putchar(lower);
	for (; caps <= 'Z'; caps++)
		putchar(caps);
	putchar('\n');
	return (0);
}
