#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: the nodes
 * Return: the nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", current->len, current->str);
		}
		current = current->next;
		i += 1;
	}
	return (i);
}
