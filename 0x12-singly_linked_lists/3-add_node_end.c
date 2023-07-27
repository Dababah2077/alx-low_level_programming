#include "lists.h"

/**
 * add_node_end - Entry point
 * add_node_end: ...
 * @haed: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);
	while (str)
	{
		new_node->str = strdup(str);
		if (!new_node)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
