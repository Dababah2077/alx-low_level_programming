#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Entry point
 * array_iterator: given as a parameter on each element of an array
 * @array: input
 * @size: the size of the array
 * @action: ..
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
