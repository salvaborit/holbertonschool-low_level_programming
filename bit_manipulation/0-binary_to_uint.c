#include "main.h"
/**
* binary_to_uint - converts binary number to unsigned int
* @b: points to string of 0 and 1 chars
* Return: converted number or 0 if failed
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i;

	if (!b)
		return (0);
	for (i = 0, sum = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		sum <<= 1;
		sum += b[i] - '0';
	}
	if (b[i] != '\0')
		return (0);
	return (sum);
}
