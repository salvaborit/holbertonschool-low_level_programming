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

	front = 0;
	back = 0;
	/* stores front diag values sum in front var */
	for (i = 0 ; a[i]; i = i + (size + 1))
		front = front + a[i];
	/* stores back diag values sum in back var */
	for (i = size - 1; a[i]; i = i + (size - 1))
		back = back + a[i];
	printf("%d, %d", front, back);
}
