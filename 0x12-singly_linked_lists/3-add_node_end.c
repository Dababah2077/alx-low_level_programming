#include "lists.h"

/**
 * add_node_end - Entry point
 * add_node_end: ...
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *x;
	size_t l;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	new_node->len = l;
	new_node->next = NULL;
	x = *head;
	if (x == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (x->next != NULL)
			x = x->next;
		x = new_node;
	}
	return (*head);
}
