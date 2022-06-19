#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the diagonals of a square matrix of ints
* @a: matrix to be checked
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, front, back;

	/* stores front diag values in sum1 array */
	for (i = 0 ; a[i]; i = i + (size + 1))
	{
		front += a[i];
	}
	/* stores back diag values in sum2 array */
	for (i = 0; a[i]; i = i + (size - 1))
	{
		back += a[i];
	}
	printf("%d, %d", front, back);
}
