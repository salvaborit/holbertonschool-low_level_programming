#include "main.h"
#include <stdio.h>
/**
* print_chessboard - prints a chessboard
* @a: array to print out on the chessboard
*/
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
