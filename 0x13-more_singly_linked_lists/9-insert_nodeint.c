#include "lists.h"

/**
 * insert_nodeint_at_index- Inserts new node at a given position
 * @head: Beginning of d node
 * @idx: Position of d node
 * @n: Value
 *
 * Return: Always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *elo;
	size_t i;

	elo = malloc(sizeof(listint_t));
	if (!elo)
	{
		return (NULL);
	}
	elo->n = n;
	elo->next = NULL;
	if (!*head && !idx)
	{
		*head = elo;
		return (elo);
	}
	else if (!*head && idx)
	{
		return (NULL);
	}
	else if (!idx)
	{
		elo->next = *head;
		*head = elo;
		return (elo);
	}
	while (i < (idx - 1))
	{
		elo = elo->next;
		i++;
	}
	elo->next = (*head)->next;
	(*head)->next = elo;
}
