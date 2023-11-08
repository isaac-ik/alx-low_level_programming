#include "function_pointers.h"

/**
 * int_index - a function
 * Programmer: Isaac-ik
 * Description: searches for an integer
 * @parray: an array
 * @size: number of elements in the array
 * @pcmp: pointer to a <function>(int)
 * Return: nothing
 */
int int_index(int *parray, int size, int (*pcmp)(int))
{
	int i;

	if (parray != NULL && size > 0 && pcmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (pcmp(parray[i]) == 1)
				return (i);
		}
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
