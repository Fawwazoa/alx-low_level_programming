#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum the numbers of a dlistint_t list.
 * @head: pointer to the first element of the list
 * Return: the summation of the numbers
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
