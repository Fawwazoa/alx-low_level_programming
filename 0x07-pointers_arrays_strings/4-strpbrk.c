#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[y] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}
	return (NULL);
}
