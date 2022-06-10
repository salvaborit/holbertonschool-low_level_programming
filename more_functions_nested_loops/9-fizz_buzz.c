#include <stdio.h>
/**
* main - fizzbuzz
* Return: 0 (Success)
*/
int main(void)
{
	int i, fizz, buzz, fizzbuzz;

	for (i = 1; i <= 100; i++)
	{
		fizz = i % 3;
		buzz = i % 5;
		fizzbuzz = i % 15;
		if (i == 1)
			printf("%d", i);
		else if (fizzbuzz == 0)
			printf(" FizzBuzz");
		else if (buzz == 0)
			printf(" Buzz");
		else if (fizz == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
