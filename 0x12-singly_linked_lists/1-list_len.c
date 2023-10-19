#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of linked list elements
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);

}
