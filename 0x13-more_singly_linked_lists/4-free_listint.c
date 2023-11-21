#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - a linked list function
 * Programmer: Isaac-ik
 * Description: frees a listint_t list.
 * @head: address of beginning to the list
 * Return: the number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;
	listint_t *j;

	/* Case1: if the list is empty */
	if (p == NULL)
		exit(1);

	/* Case2: if the next node is points to nothing */
	if (p->next == NULL)
	{
		free(p); /* just free the current node */
	}

	/* Case3: if the next node points to something */
	if (p->next != NULL)
	{
		j = p->next; /* assign the next node to j */
		free(p); /* free the current node */
		free_listint(j); /* call the free_listint function on j */
	}
}
