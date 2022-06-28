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
	dog_t *dogg;
	unsigned int i;
	int nameLen, ownLen;

	nameLen = strlen(name);
	ownLen = strlen(owner);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(nameLen + 1);
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(ownLen);
	if (dogg->owner == NULL)
	{
		free(dogg);
		free(dogg->name);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		dogg->name[i] = name[i];
	dogg->name[i] = '\0';
	dogg->age = age;
	for (i = 0; i < strlen(owner); i++)
		dogg->owner[i] = owner[i];
	dogg->owner[i] = '\0';
	return (dogg);
}
