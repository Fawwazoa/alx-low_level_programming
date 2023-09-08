#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lower and then  upper alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
char x = 'a';
char X = 'A';

while (x <= 'z')
{
	putchar(x);
	x++;
}
while (X <= 'Z')
{
	putchar(X);
	X++;
}
putchar('\n');
return (0);
}
