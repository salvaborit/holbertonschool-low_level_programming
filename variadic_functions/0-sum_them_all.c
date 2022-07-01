#include "variadic_functions.h"
/**
* sum_them_all - returns sum of all parameters
* @n: number of args to be passed
* Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
