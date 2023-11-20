#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - a linked list function
 * Programmer: Isaac-ik
 * Description: return the sum of  all the data of a listint_t list.
 * @head: pointer to the list
 * Return: the number of nodes
 */
int sum_listint(listint_t *head)
{
	int node = 0;
	int sum = 0;
	listint_t *p = head;/* assign it the address of the list */

	if (p == NULL)
		return (sum);

	/* the address isnt pointing to a NULL */
	while (p != NULL)
	{
		sum = sum + (p->n);
		node++;
		p = p->next;
	}

	return (sum);
}
