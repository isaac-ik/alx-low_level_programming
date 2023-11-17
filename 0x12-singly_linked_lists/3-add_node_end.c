#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - a function
 * Programmer: Isaac-ik
 * Description: adds a new node at the beginning of a list_t list
 * @head: pointer to new head
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *currentNode;
	list_t *p;

	p = *head;

	/* Allocating space and initializing the new node */
	currentNode = malloc(sizeof(list_t));
	if (currentNode == NULL)
		return (NULL);
	currentNode->str = strdup(str);
	currentNode->len = strlen(str);
	currentNode->next = NULL;
	/* attaching the new node to the existing list */
	while (1)
	{
		if (p == NULL)
		{
			p = currentNode;
			break;
		}
		/* iterating through the existing list till the current end */
		if (p->next == NULL)
		{
			p->next = currentNode;
			break;
		}
		p = p->next;
	}

	return (currentNode);
}
