#include "main.h"
/**
* get_bit - returns the value of a bit at a given index
* @n: number to get bit from
* @index: position if bit to get
* Return: value of bit at given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else if ((n & 1) == 0)
		return (0);
	return (-1);
}
