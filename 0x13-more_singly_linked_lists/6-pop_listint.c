#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - a linked list function
 * Programmer: Isaac-ik
 * Description: prints all the elements of a listint_t list.
 * @head: address containing addrss to the list
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *p = *head;/* assign it the address of the list */

	/* if address point to nothing */
	if (p == NULL)
		return (0);

	/* the address isnt pointing to a NULL */
	if (p != NULL)
	{
		num = p->n; /* assigns the data to num */
		if (p->next != NULL)
		{
			*head  = p->next; /* assign the next node address to head */
		}
		free(p);
	}

	return (num);
}
