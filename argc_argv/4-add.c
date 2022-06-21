#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: number of arguments passed to CL
* @argv: array of strings of arguments passed to CL
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, j, sum;
	/* checks if there are arguments */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/* checks if everything in argv are digits */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	/* actual code */
	for (i = 0, sum = 0; argv[i]; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
