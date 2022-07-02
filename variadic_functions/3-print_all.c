#include "variadic_functions.h"
/**
* print_all - prints anything
* @format - string (constant)
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, n, cond, formatLen;
	char c;

	i = 0;
	n = 0;
	while (format[i])
	{
		c = format[i];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
			n++;
		i++;
	}

	va_start(ap, format);
	i = 0;
	formatLen = strlen(format);
	while (format[i])
	{
		cond = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				cond = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				cond = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				cond = 1;
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				cond = 1;
				break;
		}
		if (cond == 1 && i < formatLen - 1)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
