#include "main.h"
/**
* cap_string - capitalizes words of a string
* @c: string to be capitalized
* Return: capitalized string
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		if ((c[i - 1] == 44 || c[i - 1] == 59 || c[i - 1] == 46 
			|| c[i - 1] == 33 || c[i - 1] == 63 
			|| c[i - 1] == 34 || c[i - 1] == 40 
			|| c[i - 1] == 41 || c[i - 1] == 123 
			|| c[i - 1] == 125 || c[i - 1] == 32 
			|| c[i - 1] == '\t' || c[i - 1] == '\n')
			&& (c[i] >= 97 && c[i] <= 122))
		{
			c[i] -= 32;
		}
	}
	return (c);
}
