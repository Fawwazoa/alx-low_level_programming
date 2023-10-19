#include <stdio.h>
#include "lists.h"

/**
 * print_list - print element of a list
 * @h: first element of the list
 * Return: nodes number
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			i++;
		} else
		{
		printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;
		printf("\n");
		}
	}
	return (i);

}
