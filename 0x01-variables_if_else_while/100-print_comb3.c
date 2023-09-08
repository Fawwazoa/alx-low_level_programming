#include <stdio.h>
/**
 *main - Entry point.
 *Description:	Print all possible combinations of two different digits,
 *		in ascending order, separated by comma followed by a space
 *
 *Return: Always 0 (Success).
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a == 8 && b == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}
