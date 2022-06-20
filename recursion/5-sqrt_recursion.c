#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
/**
* sqroot - sub function that loops natural num tester starting at i = 1
* @n: number to calculate sq root of
* @i: number to square to test for only naturals (i + 1 every loop)
* Return: sq root of n
*/
int sqroot(int n, int i)
{
	if (i <= n)
	{
		if (i * i == n)
			return (i);
		else
			return (sqroot(n, i + 1));
	}
	else
		return (-1);
	return (0);
}
