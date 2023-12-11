#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to fill
 *@b: the desired value
 *@n: number of bytes to change
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (n > 0)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}
