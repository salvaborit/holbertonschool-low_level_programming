#include <stdio.h>
/**
* _strcmp - compares 2 strings
* @s1: string 1
* @s2: string 2
* Return: 0 if same, positive if s1 > s2, negative if s1 < s2.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (s2[i] - s1[i]);
}
