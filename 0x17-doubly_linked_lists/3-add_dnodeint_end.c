#include "lists.h"

/**
 * add_dnodeint_end- Adds lists at d end
 * @head: head of d list
 * @n: position of d node
 * Return: Always 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *elo;
	dlistint_t *h;

	elo = malloc(sizeof(dlistint_t));
	if (elo == NULL)
	{
		return (NULL);
	}
	elo->n = n;
	elo->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = elo;
	}
	else
	{
		*head = elo;
	}

	elo->prev = h;

	return (elo);
}
