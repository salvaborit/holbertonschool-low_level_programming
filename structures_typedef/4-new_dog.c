#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - creates a new dog_t
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogg, *p;
	unsigned int i;
	int nameLen, ownLen;

	nameLen = strlen(name);
	ownLen = strlen(owner);
	dogg.name = malloc(nameLen);
	if (!dogg.name)
		return (NULL);
	dogg.owner = malloc(ownLen);
	if (!dogg.owner)
	{
		free(dogg.name);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		dogg.name[i] = name[i];
	dogg.age = age;
	for (i = 0; i < strlen(owner); i++)
		dogg.owner[i] = owner[i];
	p = &dogg;
	return (p);
}
