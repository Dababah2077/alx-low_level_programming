#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Entry point
 * _calloc: allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	l = nmemb * size;
	m = malloc(l);

	if (m == 0)
		return (NULL);

	while (i < l)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
