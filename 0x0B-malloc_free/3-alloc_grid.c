#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer g
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **g = malloc(height * sizeof(int *));

	if (g == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));

		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(g[j]);
			}
			free(g);
			return (NULL);
		}
	}

	return (g);
}
