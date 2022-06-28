#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes dog struct
* @d: pointer to new dog struct created
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name && age && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;		
	}
}
