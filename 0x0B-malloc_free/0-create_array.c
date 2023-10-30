#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a array of chars
 * Description: creates an array of chars, and
 * initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to initilizes the array.
 * Return: the addres of the array.
 */
char *create_array(unsigned int size, char c)
{
	char *parray;

	if (size == 0)
	{
		return (NULL);
	}

	parray = malloc(size);
	if (parray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i = size - 1; i++)
	{
		parray[i] = c;
	}
	return (parray);
}
