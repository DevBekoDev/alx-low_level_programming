#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * list_len -  returns  the number of elements in a linked list_t list.
 * @h: the nodes
 * Return:  the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i += 1;
	}
	return (i);
}
