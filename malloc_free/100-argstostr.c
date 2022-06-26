#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* fromagrc - returns argc value
* @ac: number of arguments passed to CL
* @av: array of arguments passed to CL
* Return: pointer to string
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, lenStr, s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{}
		lenStr += j;
	}
	lenStr += i;
	str = malloc(lenStr);
	if (str == NULL)
		return (NULL);
	s = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, s++)
			str[s] = av[i][j];
		str[s] = '\n';
		s++;
	}
	s++;
	str[s] = '\0';
	return (str);
		
}
