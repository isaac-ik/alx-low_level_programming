#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  malloc_checked - function
 *  Description: allocates memory using malloc.
 *  Programmer: Isaac-ik
 *  @b: the number of space to be allocated
 *  Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ps;

	ps = malloc(b);
	if (ps == NULL)
	{
		exit(98);
	}
	return (ps);
}
