#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure
 * @name: name pointer
 * @age: age
 * @owner: pointer to the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - a new name for type struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */

