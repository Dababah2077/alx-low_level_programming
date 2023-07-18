#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * array_range: creates an array of integers
 * @min: input
 * @max: input
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int f = 0;
	int *x;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (x == 0)
		return (NULL);
	while (min <= max)
	{
		x[f] = min;
		f++;
		min++;
	}
	return (x);
}
