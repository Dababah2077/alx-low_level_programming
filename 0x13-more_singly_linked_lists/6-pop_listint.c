#include "lists.h"
/**
 * pop_listint - Entry point
 * pop_listint: ....
 * @head: ...
 * Return: ..
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
