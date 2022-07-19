#include "main.h"
/**
* set_bit - sets value of a bit to 1 at a given index
* @n: pointer to num
* @index: position of bit to set
* Return: 1 if success, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pn = *n, mask = 1;

	mask <<= index;
	if (index < 64 || n)
		*n = pn | mask;
	return (-1);

}
