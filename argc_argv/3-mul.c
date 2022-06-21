#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two numbers
* @argc: number of arguments passed to CL
* @argv: array of strings of arguments passed to CL
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int mul1, mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		printf("%d\n", mul1 * mul2);
	}
	return (0);
}
