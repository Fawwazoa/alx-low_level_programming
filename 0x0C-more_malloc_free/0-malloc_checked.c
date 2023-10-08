#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i ==w NULL)
		exit(98);
	return (i);
}
