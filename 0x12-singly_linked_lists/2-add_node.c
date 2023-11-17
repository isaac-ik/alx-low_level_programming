#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - a function
 * Programmer: Isaac-ik
 * Description: adds a new node at the beginning of a list_t list
 * @head: pointer to new head
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *currentNode;

	newstr = strdup(str);

	currentNode = malloc(sizeof(list_t));
	if (currentNode == NULL)
		return (NULL);
	currentNode->str = newstr;
	currentNode->len = strlen(newstr);
	currentNode->next = *head;
	*head = currentNode;

	return (currentNode);
}
