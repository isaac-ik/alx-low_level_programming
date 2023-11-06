#include "dog.h"

/**
 * my_dog - a struct
 * Programmer: Isaac-ik
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog ndog;
	struct dog *pndog = &ndog;	
	pndog->name = name;
	pndog->age = age;
	pndog->owner = owner;

	return (pndog);

}
