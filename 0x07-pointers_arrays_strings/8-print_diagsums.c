#include "main.h"
#include <string.h>
/**
 * print_diagsums - Entry point
 * print_diagsums: prints the sum of the two diagonals of
 * the two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 = sum2 + a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}