#include <stdio.h>
/**
* main - prints arguments passed to CL
* @argc - number of arguments passed to CL
* @argv - unused
* Return: Always 0 (Success)
*/
int main(int argc, char  __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
