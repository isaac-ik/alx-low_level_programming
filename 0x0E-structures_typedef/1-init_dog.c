#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilaize a varibale of type struct dog
 * Programmer: Isaac-ik
 * @d: pointer to the struct dog
 * @name: pointer to the name
 * @age: age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	
		d->name = name;
		d->age = (float)age;
		d->owner = owner;
	}
}
