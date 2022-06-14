#include <stdio.h>
/**
* reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98
* @*n: pointer to
*/
void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = &p;
}
