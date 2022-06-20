#include "main.h"
/**
* is_prime_number - checks if a number is prime
* @n: number to check if prime
* Return: 1 if prime, 0 if otherwise
*/
int is_prime_number(int n)
{
	return (prm(n, 2));
}
/**
* prm - checks if a number is prime
* @n: number to check if prime
* @i: numbers that n will be divided by to check if prime
* Return: 1 if prime, 0 if otherwise
*/
int prm(int n, int i)
{
	if (i == n)
		return (1);
	if (n <= 0)
		return (0);
	if (n <= 2)
		return (1);
	if (n % i == 0)
		return (0);
	return(prm(n, i + 1));
}
