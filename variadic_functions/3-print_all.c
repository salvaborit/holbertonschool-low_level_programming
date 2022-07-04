#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: string (constant)
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, cond, formatLen;
	char *str;

	i = 0;
	if (format)
		formatLen = strlen(format);
	va_start(ap, format);
	while (format && format[i])
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
				str = va_arg(ap, char *);
				!str ? printf("(nil)") : printf("%s", str);
				cond = 1;
				break;
		}
		if (cond == 1 && i < formatLen - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
