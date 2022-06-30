#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - Entry point
* @argc: number of arguments passed to CL
* @argv: array of arguments passed to CL
* Return: result of operation
* 3 MAX IFs
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (strlen(argv[2]) != 1 || f == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	printf("%d\n", f(a, b));
	return (0);
}
