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
	dog_t *bosco;
	unsigned int i;
	int nameLen, ownLen;

	nameLen = strlen(name);
	ownLen = strlen(owner);
	bosco = malloc(sizeof(dog_t));
	if (bosco == NULL)
		return (NULL);
	bosco->name = malloc(nameLen + 1);
	if (bosco->name == NULL)
	{
		free(bosco);
		free(bosco->name);
		return (NULL);
	}
	bosco->owner = malloc(ownLen + 1);
	if (bosco->owner == NULL)
	{
		free(bosco);
		free(bosco->name);
		free(bosco->owner);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		bosco->name[i] = name[i];
	bosco->name[i] = '\0';
	bosco->age = age;
	for (i = 0; i < strlen(owner); i++)
		bosco->owner[i] = owner[i];
	bosco->owner[i] = '\0';
	return (bosco);
}
