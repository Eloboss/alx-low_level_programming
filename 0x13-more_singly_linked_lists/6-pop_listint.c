#include "lists.h"

/**
 * pop_listint- Deletes a node and returns its value
 * @head: Beginning of d node
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *elo;
	int boss;

	if (!*head)
	{
		return (0);
	}

	while (*head)
	{
		elo = *head;
		boss = elo->n;
		elo = (*head)->n;
		free(elo);
	}
	return (boss);
}
