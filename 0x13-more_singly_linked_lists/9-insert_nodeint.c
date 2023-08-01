#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * insert_nodeint_at_index: ..
 * @head: ...
 * @idx: ..
 * @n: ...
 * Return: ..
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	for (u = 0; temp && u < idx; u++)
	{
		if (u == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
