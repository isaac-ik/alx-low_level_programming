#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a linked list function
 * Programmer: Isaac-ik
 * Description: returns the nth elements of a listint_t list.
 * @head: pointer to the list
 * @index: index
 * Return: address to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *p = head;/* assign it the address of the list */

	if (p == NULL)
		return (NULL);

	/* the address isnt pointing to a NULL */
	while (p != NULL)
	{
		if (index == node)
		{
			return (p);
		}
		node++;
		p = p->next;
	}

	return (NULL);
}
