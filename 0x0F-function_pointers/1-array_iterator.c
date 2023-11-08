#include "function_pointers.h"

/**
 * array_iterator - function
 * Programmer: Isaac-ik
 * Description: executes a function given as a parameter
 * on each element of an array.
 * @parray: the array
 * @size: size of the array
 * @paction: pointer to function(int)
 * Return: nothing
 */
void array_iterator(int *parray, size_t size, void (*paction)(int))
{
	unsigned int i;

	if (parray != NULL && paction != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			paction(parray[i]);
		}
	}
}

