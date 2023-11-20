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
	while (p != NULL || index >= node)
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

/**
 * insert_nodeint_at_index - a linked list function
 * Programmer: Isaac-ik
 * Description: adds a new element to the index in a listint_t list.
 * @head: address holding the address of beginning to the list
 * @idx: index
 * @n: the new node element
 * Return: the address of the new elment
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int node = 0;
	listint_t *p = *head;/* assign it the address of the list */
	listint_t *j, *pre;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (p == NULL && idx != 0)
	{
		return (NULL);
	}
	/* if the next address of the current node doesnt point to NULL */
	while (p->next != NULL && idx >= node)
	{
		if (idx == 0)
		{
			j = p;
			new->n = n;
			new->next = j;
			*head = new;
			return (new);
		}
		if (idx == node)
		{
			pre = get_nodeint_at_index(*head, idx - 1);
			j = p; /* assign the current node to j */
			new->n = n; /* assign the data to the new node */
			new->next = j; /* assign the current node address to the new node next */
			pre->next = new; /* set the previous node next to the new */
			return (new);
		}
		p = p->next;
		node++;
	}
	return (NULL);
}
