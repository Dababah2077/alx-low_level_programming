#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - Entry point
 * free_listint2: ..
 * @head: ...
 * Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
