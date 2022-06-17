#include <stdio.h>
/**
* _strcmp - compares 2 strings
* @s1: string 1
* @s2: string 2
* Return: 0 if same, positive if s1 > s2, negative if s1 < s2.
*/
int _strcmp(char *s1, char *s2)
{
	int i, ret;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i])
		ret = s1[i] - s2[i];
	else if (s1[i] < s2[i])
		ret = s2[i] - s1[i];
	else
		ret = 0;
	return (ret);
}
