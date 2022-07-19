#include "main.h"
/**
* flip_bits - returns number of bits to flip to get from one num to another
* @n: src number
* @m: dest num
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int c;

	for (i = 0, c = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			c++;
		n >>= 1;
		m >>= 1;
	}
	return (c);
}
