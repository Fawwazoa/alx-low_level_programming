#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *add_node - add the first node
 * @head: Address of first element of the list
 *@str: pointer to string we want to print
 * Return: new element's address
 */
list_t *add_node(list_t **head, const char *str)
{

	struct list_s *temp = NULL;
	int i;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);

}
