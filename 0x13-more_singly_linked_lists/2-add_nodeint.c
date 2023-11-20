#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - a linked list function
 * Programmer: Isaac-ik
 * Description: adds a nnew element to the beginning of a listint_t list.
 * @head: address holding the address of beginning to the list
 * @n: the new node element
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/* assign it the address of the list */

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head; /* address of the intital head element */
	*head = new;

	return (new);
}
