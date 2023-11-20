#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a linked list function
 * Programmer: Isaac-ik
 * Description: adds a new element to the index in a listint_t list.
 * @head: address holding the address of beginning to the list
 * @index: index
 * @n: the new node element
 * Return: the address of the 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int node = 0;
	listint_t *p = *head;/* assign it the address of the list */
	listint_t *j;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (p == NULL && idx != 0)
	{
		return (NULL);
	}
	/* if the next address of the current node doesnt point to NULL */
	while (p->next != NULL || idx >= node)
	{
		if (idx == node)
		{
			j = p->next;
			p->next = new;
			new->n = n;
			new->next = j;
			return (new);
		}
		p = p->next;
		node++;
	}
	return (NULL);
}
