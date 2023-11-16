#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - a function
 * Programmer: Isaac-ik
 * Description: returns the number of elements in a linked list_t list.
 * @h: pointer to the first elemnet on the linked list
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (1)
	{
		if (h == NULL)
			break;
		if (h->next == NULL)
		{
			count++;
			break;
		}
		else
			count++;
		h = h->next;
	}

	return (count);
}
