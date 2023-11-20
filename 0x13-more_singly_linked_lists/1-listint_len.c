#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * listint_len - a linked list function
 * Programmer: Isaac-ik
 * Description: return the number of elements of a listint_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;
	const listint_t *p = h;/* assign it the address of the list */

	if (p == NULL)
		return (node);

	/* the address isnt pointing to a NULL */
	while (p != NULL)
	{
		node++;
		p = p->next;
	}

	return (node);
}
