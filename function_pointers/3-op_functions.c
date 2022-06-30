#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* op_add - adds two integers
* @a: int 1
* @b: int 2
* Return: result of addition
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtracts one int from another
* @a: int 1
* @b: int 2 (to be subtracted from a)
* Return: result of subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplies two ints
* @a: int 1
* @b: int 2
* Return: result of multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divides one int by another
* @a: dividend
* @b: divisor
* Return: result of division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - finds remainer of division of 2 ints
* @a: dividend
* @b: divisor
* Return: remainder of division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
