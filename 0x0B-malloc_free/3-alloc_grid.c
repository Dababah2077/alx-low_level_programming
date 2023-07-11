#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * alloc_grid: 2 dimensional array
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;
	a = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(sizeof(int) * width);
			if (a[i] == NULL)
			{
				while (i--)
				{
					free(a[i]);
				}
				free(a);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				a[i][j] = 0;
			}
		}
		return (a);
	}
}
