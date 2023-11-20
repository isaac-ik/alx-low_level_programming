#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a linked list function
 * Programmer: Isaac-ik
 * Description: adds a new element to the end of a listint_t list.
 * @head: address holding the address of beginning to the list
 * @n: the new node element
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;/* assign it the address of the list */

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (p == NULL)
	{
		p = new;
		new->n = n;
		new->next = NULL;
		*head = new;

		return (new);
	}
	/* if the next address of the current node doesnt point to NULL */
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}
