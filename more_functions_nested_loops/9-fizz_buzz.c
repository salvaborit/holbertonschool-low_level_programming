#include <stdio.h>
/**
* main - fizzbuzz
*/
int main(void)
{
	int i, fizz, buzz;

	for (i = 0; i <= 100; i++)
	{
		fizz = i % 3;
		buzz = i % 5;
		if (fizz == 3 && buzz == 5)
			printf("FizzBuzz ");
		else if (buzz == 5)
			printf("Buzz ");
		else if (fizz == 3)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
