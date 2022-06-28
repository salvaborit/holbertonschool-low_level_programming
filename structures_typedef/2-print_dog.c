#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	printf("Name: %s\n", d->name ? d->name : nil);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : nil);
}
