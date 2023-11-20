#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint - a linked list function
 * Programmer: Isaac-ik
 * Description: prints all the elements of a listint_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node = 0;
	const listint_t *p = h;/* assign it the address of the list */

	if (p == NULL)
		return (node);

	/* the address isnt pointing to a NULL */
	while (p != NULL)
	{
		printf("%d\n", p->n);
		node++;
		p = p->next;
	}

	return (node);
}
