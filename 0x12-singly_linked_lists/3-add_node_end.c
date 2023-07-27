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
	list_t *new, *cmp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	cmp = *head;
	while (cmp->next)
		cmp = cmp->next;
	cmp->next = new;

	return (new);
}
