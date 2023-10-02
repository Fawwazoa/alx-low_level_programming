#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * StrIntCheck - Check whether character is an integer
 * @str: array of characters
 *
 * Return: Always 0 (Success)
 */
bool StrIntCheck(const char *str)
{
	int idx = 0;

	if (str[idx] == '-')
	{
		idx++;
	}

	for (; str[idx] != '\0'; idx++)
	{
		if (!isdigit((char)str[idx]))
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int temp1, temp2, prod;

	if (argc == 3)
	{
		if (StrIntCheck(argv[1]) && StrIntCheck(argv[2]))
		{	temp1 = atoi(argv[1]);
			temp2 = atoi(argv[2]);

			prod = temp1 * temp2;

			printf("%d\n", prod);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
