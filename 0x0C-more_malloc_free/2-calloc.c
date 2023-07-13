#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _memset - Entry point
 * _memset: fills arrays with constant byte
 * @s: input
 * @b: constant
 * @n: input
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - Entry point
 * _calloc: allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
