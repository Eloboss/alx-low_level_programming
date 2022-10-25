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

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
		boss = (*head)->n;
		elo = *head;
		*head = (*head)->next;
		free(elo);
	}
	return (boss);
}
