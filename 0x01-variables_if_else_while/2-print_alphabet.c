#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lower and upper alphabet on the same line
 * Return: Always 0 (Success)
 */

int main(void)
{
char x = 'a';

while (x <= 'z')
{
	putchar(x);
	x++;
}
putchar('\n');
return (0);
}
