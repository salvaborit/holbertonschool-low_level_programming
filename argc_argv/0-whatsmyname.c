#include <stdio.h>
/**
* main - prints its name
* @argv: array that stores arguments passed to command line
* @argc: unused
* Return: always 0, success
*/
int main(int  __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
