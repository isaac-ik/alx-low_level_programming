#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - printss a struct dog
 * @d: poointer to the structure
 * programmer: Isaac-ik
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
