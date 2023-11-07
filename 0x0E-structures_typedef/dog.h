#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure
 * @name: name pointer
 * @age: age
 * @owner: pointer to the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/**
 * dog_t - a new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

