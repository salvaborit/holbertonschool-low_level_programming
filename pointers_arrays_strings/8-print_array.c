#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers + \n
* @a: pointer to firt int of array
* @n: number of elements of array to be printed
*/
void print_array(int *a, int n)
{
	for (; n > 0; n--)
	{
		printf("%d", *a);
		if (n > 1)
			printf(", ");
		a = a + 1;
	}
	putchar(10);
}
