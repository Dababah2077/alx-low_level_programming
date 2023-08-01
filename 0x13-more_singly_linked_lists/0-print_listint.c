#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry point
 * print_listint: ...
 * @h: ...
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
