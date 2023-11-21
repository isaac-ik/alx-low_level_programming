#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - a linked list function
 * Programmer: Isaac-ik
 * Description: frees a listint_t list, then assigns head to NULL
 * @head: address of beginning to the list
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *j;

	if (p == NULL)
		*head = NULL;
		exit(1);

	/* if the next node is points to nothing */
	if (p->next == NULL)
	{
		free(p); /* just free the current node */
		*head = NULL;
		exit(1);
	}

	/* if the next node points to something */
	if (p->next != NULL)
	{
		j = p->next; /* assign the next node to j */
		free(p); /* free the current node */
		free_listint2(&j); /* call the free_listint function on j */
	}
	*head = NULL;
	exit(1);
}
