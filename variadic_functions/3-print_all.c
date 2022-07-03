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

	va_start(ap, format);
	i = 0;
	formatLen = strlen(format);
	if (format != NULL)
	{
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
					str = va_arg(ap, char *);
					!str ? printf("(nil)") : printf("%s", str);
					cond = 1;
					break;
			}
			if (cond == 1 && i < formatLen - 1)
				printf(", ");
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
