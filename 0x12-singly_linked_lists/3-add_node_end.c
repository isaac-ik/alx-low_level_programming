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
	char *newstr;
	list_t *currentNode;
	list_t *pnext;

	pnext = *head;
	newstr = strdup(str);

	currentNode = malloc(sizeof(list_t));
	if (currentNode == NULL)
		return (NULL);
	while (1)
	{
		if (pnext->next == NULL || pnext == NULL)
		{
			pnext->next = currentNode;
			break;
		}
		pnext = pnext->next;
	}
	currentNode->str = newstr;
	currentNode->len = strlen(newstr);
	currentNode->next = NULL;

	return (currentNode);
}
