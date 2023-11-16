#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - a function
 * Programmer: Isaac-ik
 * Description: prints all the elements of a list_t list.
 * @h: a struct (given the properties of a singly linked list)
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (1)
	{
		if (h == NULL)
			break;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (count);

}
