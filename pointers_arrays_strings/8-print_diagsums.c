#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the diagonals of a square matrix of ints
* @a: matrix to be checked
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, j, frontSum, backSum;

	/* front diag */
	i = 0;
	j = 0;
	while (i < size)
	{
		frontSum = frontSum + a[j];
		i++;
		j = j + (size + 1);
	}
	i = 0;
	j = size - 1;
	while (i < size - 1)
	{
		backSum = backSum + a[j];
		i++;
		j = j + (size - 1);
	}
	printf("%d, %d", frontSum, backSum);
}
