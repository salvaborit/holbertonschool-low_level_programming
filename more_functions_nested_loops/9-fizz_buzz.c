#include <stdio.h>
/**
* main - fizzbuzz
*/
int main(void)
{
	int i, fizz, buzz;

	for (i = 0; i <=100; i++)
	{
		fizz = i % 3;
		buzz = i % 5;
		if (fizz == 0)
			printf("Fizz ");
		else if (buzz == 0)
			printf("Buzz ");
		else if (fizz == 0 && buzz == 0)
			printf("FizzBuzz ");
		else
			printf("%d", i);
	}
	return (0);
}
