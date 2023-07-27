#include "lists.h"

/**
 * _strlen - Entry point
 * _strlen: ...
 * @s: ...
 * Return: ...
 */
int _strlen(char *s)
{
	int x = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - Entry point
 * print_list: ...
 * @h: ...
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		y++;
	}
	return (y);
}
