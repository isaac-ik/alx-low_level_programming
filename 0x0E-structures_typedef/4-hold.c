#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a struct
 * Programmer: Isaac-ik
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *pndog;

	pndog = (dog_t *)malloc((sizeof(char *) * 2) + sizeof(double) + 1);

	if (pndog == NULL)
		return (NULL);
	pndog->name = name;
	pndog->age = age;
	pndog->owner = owner;

	return (pndog);

}
