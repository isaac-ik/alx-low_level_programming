#include "dog.h"

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
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
