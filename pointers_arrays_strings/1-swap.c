#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps values of 2 integers
* @a: one int
* @b: another int
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
