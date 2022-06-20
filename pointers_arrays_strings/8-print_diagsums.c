#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the diagonals of a square matrix of ints
* @a: matrix to be checked
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, frontSum, backSum;

	/* front diag */
	i = 0;
	frontSum = 0;
	while (i < size * size)
	{
		frontSum = frontSum + a[i];
		i = i + (size + 1);
	}
	i = size - 1;
	backSum = 0;
	while (i < size * size)
	{
		backSum = backSum + a[i];
		i = i + (size - 1);
	}
	printf("%d, %d", frontSum, backSum);
}
