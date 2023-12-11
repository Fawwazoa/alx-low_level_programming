#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 * Return: the number of bytes that compose the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int length;

	length = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' && accept[y] != s[x]; y++)
			;
		if (s[x] == accept[y])
			length++;
		if (accept[y] == '\0')
			return (length);
	}
	return (length);
}
