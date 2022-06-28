#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - creates a new dog_t
* 
* Return: pointer to new dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogg, *p;
	unsigned int i;

	for (i = 0; i < strlen(name); i++)
		dogg.name[i] = name[i];
	dogg.age = age;
	for (i = 0; i < strlen(owner); i++)
		dogg.owner[i] = owner[i];
	p = &dogg;
	return (p);
}
