#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure of type dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
