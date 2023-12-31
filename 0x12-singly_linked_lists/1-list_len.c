#include "lists.h"

/**
 * list_len - Entry point
 * list_len: ...
 * @h: ...
 * Return: ...
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
