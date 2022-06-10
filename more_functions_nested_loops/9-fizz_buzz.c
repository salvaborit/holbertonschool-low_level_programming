#include <stdio.h>
/**
* main - fizzbuzz
*/
int main(void)
{
	int i, fizz, buzz, fizzbuzz;

	for (i = 0; i <= 100; i++)
	{
		fizz = i % 3;
		buzz = i % 5;
		fizzbuzz = i % 15;
		if (fizzbuzz == 0 && i != 0)
			printf("FizzBuzz ");
		else if (buzz == 0 && i != 0)
			printf("Buzz ");
		else if (fizz == 0 && i != 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
