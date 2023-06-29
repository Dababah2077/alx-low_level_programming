#include "main.h"
/**
 * reverse_array - Entry point
 * reverse_array: reverses the content of an array of integers
 * @a: array of integers
 * @n: checks input of functions
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
