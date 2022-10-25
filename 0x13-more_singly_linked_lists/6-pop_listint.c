#include "lists.h"

/**
 * pop_listint- Deletes a node and returns its value
 * @head: Beginning of d node
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *elo;

	if (!*head)
	{
		return (0);
	}

	while (*head)
	{
		elo = *head;
		*head = (*head)->next;
		boss = elo->n;
		free(elo);
	}
	return (boss);
}
