#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * get_nodeint_at_index: ....
 * @head: ...
 * @index: ...
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int o = 0;
	listint_t *temp = head;

	while (temp && o < index)
	{
		temp = temp->next;
		o++;
	}
	return (temp ? temp : NULL);
}
