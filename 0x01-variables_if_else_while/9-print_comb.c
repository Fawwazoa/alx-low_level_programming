#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print all single integer numbers of base 10
 * 		stating from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
	putchar(x);

	if (x != '9')

	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
