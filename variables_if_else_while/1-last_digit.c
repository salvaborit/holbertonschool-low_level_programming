#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (lastDigit > 5)
		printf("and is greater than 5");
	if (lastDigit == 0)
		printf("and is 0");
	if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
