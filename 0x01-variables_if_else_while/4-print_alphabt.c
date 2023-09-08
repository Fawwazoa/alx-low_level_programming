#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet excluding e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
char x = 'a';

while (x <= 'z')
{
	if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
	x++;
}
putchar('\n');
return (0);
}
