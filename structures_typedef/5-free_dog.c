#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees memory in d
* @d: pointer to memory allocated to a dog
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
