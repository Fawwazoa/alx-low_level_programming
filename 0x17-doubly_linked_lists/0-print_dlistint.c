#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 * @h: first element of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
		printf("\n");
	}
	return (i);
}
