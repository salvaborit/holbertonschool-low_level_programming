#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* main - Entry point
* 
* Return: 
*/
void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
