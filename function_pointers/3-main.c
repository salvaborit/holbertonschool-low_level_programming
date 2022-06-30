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
int main(int argc; char *argv[])
{
	int a, b;
	char op;

	if (argc != 4)
	{
		printf("Error\n", )
		exit (98);
	}
	a = atoi(argv[2]);
	b = atoi(argv[4]);
	op = argv[3];
	if (op != '+' && op != "-" && op != "*" && op != "/" && op != "%")
	{
		printf("Error\n");
		exit (99);
	}
	printf("%d\n", get_op_func(op)(a, b));

}
