#include "variadic_functions.h"
/**
* print_strings - prints strings + \n
* @separator: string to be printed between strings
* @n: number of args
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char*);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
