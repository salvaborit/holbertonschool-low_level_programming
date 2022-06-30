#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* get_op_func - pointer to func
* 
* Return: 
*/
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL};

	i = 0;
	while (ops.op[i])
	{
		if (ops.op[i] == s)
		{
			return (ops.f(a, b));
		}
		i++;
	}
	return (0);
}
