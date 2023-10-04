#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{

	char *c;
	int size = 0;
	int i;

	if (!str)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	c = malloc(size + 1);
	if (!c)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
	i++;
	}
	return (c);
}
